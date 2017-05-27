/********************************************************************************
** Form generated from reading UI file 'screenselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSELECTDIALOG_H
#define UI_SCREENSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenSelectDialog
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
    QComboBox *Screen_comboBox;
    QTextEdit *textEdit;
    QPushButton *Refresh_pushButton;

    void setupUi(QDialog *ScreenSelectDialog)
    {
        if (ScreenSelectDialog->objectName().isEmpty())
            ScreenSelectDialog->setObjectName(QString::fromUtf8("ScreenSelectDialog"));
        ScreenSelectDialog->resize(457, 320);
        ScreenSelectDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/PC_Camera.png);\n"
"}"));
        gridLayout = new QGridLayout(ScreenSelectDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(ScreenSelectDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(34, 36, 40);\n"
"}\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 1, 454, 40));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(38, 40, 45);\n"
"}"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 12, 15, 14));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_FullScreen.png);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(35, 9, 54, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(234, 126, 24);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(435, 8, 10, 10));
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
"}"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(1, 269, 454, 50));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	\n"
"	background-color: rgb(38, 40, 45);\n"
"}"));
        OK_pushButton = new QPushButton(widget_3);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(140, 15, 60, 24));
        OK_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#OK_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow.png);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-radius:5px;\n"
"	\n"
"}\n"
"\n"
"QPushButton#OK_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow_H.png);\n"
"}\n"
"\n"
"QPushButton#OK_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow_C.png);\n"
"}\n"
""));
        Cancel_pushButton = new QPushButton(widget_3);
        Cancel_pushButton->setObjectName(QString::fromUtf8("Cancel_pushButton"));
        Cancel_pushButton->setGeometry(QRect(230, 15, 60, 24));
        Cancel_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Cancel_pushButton\n"
"{\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton#Cancel_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Cancel_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 41, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Screen_comboBox = new QComboBox(widget);
        Screen_comboBox->setObjectName(QString::fromUtf8("Screen_comboBox"));
        Screen_comboBox->setGeometry(QRect(90, 60, 291, 22));
        Screen_comboBox->setStyleSheet(QString::fromUtf8("/**********\344\270\213\346\213\211\345\210\227\350\241\250**********/\n"
"QComboBox {\n"
"    background-color: black;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:5px;\n"
"}\n"
"QComboBox:hover {\n"
"    background-color: rgb(24, 24, 24);\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"    padding:1px 2em 1px 3px;\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:5px;\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"	width: 25px;\n"
"}/* \344\270\213\346\213\211\346\214\211\351\222\256 */\n"
"QComboBox::drop-down:hover {\n"
"  	subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border-left: 1px solid #333333;\n"
"	background-color: rgb(83, 83, 83);\n"
"}/* \344\270\213\346\213\211\346\214\211\351"
                        "\222\256 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
"QComboBox::down-arrow {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 5px;\n"
"    background: rgb(83, 83, 83);\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}/* \344\270\213\346\213\211\347\256\255\345\244\264 */\n"
"QComboBox::down-arrow:hover {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 5px;\n"
"    background: rgb(170, 170, 170);\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}/* \344\270\213\346\213\211\347\256\255\345\244\264 \351\274\240\346\240\207\347\247\273\345\212\250 */\n"
"QComboBox QAbstractItemView{\n"
"	outline:0px;/*\345\216\273\346\216\211\350\231\232\347\272\277*/\n"
"	color: rgb(209, 209, 209);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(43, 43, 43);\n"
"	 selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: "
                        "1 #d7801a);\n"
"}/* \344\270\213\346\213\211\351\200\211\346\213\251 */\n"
"QComboBox QAbstractItemView::item{height:20px;}/*\344\270\213\346\213\211\351\200\211\346\213\251\351\253\230\345\272\246*/"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 441, 71));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 36, 40);\n"
"border:px groove gray;\n"
"font: 75 13px \"\345\256\213\344\275\223\";\n"
"color: rgb(85, 85, 85);"));
        Refresh_pushButton = new QPushButton(widget);
        Refresh_pushButton->setObjectName(QString::fromUtf8("Refresh_pushButton"));
        Refresh_pushButton->setGeometry(QRect(390, 60, 61, 23));
        Refresh_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Refresh_pushButton\n"
"{\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton#Refresh_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Refresh_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(ScreenSelectDialog);

        QMetaObject::connectSlotsByName(ScreenSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *ScreenSelectDialog)
    {
        ScreenSelectDialog->setWindowTitle(QApplication::translate("ScreenSelectDialog", "ScreenSelectDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("ScreenSelectDialog", "\345\205\250\345\261\217\345\275\225\345\210\266", 0, QApplication::UnicodeUTF8));
        Close_pushButton->setText(QString());
        OK_pushButton->setText(QApplication::translate("ScreenSelectDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        Cancel_pushButton->setText(QApplication::translate("ScreenSelectDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ScreenSelectDialog", "\346\230\276\347\244\272\345\231\250", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("ScreenSelectDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:13px; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\217\220\347\244\272\357\274\232\345\234\250win7\347\263\273\347\273\237\344\270\255\357\274\214\351\231\244\351\235\236\344\275\240\346\234\211\346\230\216\347\241\256\351\234\200\346\261\202\357\274\214\344\270\215\347\204\266\345\273\272\350\256\256\346\202\250\344\275\277\347\224\250\345\275\225\345\210\266\347\252\227\345\217\243\346\210\226\350\200\205\351\200\211\346\213\251\346\270\270\346\210\217\357\274\214\350\277\231\344\270\244\351\241\271\345\257\271CPU\346\266\210\350\200\227\344\274\232\344\275\216\345\276\210\345\244\232\357\274"
                        "\201</p></body></html>", 0, QApplication::UnicodeUTF8));
        Refresh_pushButton->setText(QApplication::translate("ScreenSelectDialog", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScreenSelectDialog: public Ui_ScreenSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSELECTDIALOG_H
