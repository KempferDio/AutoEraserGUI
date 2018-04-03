#include "addpathswindow.h"
#include "ui_addpathswindow.h"

AddPathsWindow::AddPathsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddPathsWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Новые отслеживаемые пути");
    model = new QDirModel(this);
    model->setFilter(QDir::AllDirs | QDir::NoDotAndDotDot);
    ui->treeView->setModel(model);
}

AddPathsWindow::~AddPathsWindow()
{
    delete ui;
}

void AddPathsWindow::on_treeView_doubleClicked(const QModelIndex &index)
{
    paths << model->filePath(index);
    paths.removeDuplicates();
    ui->pathsList->clear();
    ui->pathsList->addItems(paths);
}

void AddPathsWindow::on_AddExts_clicked()
{
    emit sendPaths(paths);
    this->close();
}

void AddPathsWindow::on_pathsList_doubleClicked(const QModelIndex &index)
{
    QList<QListWidgetItem*> items = ui->pathsList->selectedItems();

    foreach (QListWidgetItem* item, items) {
        paths.removeOne(item->text());
    }
    ui->pathsList->clear();
    ui->pathsList->addItems(paths);
}
