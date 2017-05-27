/********************************************************************************
** Form generated from reading UI file 'androidselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROIDSELECTDIALOG_H
#define UI_ANDROIDSELECTDIALOG_H

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

class Ui_AndroidSelectDialog
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
    QPushButton *DownWindow_pushButton;

    void setupUi(QDialog *AndroidSelectDialog)
    {
        if (AndroidSelectDialog->objectName().isEmpty())
            AndroidSelectDialog->setObjectName(QString::fromUtf8("AndroidSelectDialog"));
        AndroidSelectDialog->resize(477, 321);
        gridLayout = new QGridLayout(AndroidSelectDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(AndroidSelectDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	border-image: url(:/Live/Resources/HandTour_Game.png);\n"
"	background-color: rgb(33, 33, 33);\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 1, 475, 35));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(43, 43, 43);\n"
"}\n"
""));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 8, 54, 12));
        label->setStyleSheet(QString::fromUtf8("color: rgb(234, 126, 24);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 7, 15, 14));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Adroid.png);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(455, 10, 10, 10));
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
        Download_pushButton->setGeometry(QRect(105, 285, 83, 24));
        Download_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Download_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton.png);\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        textBrowser->setGeometry(QRect(100, 50, 371, 231));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);\n"
"background-color: rgb(34, 36, 40);\n"
"border:px groove gray;\n"
"font: 11pt \"\345\256\213\344\275\223\";\n"
""));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(1, 38, 93, 281));
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
""));
        pushButton->setCheckable(true);
        pushButton->setChecked(true);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        DownWindow_pushButton = new QPushButton(widget);
        DownWindow_pushButton->setObjectName(QString::fromUtf8("DownWindow_pushButton"));
        DownWindow_pushButton->setGeometry(QRect(395, 285, 60, 24));
        DownWindow_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#DownWindow_pushButton\n"
"{\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton#DownWindow_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton#DownWindow_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));
        widget_2->raise();
        widget_3->raise();
        textBrowser->raise();
        Download_pushButton->raise();
        DownWindow_pushButton->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(AndroidSelectDialog);

        QMetaObject::connectSlotsByName(AndroidSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *AndroidSelectDialog)
    {
        AndroidSelectDialog->setWindowTitle(QApplication::translate("AndroidSelectDialog", "AndroidSelectDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AndroidSelectDialog", "\345\256\211\345\215\223\347\233\264\346\222\255", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        Close_pushButton->setText(QString());
        Download_pushButton->setText(QApplication::translate("AndroidSelectDialog", "\344\270\213\350\275\275\346\250\241\346\213\237\345\231\250", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("AndroidSelectDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">1.\351\246\226\345\205\210\351\234\200\350\246\201\345\256\211\350\243\205\344\270\200\344\270\252\345\256\211\345\215\223\346\250\241\346\213\237\345\231\250,\345\234\250\346\250\241\346\213\237\345\231\250\344\270\255\345\256\211\350\243\205\345\271\266\347\231\273\351\231\206\346\270\270\346\210\217</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2.\346\270\270\346\210\217\347\224"
                        "\273\351\235\242\346\211\223\345\274\200\345\220\216,\347\202\271\345\207\273\346\267\273\345\212\240\345\215\263\345\217\257\345\274\200\345\247\213\345\275\225\345\210\266Android\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \346\216\250\350\215\220\346\250\241\346\213\237\345\231\250\345\246\202\344\270\213\357\274\232(\346\263\250\357\274\232\347\202\271\345\207\273\344\270\213\350\275\275\346\250\241\346\213\237\345\231\250\345\217\257\344\270\213\350\275\275</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">  \350\223\235\345\217\240\346\250\241\346\213\237\345\231\250 (\344\271\237\345\217\257\350\207\252\350\241\214\344\270\213\350\275\275\344\270\213\345\210\227\346\216\250\350\215\220\346\250\241\346\213\237\345\231\250))</span></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; color:#fea118;\">   \350\223\235\345\217\240\346\250\241\346\213\237\345\231\250</span><span style=\" font-family:'SimSun';\">   	</span><span style=\" font-family:'SimSun'; color:#fea118;\">51\346\250\241\346\213\237\345\231\250</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; color:#fea118;\">   \351\235\240\350\260\261\345\212\251\346\211\213\346\250\241\346\213\237\345\231\250	\346\265\267\351\251\254\347\216\251\346\250\241\346\213\237\345\231\250</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bl"
                        "ock-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">   </span><span style=\" font-family:'SimSun'; color:#fea118;\">\347\275\221\346\230\223MuMu	\345\244\251\345\244\251\346\250\241\346\213\237\345\231\250</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; color:#fea118;\">   \347\214\251\347\214\251\345\256\211\345\215\223\346\250\241\346\213\237\345\231\250</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AndroidSelectDialog", "\346\250\241\346\213\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        DownWindow_pushButton->setText(QApplication::translate("AndroidSelectDialog", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AndroidSelectDialog: public Ui_AndroidSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROIDSELECTDIALOG_H
