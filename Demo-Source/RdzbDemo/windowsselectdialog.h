#ifndef WINDOWSSELECTDIALOG_H
#define WINDOWSSELECTDIALOG_H

#include <QDialog>
#include "ui_windowsselectdialog.h"

class WindowsSelectDialog : public QDialog
{
	Q_OBJECT

public:
	WindowsSelectDialog(QWidget *parent = 0);
	~WindowsSelectDialog();
	QRadioButton * CreateRadioButton( QString & name );
	void LangageChange();//语言切换
private:
	Ui::WindowsSelectDialog ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
	QDialog * m_pant;//主窗口
private slots:
	//列表选择
	void on_listWidget_currentRowChanged( int index );
	//关闭
	void on_Close_pushButton_clicked();
	//取消
	void on_Cancel_pushButton_clicked();
	//刷新
	void on_Refresh_pushButton_clicked();
	//确定
	void on_OK_pushButton_clicked();
};

#endif // WINDOWSSELECTDIALOG_H
