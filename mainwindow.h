#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include <QMenu>
#include <autoeraser.h>
#include <addpathswindow.h>
#include <addextwindow.h>
#include <setdeadline.h>
#include <Log.h>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int timeDelay;
    bool enableMessages;
    bool enableAutoErase;

    void closeEvent(QCloseEvent *event);

public slots:
    void getPaths(QStringList paths);
    void getExt(QString ext);
    void getDeadline(int days, int hours, int mins, int timeDelay, bool enableMessages, bool enableAutoErase);
    void checkFiles();

private slots:
    void iconActivated(QSystemTrayIcon::ActivationReason reason);

    void on_addPathBtn_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QSystemTrayIcon *trayIcon;
    QMenu *menu;
    AutoEraser *autoEraser;
    AddPathsWindow *addPathWindow;
    AddExtWindow *addExtWindow;
    SetDeadline *setDeadline;
    QTimer *timer;


    bool isExtAndPathsAreNonEmpty();
};

#endif // MAINWINDOW_H
