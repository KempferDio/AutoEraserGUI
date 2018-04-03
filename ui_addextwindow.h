/********************************************************************************
** Form generated from reading UI file 'addextwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXTWINDOW_H
#define UI_ADDEXTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddExtWindow
{
public:
    QWidget *centralwidget;
    QPushButton *confirm;
    QLineEdit *newExt;

    void setupUi(QMainWindow *AddExtWindow)
    {
        if (AddExtWindow->objectName().isEmpty())
            AddExtWindow->setObjectName(QStringLiteral("AddExtWindow"));
        AddExtWindow->resize(253, 109);
        centralwidget = new QWidget(AddExtWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        confirm = new QPushButton(centralwidget);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(80, 70, 91, 22));
        newExt = new QLineEdit(centralwidget);
        newExt->setObjectName(QStringLiteral("newExt"));
        newExt->setGeometry(QRect(10, 30, 231, 22));
        AddExtWindow->setCentralWidget(centralwidget);

        retranslateUi(AddExtWindow);

        QMetaObject::connectSlotsByName(AddExtWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddExtWindow)
    {
        AddExtWindow->setWindowTitle(QApplication::translate("AddExtWindow", "MainWindow", nullptr));
        confirm->setText(QApplication::translate("AddExtWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddExtWindow: public Ui_AddExtWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXTWINDOW_H
