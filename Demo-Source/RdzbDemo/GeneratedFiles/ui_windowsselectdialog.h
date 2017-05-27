/********************************************************************************
** Form generated from reading UI file 'windowsselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSSELECTDIALOG_H
#define UI_WINDOWSSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowsSelectDialog
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
    QListWidget *listWidget;

    void setupUi(QDialog *WindowsSelectDialog)
    {
        if (WindowsSelectDialog->objectName().isEmpty())
            WindowsSelectDialog->setObjectName(QString::fromUtf8("WindowsSelectDialog"));
        WindowsSelectDialog->resize(457, 298);
        WindowsSelectDialog->setStyleSheet(QString::fromUtf8("/*QRadioButton\351\200\211\346\213\251*/\n"
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
"	\n"
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
"	border-image: url(:/SeedUI/Resour"
                        "ces/SeedUI/PC_Camera.png);\n"
"}"));
        gridLayout = new QGridLayout(WindowsSelectDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(WindowsSelectDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	background-color: rgb(43, 43, 43);\n"
"}\n"
"\n"
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
"    b"
                        "ackground: #5f5f5f;\n"
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
        widget_2->setGeometry(QRect(1, 1, 454, 40));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(53, 53, 53);\n"
"}"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 13, 15, 14));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_windows.png);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(35, 14, 54, 12));
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
        widget_3->setGeometry(QRect(1, 256, 454, 40));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	\n"
"	background-color: rgb(53, 53, 53);\n"
"}"));
        OK_pushButton = new QPushButton(widget_3);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(140, 10, 60, 25));
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
        Cancel_pushButton->setGeometry(QRect(230, 10, 60, 25));
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
        label_3->setGeometry(QRect(30, 54, 291, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 85);"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 80, 411, 161));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background-color: rgb(43, 43, 43);\n"
"border:px;\n"
"}\n"
"\n"
" QListView::item:hover \n"
"{\n"
"	background-color: rgb(33, 33, 33);\n"
"}"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(WindowsSelectDialog);

        QMetaObject::connectSlotsByName(WindowsSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *WindowsSelectDialog)
    {
        WindowsSelectDialog->setWindowTitle(QApplication::translate("WindowsSelectDialog", "WindowsSelectDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("WindowsSelectDialog", "\347\252\227\345\217\243\351\200\211\345\217\226", 0, QApplication::UnicodeUTF8));
        Close_pushButton->setText(QString());
        OK_pushButton->setText(QApplication::translate("WindowsSelectDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        Cancel_pushButton->setText(QApplication::translate("WindowsSelectDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WindowsSelectDialog", "\350\257\267\345\213\276\351\200\211\344\275\240\351\234\200\350\246\201\351\200\211\346\213\251\347\232\204\347\252\227\344\275\223\357\274\214\350\257\245\347\252\227\345\217\243\345\277\205\351\241\273\346\230\257\351\235\236\346\234\200\345\260\217\345\214\226\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WindowsSelectDialog: public Ui_WindowsSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSSELECTDIALOG_H
