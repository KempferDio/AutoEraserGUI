#include "setdeadline.h"
#include "ui_setdeadline.h"

#include <mainwindow.h>



SetDeadline::SetDeadline(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetDeadline)
{
    ui->setupUi(this);
    this->setWindowTitle("Дедлайн");

}

SetDeadline::~SetDeadline()
{
    delete ui;
}

void SetDeadline::on_pushButton_clicked()
{
    int days = ui->days->text().toInt();
    int hours = ui->hours->text().toInt();
    int mins = ui->mins->text().toInt();
    int timeDelay = ui->autoMins->text().toInt();
    bool enableMessages = ui->enableMessagesBox->isChecked();
    bool enableAutoErase = ui->enableAutoErase->isChecked();
    emit sendDeadline(days, hours, mins, timeDelay, enableMessages, enableAutoErase);
    close();
}

void SetDeadline::on_enableAutoErase_toggled(bool checked)
{
    ui->autoMins->setEnabled(checked);
}
