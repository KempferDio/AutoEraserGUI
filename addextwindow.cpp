#include "addextwindow.h"
#include "ui_addextwindow.h"

AddExtWindow::AddExtWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddExtWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Новое расширение");
}

AddExtWindow::~AddExtWindow()
{
    delete ui;
}

void AddExtWindow::on_confirm_clicked()
{   QString ext = ui->newExt->text();
    if(ext != NULL) {
        emit sendExt(ext);
        this->close();
    }

}

