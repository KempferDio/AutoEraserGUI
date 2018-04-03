#ifndef SETDEADLINE_H
#define SETDEADLINE_H

#include <QMainWindow>


namespace Ui {
class SetDeadline;
}

class SetDeadline : public QMainWindow
{
    Q_OBJECT

public:
    explicit SetDeadline(QWidget *parent = 0);
    ~SetDeadline();

signals:
    void sendDeadline(int days, int hours, int mins, int timeDelay, bool enableMessages, bool enableAutoErase);

private slots:
    void on_pushButton_clicked();

    void on_enableAutoErase_toggled(bool checked);

private:
    Ui::SetDeadline *ui;
};

#endif // SETDEADLINE_H
