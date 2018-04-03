/********************************************************************************
** Form generated from reading UI file 'addpathswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATHSWINDOW_H
#define UI_ADDPATHSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPathsWindow
{
public:
    QWidget *centralwidget;
    QListWidget *pathsList;
    QPushButton *AddExts;
    QTreeView *treeView;

    void setupUi(QMainWindow *AddPathsWindow)
    {
        if (AddPathsWindow->objectName().isEmpty())
            AddPathsWindow->setObjectName(QStringLiteral("AddPathsWindow"));
        AddPathsWindow->resize(800, 586);
        centralwidget = new QWidget(AddPathsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pathsList = new QListWidget(centralwidget);
        pathsList->setObjectName(QStringLiteral("pathsList"));
        pathsList->setGeometry(QRect(10, 350, 781, 192));
        AddExts = new QPushButton(centralwidget);
        AddExts->setObjectName(QStringLiteral("AddExts"));
        AddExts->setGeometry(QRect(350, 550, 111, 22));
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 10, 781, 331));
        AddPathsWindow->setCentralWidget(centralwidget);

        retranslateUi(AddPathsWindow);

        QMetaObject::connectSlotsByName(AddPathsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddPathsWindow)
    {
        AddPathsWindow->setWindowTitle(QApplication::translate("AddPathsWindow", "MainWindow", nullptr));
        AddExts->setText(QApplication::translate("AddPathsWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPathsWindow: public Ui_AddPathsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATHSWINDOW_H
