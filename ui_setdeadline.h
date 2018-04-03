/********************************************************************************
** Form generated from reading UI file 'setdeadline.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDEADLINE_H
#define UI_SETDEADLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetDeadline
{
public:
    QWidget *centralwidget;
    QSpinBox *days;
    QSpinBox *hours;
    QSpinBox *mins;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *enableMessagesBox;
    QSpinBox *autoMins;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *enableAutoErase;

    void setupUi(QMainWindow *SetDeadline)
    {
        if (SetDeadline->objectName().isEmpty())
            SetDeadline->setObjectName(QStringLiteral("SetDeadline"));
        SetDeadline->resize(410, 306);
        centralwidget = new QWidget(SetDeadline);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        days = new QSpinBox(centralwidget);
        days->setObjectName(QStringLiteral("days"));
        days->setGeometry(QRect(300, 20, 47, 23));
        hours = new QSpinBox(centralwidget);
        hours->setObjectName(QStringLiteral("hours"));
        hours->setGeometry(QRect(300, 60, 47, 23));
        mins = new QSpinBox(centralwidget);
        mins->setObjectName(QStringLiteral("mins"));
        mins->setGeometry(QRect(300, 100, 47, 23));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 270, 91, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 59, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 60, 59, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 100, 59, 21));
        enableMessagesBox = new QCheckBox(centralwidget);
        enableMessagesBox->setObjectName(QStringLiteral("enableMessagesBox"));
        enableMessagesBox->setGeometry(QRect(20, 150, 181, 20));
        autoMins = new QSpinBox(centralwidget);
        autoMins->setObjectName(QStringLiteral("autoMins"));
        autoMins->setEnabled(false);
        autoMins->setGeometry(QRect(260, 210, 71, 23));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 20, 151, 101));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 210, 241, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 210, 59, 21));
        enableAutoErase = new QCheckBox(centralwidget);
        enableAutoErase->setObjectName(QStringLiteral("enableAutoErase"));
        enableAutoErase->setGeometry(QRect(20, 180, 261, 20));
        SetDeadline->setCentralWidget(centralwidget);

        retranslateUi(SetDeadline);

        QMetaObject::connectSlotsByName(SetDeadline);
    } // setupUi

    void retranslateUi(QMainWindow *SetDeadline)
    {
        SetDeadline->setWindowTitle(QApplication::translate("SetDeadline", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("SetDeadline", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("SetDeadline", "\320\224\320\275\320\265\320\271", nullptr));
        label_2->setText(QApplication::translate("SetDeadline", "\320\247\320\260\321\201\320\276\320\262", nullptr));
        label_3->setText(QApplication::translate("SetDeadline", "\320\234\320\270\320\275\321\203\321\202", nullptr));
        enableMessagesBox->setText(QApplication::translate("SetDeadline", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \321\203\320\262\320\265\320\264\320\276\320\274\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("SetDeadline", "\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \321\204\320\260\320\271\320\273\321\213 \321\201\321\202\320\260\321\200\321\210\320\265: ", nullptr));
        label_5->setText(QApplication::translate("SetDeadline", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\272\320\260\320\266\320\264\321\213\320\265 ", nullptr));
        label_6->setText(QApplication::translate("SetDeadline", "\320\274\320\270\320\275\321\203\321\202", nullptr));
        enableAutoErase->setText(QApplication::translate("SetDeadline", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\321\203\321\216 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDeadline: public Ui_SetDeadline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDEADLINE_H
