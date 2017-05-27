/********************************************************************************
** Form generated from reading UI file 'opendialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENDIALOG_H
#define UI_OPENDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QLabel *Title_label;
    QPushButton *Close_pushButton;
    QPushButton *OK_pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *File_lineEdit;
    QPushButton *Browse_pushButton;

    void setupUi(QDialog *OpenDialog)
    {
        if (OpenDialog->objectName().isEmpty())
            OpenDialog->setObjectName(QString::fromUtf8("OpenDialog"));
        OpenDialog->resize(464, 169);
        OpenDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	border-image: url(:/Live/Resources/Open.png);\n"
"}"));
        horizontalLayout = new QHBoxLayout(OpenDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(OpenDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	\n"
"	\n"
"}\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1, 1, 461, 40));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2\n"
"{\n"
"	\n"
"	background-color: rgb(38, 40, 45);\n"
"}"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 15, 14));
        Title_label = new QLabel(widget_2);
        Title_label->setObjectName(QString::fromUtf8("Title_label"));
        Title_label->setGeometry(QRect(30, 8, 171, 16));
        Title_label->setMinimumSize(QSize(170, 0));
        Title_label->setStyleSheet(QString::fromUtf8("color: rgb(234, 126, 24);"));
        Close_pushButton = new QPushButton(widget_2);
        Close_pushButton->setObjectName(QString::fromUtf8("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(442, 8, 10, 10));
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
        OK_pushButton = new QPushButton(widget);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(200, 132, 60, 24));
        OK_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#OK_pushButton\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButtonYellow.png);\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
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
"\n"
""));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 461, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 8, 5, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(254, 161, 24);\n"
"font: 75 14px \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_2);

        File_lineEdit = new QLineEdit(layoutWidget);
        File_lineEdit->setObjectName(QString::fromUtf8("File_lineEdit"));
        File_lineEdit->setMinimumSize(QSize(0, 30));
        File_lineEdit->setStyleSheet(QString::fromUtf8("border-width:  1px 40px 40px 40px ;\n"
"border-radius : 4px;\n"
"border-width: 1px;\n"
"border-style: none;\n"
"border:1px groove rgb(50,53,59);border-radius:4px;\n"
"\n"
"font: 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(166, 166, 166);\n"
"\n"
"background-color: rgb(34, 36, 40);"));

        horizontalLayout_2->addWidget(File_lineEdit);

        Browse_pushButton = new QPushButton(layoutWidget);
        Browse_pushButton->setObjectName(QString::fromUtf8("Browse_pushButton"));
        Browse_pushButton->setMinimumSize(QSize(60, 24));
        Browse_pushButton->setMaximumSize(QSize(60, 24));
        Browse_pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(240, 240, 240);\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_H.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	border-image: url(:/SeedUI/Resources/SeedUI/SmallButton_C.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(Browse_pushButton);


        horizontalLayout->addWidget(widget);


        retranslateUi(OpenDialog);

        QMetaObject::connectSlotsByName(OpenDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenDialog)
    {
        OpenDialog->setWindowTitle(QApplication::translate("OpenDialog", "OpenDialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        Title_label->setText(QString());
        Close_pushButton->setText(QString());
        OK_pushButton->setText(QApplication::translate("OpenDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OpenDialog", "\346\226\207\344\273\266\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        File_lineEdit->setText(QString());
        Browse_pushButton->setText(QApplication::translate("OpenDialog", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpenDialog: public Ui_OpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENDIALOG_H
