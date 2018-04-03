#ifndef ADDEXTWINDOW_H
#define ADDEXTWINDOW_H

#include <QMainWindow>

namespace Ui {
class AddExtWindow;
}

class AddExtWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddExtWindow(QWidget *parent = 0);
    ~AddExtWindow();



private slots:
    void on_confirm_clicked();

signals:
    void sendExt(QString ext);

private:
    Ui::AddExtWindow *ui;
};

#endif // ADDEXTWINDOW_H
