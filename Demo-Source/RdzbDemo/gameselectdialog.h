#ifndef GAMESELECTDIALOG_H
#define GAMESELECTDIALOG_H

#include <QDialog>
#include "ui_gameselectdialog.h"

class GameSelectDialog : public QDialog
{
	Q_OBJECT

public:
	GameSelectDialog(QWidget *parent = 0);
	~GameSelectDialog();
	void LangageChange();//语言切换
private:
	Ui::GameSelectDialog ui;
	
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
	QDialog * m_pant;//主界面指针
private slots:
	//列表选择
	void on_listWidget_currentRowChanged( int index );
	//关闭
	void on_Close_pushButton_clicked();
	//刷新
	void on_Refresh_pushButton_clicked();
	//打开
	void on_Open_pushButton_clicked();
};

#endif // GAMESELECTDIALOG_H
