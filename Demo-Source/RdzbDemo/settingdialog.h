#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include "ui_settingdialog.h"


class SettingDialog : public QDialog
{
	Q_OBJECT

public:
	Ui::SettingDialog ui;

	SettingDialog(QWidget *parent = 0);
	~SettingDialog();
	QDialog * m_pant;//主界面指针

	void SetBitrate();//码率变化设置
	void Refresh_Auido();//声音设备刷新

	bool CheckMovieSaveDir( BOOL bPopMsg = FALSE );//视频保存目录检查
	void LangageChange();//语言切换
	void SetLangageList();//

	bool Save( bool isSurface = false );//保存
private:
	void keyPressEvent(QKeyEvent *event); //键盘
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
private slots:
	//语言
	void on_Langage_pushButton_clicked();
	//关闭
	void on_Close_pushButton_clicked();
	//取消
	void on_Cancel_pushButton_clicked();
	//确定
	void on_OK_pushButton_clicked();
	//视频
	void on_Video_pushButton_clicked();
	//声音
	void on_Auido_pushButton_clicked();
	//直播设置
	void on_Live_pushButton_clicked();
	//分辨率
	void on_Resolution_comboBox_currentIndexChanged( int index );
	//帧率
	void on_FPS_comboBox_currentIndexChanged( int index );
	//浏览
	void on_browse_pushButton_clicked();
	//查看
	void on_View_pushButton_clicked();
	//鼠标录制
	void on_Win7_MOUSE_checkBox_clicked(  bool checked  );
	//Aero特效关闭
	void on_Win7_Aero_checkBox_clicked(  bool checked  );
	//语言
	void on_Language_comboBox_currentIndexChanged( int index );

	//视频文件夹保存
	void on_File_checkBox_clicked(  bool checked  );
	//Rtmp
	void on_Rtmp_checkBox_clicked(  bool checked  );
};

#endif // SETTINGDIALOG_H
