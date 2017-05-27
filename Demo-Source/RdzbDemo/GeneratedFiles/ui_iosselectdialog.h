/********************************************************************************
** Form generated from reading UI file 'iosselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOSSELECTDIALOG_H
#define UI_IOSSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IOSSelectDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Close_pushButton;
    QPushButton *Download_pushButton;
    QTextBrowser *textBrowser;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *IOS_pushButton;
    QLabel *label_5;

    void setupUi(QDialog *IOSSelectDialog)
    {
        if (IOSSelectDialog->objectName().isEmpty())
            IOSSelectDialog->setObjectName(QString::fromUtf8("IOSSelectDialog"));
        IOSSelectDialog->resize(498, 306);
        IOSSelectDialog->setStyleSheet(QString::fromUtf8("QDialog#IOSSelectDialog\n"
"{\n"
"	border-image: url(:/Live/Resources/HandTour_Game.png);\n"
"}"));
        gridLayout = new QGridLayout(IOSSelectDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(IOSSelectDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(33, 33, 33);\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 1, 496, 30));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(43, 43, 43);\n"
"}\n"
""));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 9, 54, 12));
        label->setStyleSheet(QString::fromUtf8("color: rgb(234, 126, 24);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 8, 15, 14));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_iOS.png);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(476, 10, 10, 10));
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
        Download_pushButton = new QPushButton(widget);
        Download_pushButton->setObjectName(QString::fromUtf8("Download_pushButton"));
        Download_pushButton->setGeometry(QRect(400, 270, 83, 24));
        Download_pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Download_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton.png);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"}\n"
"\n"
"QPushButton#Download_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Download_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_C.png);\n"
"}\n"
""));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(100, 70, 391, 81));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"background-color: rgb(33, 33, 33);\n"
"border:px groove gray;\n"
""));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(1, 31, 93, 274));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	\n"
"	background-color: rgb(43, 43, 43);\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setMinimumSize(QSize(93, 30));
        pushButton->setMaximumSize(QSize(93, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(43, 43, 43);\n"
"	font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(254, 161, 24);\n"
"	border:px groove gray;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background-color: rgb(33, 33, 33);\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"	background-color: rgb(33, 33, 33);\n"
"}\n"
"\n"
""));
        pushButton->setCheckable(true);
        pushButton->setChecked(true);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(105, 130, 381, 121));
        IOS_pushButton = new QPushButton(widget);
        IOS_pushButton->setObjectName(QString::fromUtf8("IOS_pushButton"));
        IOS_pushButton->setGeometry(QRect(380, 40, 101, 23));
        IOS_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#IOS_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton.png);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"}\n"
"\n"
"QPushButton#IOS_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_H.png);\n"
"}\n"
"\n"
"QPushButton#IOS_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_C.png);\n"
"}\n"
""));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(105, 44, 271, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 70 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(IOSSelectDialog);

        QMetaObject::connectSlotsByName(IOSSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *IOSSelectDialog)
    {
        IOSSelectDialog->setWindowTitle(QApplication::translate("IOSSelectDialog", "IOSSelectDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("IOSSelectDialog", "IOS\347\233\264\346\222\255", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        Close_pushButton->setText(QString());
        Download_pushButton->setText(QApplication::translate("IOSSelectDialog", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("IOSSelectDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">1\343\200\201\350\277\220\350\241\214\347\224\265\350\204\221\344\270\212\347\232\204itools\350\213\271\346\236\234\345\275\225\345\210\266\345\244\247\345\270\210Airplayer\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">2\343\200\201\345\234\250\346\211\213\346\234\272\345\272\225\351\203\250\345\220\221\344\270\212\346\273\221\345\212\250\346\211\223\345\274\200Airplay\351\200\211\346\213\251itools\351"
                        "\225\234\345\203\217\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">3\343\200\201\347\241\256\350\256\244\346\211\213\346\234\272Airplay\345\274\200\345\247\213,\347\202\271\345\207\273\344\270\213\346\226\271\346\267\273\345\212\240\345\215\263\345\217\257\345\274\200\345\247\213\345\275\225\345\210\266IOS\343\200\202</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("IOSSelectDialog", "Airplay", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("IOSSelectDialog", "<html><head/><body><p><img src=\":/IOS/Resources/IOS.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        IOS_pushButton->setText(QApplication::translate("IOSSelectDialog", "\344\270\213\350\275\275Airplay", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("IOSSelectDialog", "\346\217\220\347\244\272\357\274\232\350\257\267\347\241\256\344\277\235\346\211\213\346\234\272\345\222\214\347\224\265\350\204\221\350\277\236\346\216\245\347\232\204\344\270\272\345\220\214\346\204\217wifi", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IOSSelectDialog: public Ui_IOSSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOSSELECTDIALOG_H
