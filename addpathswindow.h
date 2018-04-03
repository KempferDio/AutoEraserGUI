#ifndef ADDPATHSWINDOW_H
#define ADDPATHSWINDOW_H

#include <QMainWindow>
#include <QDirModel>
#include <QListWidget>

namespace Ui {
class AddPathsWindow;
}

class AddPathsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddPathsWindow(QWidget *parent = 0);
    ~AddPathsWindow();

private slots:
    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_AddExts_clicked();

    void on_pathsList_doubleClicked(const QModelIndex &index);

signals:
    void sendPaths(QStringList paths);

private:
    Ui::AddPathsWindow *ui;
    QDirModel *model;
    QStringList paths;

};

#endif // ADDPATHSWINDOW_H
