#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include "ui_aboutdialog.h"

class AboutDialog : public QDialog
{
	Q_OBJECT

public:
	AboutDialog(QWidget *parent = 0);
	~AboutDialog();
	Ui::AboutDialog ui;

	bool m_bSuccess;
	QString m_szErrStr;
private:
	
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
private slots:
	//关闭
	void on_Close_pushButton_clicked();
	//确定
	void on_OK_pushButton_clicked();
};

#endif // ABOUTDIALOG_H
