/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QPushButton *OK_pushButton;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *Icon_label;
    QLabel *label;
    QPushButton *Close_pushButton;
    QLabel *labAcceditLocalDays_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labAcceditLocalDays;
    QLabel *labAcceditLiveDays;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(520, 266);
        AboutDialog->setStyleSheet(QString::fromUtf8("QDialog#AboutDialog\n"
"{\n"
"	\n"
"	background-color: rgb(25, 25, 25);\n"
"}"));
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 0, 0);
        widget = new QWidget(AboutDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Live/Resources/PermissionPrompt.png);\n"
"}"));
        OK_pushButton = new QPushButton(widget);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(225, 220, 60, 25));
        OK_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#OK_pushButton\n"
"{\n"
"	background-color: rgb(254, 161, 24);\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius:5px;\n"
"	\n"
"}\n"
"\n"
"QPushButton#OK_pushButton:hover\n"
"{\n"
"	background-color: rgb(254, 181, 44);\n"
"}\n"
"\n"
"QPushButton#OK_pushButton:checked\n"
"{\n"
"	background-color: rgb(254, 191, 54);\n"
"}\n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 165, 105, 17));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(161, 161, 161);\n"
"font: 75 14px \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 165, 75, 17));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(161, 161, 161);\n"
"font: 75 14px \"\351\273\221\344\275\223\";"));
        Icon_label = new QLabel(widget);
        Icon_label->setObjectName(QString::fromUtf8("Icon_label"));
        Icon_label->setGeometry(QRect(240, 10, 32, 25));
        Icon_label->setStyleSheet(QString::fromUtf8("border-image: url(:/ICON/Resources/HeadPortrait.png);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 48, 251, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 75 25px \"\351\273\221\344\275\223\";"));
        Close_pushButton = new QPushButton(widget);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(502, 7, 10, 10));
        Close_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Close_pushButton{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_Normal.png);\n"
"}\n"
"QPushButton#Close_pushButton:hover{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_Hover.png);\n"
"}\n"
"QPushButton#Close_pushButton:disabled{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_Disabled.png);\n"
"}\n"
"QPushButton#Close_pushButton:checked{\n"
"	\n"
"	border-image: url(:/Close/Resources/Close_checked.png);\n"
"}\n"
""));
        labAcceditLocalDays_2 = new QLabel(widget);
        labAcceditLocalDays_2->setObjectName(QString::fromUtf8("labAcceditLocalDays_2"));
        labAcceditLocalDays_2->setGeometry(QRect(264, 168, 16, 20));
        labAcceditLocalDays_2->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(254, 161, 24);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(131, 80, 251, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labAcceditLocalDays = new QLabel(layoutWidget);
        labAcceditLocalDays->setObjectName(QString::fromUtf8("labAcceditLocalDays"));
        labAcceditLocalDays->setMinimumSize(QSize(0, 20));
        labAcceditLocalDays->setMaximumSize(QSize(16777215, 20));
        labAcceditLocalDays->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(254, 161, 24);"));

        verticalLayout->addWidget(labAcceditLocalDays);

        labAcceditLiveDays = new QLabel(layoutWidget);
        labAcceditLiveDays->setObjectName(QString::fromUtf8("labAcceditLiveDays"));
        labAcceditLiveDays->setLayoutDirection(Qt::LeftToRight);
        labAcceditLiveDays->setStyleSheet(QString::fromUtf8("font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(254, 161, 24);"));

        verticalLayout->addWidget(labAcceditLiveDays);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "AboutDialog", 0, QApplication::UnicodeUTF8));
        OK_pushButton->setText(QApplication::translate("AboutDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AboutDialog", "\351\227\256\351\242\230\345\217\215\351\246\210\346\226\271\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutDialog", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));
        Icon_label->setText(QString());
        label->setText(QApplication::translate("AboutDialog", "\351\224\220\345\212\250PC\345\275\225\345\261\217SDK Demo", 0, QApplication::UnicodeUTF8));
        Close_pushButton->setText(QString());
        labAcceditLocalDays_2->setText(QString());
        labAcceditLocalDays->setText(QString());
        labAcceditLiveDays->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
