/********************************************************************************
** Form generated from reading UI file 'gameselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESELECTDIALOG_H
#define UI_GAMESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameSelectDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Close_pushButton;
    QLabel *label_3;
    QPushButton *Refresh_pushButton;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *Open_pushButton;
    QListWidget *listWidget;

    void setupUi(QDialog *GameSelectDialog)
    {
        if (GameSelectDialog->objectName().isEmpty())
            GameSelectDialog->setObjectName(QString::fromUtf8("GameSelectDialog"));
        GameSelectDialog->resize(443, 300);
        GameSelectDialog->setStyleSheet(QString::fromUtf8("/*QRadioButton\351\200\211\346\213\251*/\n"
"QRadioButton\n"
"{\n"
"	color: rgb(204, 204, 204);\n"
"}\n"
"\n"
"QRadioButton:checked\n"
"{\n"
"	color: rgb(254, 161, 24);\n"
"}\n"
"\n"
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
"	image: url(:/Radio/Resources//RadioChecked_Disabled.png);\n"
"}\n"
"\n"
"QDialog\n"
"{\n"
"	border-image: url(:/Live/Resources/Hand"
                        "Tour_Game.png);\n"
"}"));
        gridLayout = new QGridLayout(GameSelectDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(GameSelectDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(33, 33, 33);\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: #111111;\n"
"    width: 16px;\n"
"    margin: 16px 0 16px 0;\n"
"	\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #555555;\n"
"    min-height: 16px;\n"
"	\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: #444444;\n"
"    height: 16px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"	border-bottom-left-radius: 8px; \n"
"	border-bottom-right-radius: 8px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    background: #444444;\n"
"    height:  16px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"	border-top-left-radius: 8px; \n"
"	border-top-right-radius: 8px;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"	 \n"
"}\n"
"QScrollBar:down-arrow:vertical {\n"
"    border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 4px;\n"
"    background: "
                        "#5f5f5f;\n"
"	border-bottom-left-radius: 5px; \n"
"	border-bottom-right-radius: 5px; \n"
"}\n"
"\n"
"QScrollBar:up-arrow:vertical\n"
"{\n"
"	border: 1px solid #333333;\n"
"    width: 8px;\n"
"    height: 4px;\n"
"    background: #5f5f5f;\n"
"	border-top-left-radius: 5px; \n"
"	border-top-right-radius: 5px; \n"
"}\n"
"\n"
"QScrollBar:up-arrow:vertical:hover\n"
"{\n"
"	background: #555555;\n"
"}\n"
"\n"
"QScrollBar:down-arrow:vertical:hover\n"
"{\n"
"	background: #555555;\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 1, 441, 30));
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
        label_2->setGeometry(QRect(10, 8, 15, 14));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Game.png);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(423, 10, 10, 10));
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
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 40, 331, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);"));
        Refresh_pushButton = new QPushButton(widget);
        Refresh_pushButton->setObjectName(QString::fromUtf8("Refresh_pushButton"));
        Refresh_pushButton->setGeometry(QRect(350, 35, 83, 24));
        Refresh_pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#Refresh_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton.png);\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"}\n"
"\n"
"QPushButton#Refresh_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Refresh_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/DownloadButton_C.png);\n"
"}\n"
"\n"
""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 250, 331, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 270, 321, 22));
        comboBox->setStyleSheet(QString::fromUtf8("/**********\344\270\213\346\213\211\345\210\227\350\241\250**********/\n"
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
        Open_pushButton = new QPushButton(widget);
        Open_pushButton->setObjectName(QString::fromUtf8("Open_pushButton"));
        Open_pushButton->setGeometry(QRect(360, 268, 60, 24));
        Open_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Open_pushButton\n"
"{\n"
"	font:  12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton#Open_pushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton#Open_pushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 60, 401, 181));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background-color: rgb(33, 33, 33);\n"
"border:px;\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(GameSelectDialog);

        QMetaObject::connectSlotsByName(GameSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *GameSelectDialog)
    {
        GameSelectDialog->setWindowTitle(QApplication::translate("GameSelectDialog", "GameSelectDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GameSelectDialog", "\351\200\211\346\213\251\346\270\270\346\210\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        Close_pushButton->setText(QString());
        label_3->setText(QApplication::translate("GameSelectDialog", "\345\217\214\345\207\273\345\220\257\345\212\250\346\234\252\346\211\223\345\274\200\347\232\204\346\270\270\346\210\217\346\210\226\350\200\205\345\260\206\345\267\262\347\273\217\346\211\223\345\274\200\347\232\204\346\270\270\346\210\217\346\267\273\345\212\240\350\207\263\347\233\264\346\222\255\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        Refresh_pushButton->setText(QApplication::translate("GameSelectDialog", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GameSelectDialog", "\345\246\202\346\236\234\346\234\252\346\211\276\345\210\260\346\270\270\346\210\217\357\274\214\350\257\267\345\234\250\344\270\213\346\213\211\346\241\206\344\270\255\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        Open_pushButton->setText(QApplication::translate("GameSelectDialog", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GameSelectDialog: public Ui_GameSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESELECTDIALOG_H
