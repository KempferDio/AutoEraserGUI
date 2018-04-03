/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *trayCheckBox;
    QPushButton *addPathBtn;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *deadlineLabel;
    QPushButton *pushButton_5;
    QListWidget *pathList;
    QListWidget *extList;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(806, 510);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        trayCheckBox = new QCheckBox(centralWidget);
        trayCheckBox->setObjectName(QStringLiteral("trayCheckBox"));
        trayCheckBox->setGeometry(QRect(570, 10, 231, 20));
        addPathBtn = new QPushButton(centralWidget);
        addPathBtn->setObjectName(QStringLiteral("addPathBtn"));
        addPathBtn->setGeometry(QRect(10, 10, 91, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 10, 91, 22));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 40, 91, 22));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 40, 91, 22));
        deadlineLabel = new QLabel(centralWidget);
        deadlineLabel->setObjectName(QStringLiteral("deadlineLabel"));
        deadlineLabel->setGeometry(QRect(220, 20, 341, 61));
        deadlineLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(659, 50, 131, 22));
        pathList = new QListWidget(centralWidget);
        pathList->setObjectName(QStringLiteral("pathList"));
        pathList->setGeometry(QRect(10, 90, 591, 411));
        extList = new QListWidget(centralWidget);
        extList->setObjectName(QStringLiteral("extList"));
        extList->setGeometry(QRect(605, 90, 191, 411));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        trayCheckBox->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\276\321\200\320\260\321\207\320\270\320\262\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \320\262 \321\202\321\200\320\265\320\271", nullptr));
        addPathBtn->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        deadlineLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\204\320\260\320\271\320\273\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
