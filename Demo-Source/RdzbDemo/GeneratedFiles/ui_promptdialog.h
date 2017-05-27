/********************************************************************************
** Form generated from reading UI file 'promptdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMPTDIALOG_H
#define UI_PROMPTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PromptDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Close_pushButton;
    QWidget *widget_3;
    QPushButton *OK_pushButton;
    QPushButton *Cancel_pushButton;
    QLabel *label_3;
    QRadioButton *Tray_radioButton;
    QRadioButton *Quit_radioButton;

    void setupUi(QDialog *PromptDialog)
    {
        if (PromptDialog->objectName().isEmpty())
            PromptDialog->setObjectName(QString::fromUtf8("PromptDialog"));
        PromptDialog->resize(341, 221);
        PromptDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/ExitTips.png);\n"
"}"));
        gridLayout = new QGridLayout(PromptDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(PromptDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(33, 33, 33);\n"
"}\n"
"\n"
"QRadioButton\n"
"{\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	\n"
"	color: rgb(195, 195, 195);\n"
"}\n"
"\n"
"\n"
"\n"
"/*QRadioButton\351\200\211\346\213\251*/\n"
"QRadioButton\n"
"{\n"
"	\n"
"}\n"
"QRadioButton::indicator:unchecked {\n"
"	image: url(:/Radio/Resources/Radio_Normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:Hover {\n"
"	image: url(:/Radio/Resources/Radio_Hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled {\n"
"	image: url(:/Radio/Resources/Radio_Disabled.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:checked {\n"
"	image: url(:/Radio/Resources//Radio_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	image: url(:/Radio/Resources//RadioChecked_Normal.png);\n"
"}\n"
"QRadioButton::indicator:checked:Hover {\n"
"	image: url(:/Radio/Resources//RadioChecked_Hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled {\n"
"	imag"
                        "e: url(:/Radio/Resources//RadioChecked_Disabled.png);\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 1, 337, 41));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(50, 50, 50);\n"
"}"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 14, 15, 14));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Prompt.png);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(35, 10, 41, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 15px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 161, 24);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(321, 6, 10, 10));
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
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(2, 178, 336, 41));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	\n"
"	background-color: rgb(50, 50, 50);\n"
"}"));
        OK_pushButton = new QPushButton(widget_3);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(80, 10, 60, 25));
        OK_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#OK_pushButton\n"
"{\n"
"	background-color: rgb(254, 161, 24);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        Cancel_pushButton = new QPushButton(widget_3);
        Cancel_pushButton->setObjectName(QString::fromUtf8("Cancel_pushButton"));
        Cancel_pushButton->setGeometry(QRect(180, 10, 60, 25));
        Cancel_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Cancel_pushButton\n"
"{\n"
"	background-color: rgb(20, 20, 20);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius:5px;\n"
"	\n"
"}\n"
"\n"
"QPushButton#Cancel_pushButton:hover\n"
"{\n"
"	background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QPushButton#Cancel_pushButton:checked\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 60, 201, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 15px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(70, 70, 70);"));
        Tray_radioButton = new QRadioButton(widget);
        Tray_radioButton->setObjectName(QString::fromUtf8("Tray_radioButton"));
        Tray_radioButton->setGeometry(QRect(50, 90, 251, 21));
        Tray_radioButton->setStyleSheet(QString::fromUtf8(""));
        Tray_radioButton->setChecked(true);
        Quit_radioButton = new QRadioButton(widget);
        Quit_radioButton->setObjectName(QString::fromUtf8("Quit_radioButton"));
        Quit_radioButton->setGeometry(QRect(50, 120, 231, 21));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(PromptDialog);

        QMetaObject::connectSlotsByName(PromptDialog);
    } // setupUi

    void retranslateUi(QDialog *PromptDialog)
    {
        PromptDialog->setWindowTitle(QApplication::translate("PromptDialog", "\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("PromptDialog", "\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        Close_pushButton->setText(QString());
        OK_pushButton->setText(QApplication::translate("PromptDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        Cancel_pushButton->setText(QApplication::translate("PromptDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PromptDialog", "\346\202\250\347\202\271\345\207\273\344\272\206\345\205\263\351\227\255\346\214\211\351\222\256\357\274\214\346\202\250\346\230\257\346\203\263\357\274\232", 0, QApplication::UnicodeUTF8));
        Tray_radioButton->setText(QApplication::translate("PromptDialog", "\346\234\200\345\260\217\345\214\226\345\210\260\347\263\273\347\273\237\346\211\230\347\233\230\357\274\214\344\270\215\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
        Quit_radioButton->setText(QApplication::translate("PromptDialog", "\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PromptDialog: public Ui_PromptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMPTDIALOG_H
