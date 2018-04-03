#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap(64, 64);
    pixmap.load("erase.png");
    QIcon icon(pixmap);
    this->setWindowTitle("AutoEraser");
    this->setWindowIcon(icon);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(icon);
    trayIcon->setToolTip("AutoEraser");

    QMenu *menu = new QMenu(this);
    QAction *viewWindow = new QAction(trUtf8("Развернуть окно"), this);
    QAction *quitAction = new QAction(trUtf8("Выход"), this);

    connect(viewWindow, SIGNAL(triggered(bool)), this, SLOT(show()));
    connect(quitAction, SIGNAL(triggered(bool)), this, SLOT(close()));

    menu->addAction(viewWindow);
    menu->addAction(quitAction);

    trayIcon->setContextMenu(menu);
    trayIcon->show();

    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));

    autoEraser = new AutoEraser;
    autoEraser->SetDeadlineDate(1, 0, 0);
    ui->deadlineLabel->setText(autoEraser->GetDeadlineDate());

    //Default values
    //Later I'll change it to loading settings from ini file
    MainWindow::timeDelay = 10;
    MainWindow::enableMessages = true;
    MainWindow::enableAutoErase = false;
    getDeadline(14, 0, 0, timeDelay, enableMessages, enableAutoErase);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event) {
    if(this->isVisible() && ui->trayCheckBox->isChecked()) {
        event->ignore();
        this->hide();
        QSystemTrayIcon::MessageIcon _icon = QSystemTrayIcon::MessageIcon(QSystemTrayIcon::Information);

        if(enableMessages) {
            trayIcon->showMessage("AutoEraser", trUtf8("Приложение свернуто в трей. Чтобы развернуть окно приложения, щелкните по иконке в трее."), _icon, 100);
        }
    }
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason) {
    switch(reason) {
    case QSystemTrayIcon::Trigger:
        if(ui->trayCheckBox->isChecked()) {
            if(!this->isVisible()) {
                this->show();
            } else {
                this->hide();
            }
        }
        break;
     default:
        break;
    }
}

void MainWindow::getPaths(QStringList paths) {
    autoEraser->trackingPaths += paths;

    autoEraser->trackingPaths.removeDuplicates();
    ui->pathList->clear();
    ui->pathList->addItems(autoEraser->trackingPaths);

}

void MainWindow::getExt(QString ext) {
    autoEraser->AddTrackingExt(ext);
    autoEraser->trackingExts.removeDuplicates();
    ui->extList->clear();
    ui->extList->addItems(autoEraser->trackingExts);
}

void MainWindow::getDeadline(int days, int hours, int mins, int _timeDelay, bool _enableMessages, bool _enableAutoErase) {
    autoEraser->SetDeadlineDate(days, hours, mins);
    timeDelay = _timeDelay * 1000 * 60;
    enableMessages = _enableMessages;
    enableAutoErase = _enableAutoErase;

    if(enableAutoErase) {
        timer = new QTimer();
        connect(timer, SIGNAL(timeout()), this, SLOT(checkFiles()));
        timer->start(timeDelay);

        QString delay = QString::number(timeDelay / 1000 / 60);

         ui->deadlineLabel->setText("Дедлайн: " + autoEraser->GetDeadlineDate() + "\n" + "Проверка происходит каждые " + delay + " минут");

    } else {
        ui->deadlineLabel->setText("Дедлайн: " + autoEraser->GetDeadlineDate() + "\n" + "Проверка отключена.");
    }
}

void MainWindow::checkFiles()
{
    if(!enableAutoErase) {
        return;
    }

    if(!isExtAndPathsAreNonEmpty()) {
        return;
    }
    if(enableMessages) {
        trayIcon->showMessage("AutoEraser", trUtf8("Плановая проверка файлов..."), QSystemTrayIcon::Information, 1000);
    }
    autoEraser->CheckFiles();
}

void MainWindow::on_pushButton_5_clicked()
{
    if(!isExtAndPathsAreNonEmpty()) {
        return;
    }

    if(enableMessages) {
        trayIcon->showMessage("AutoEraser", trUtf8("Запущена проверка файлов..."), QSystemTrayIcon::Information, 1000);
    }
    autoEraser->CheckFiles();
}

void MainWindow::on_addPathBtn_clicked()
{
    addPathWindow = new AddPathsWindow(this);
    connect(addPathWindow, SIGNAL(sendPaths(QStringList)), this, SLOT(getPaths(QStringList)));
    addPathWindow->show();
}



void MainWindow::on_pushButton_2_clicked()
{
    addExtWindow = new AddExtWindow(this);
    connect(addExtWindow, SIGNAL(sendExt(QString)), this, SLOT(getExt(QString)));
    addExtWindow->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    setDeadline = new SetDeadline(this);
    connect(setDeadline, SIGNAL(sendDeadline(int,int,int,int,bool,bool)), this, SLOT(getDeadline(int,int,int,int,bool,bool)));
    setDeadline->show();
}

bool MainWindow::isExtAndPathsAreNonEmpty() {
    if(autoEraser->trackingPaths.empty()) {
        if(enableMessages) {
            trayIcon->showMessage("AutoEraser", trUtf8("Отслеживаемые пути отсутствуют"), QSystemTrayIcon::Information, 1000);
        }
        Log::LogWarning("Tracking paths is empty");
        return false;
    }

    if(autoEraser->trackingExts.empty()) {
        if(enableMessages) {
            trayIcon->showMessage("AutoEraser", trUtf8("Отслеживаемые расширения отсутствуют"), QSystemTrayIcon::Information, 1000);
        }
        Log::LogWarning("Tracking extensions is empty");
        return false;
    }

    return true;
}

void MainWindow::on_pushButton_4_clicked()
{
    QList<QListWidgetItem*> pathsItems = ui->pathList->selectedItems();
    QList<QListWidgetItem*> extItems = ui->extList->selectedItems();


    foreach (QListWidgetItem *item, pathsItems) {
        autoEraser->trackingPaths.removeOne(item->text());
    }

    foreach(QListWidgetItem *item, extItems) {
        autoEraser->trackingExts.removeOne(item->text());
    }

    qDeleteAll(ui->pathList->selectedItems());
    qDeleteAll(ui->extList->selectedItems());
}
