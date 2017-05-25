#ifndef RDZBDEMO_H
#define RDZBDEMO_H

#include <QtGui/QDialog>
#include <QtGui>
#include "ui_rdzbdemo.h"
#include <Windows.h>
#include "settingdialog.h"
#include "ChipItem.h"
#include "aboutdialog.h"



class RdzbDemo : public QDialog
{
	Q_OBJECT

public:
	struct BitrateStatic
	{
		int iBitrate;
		int iBitrateMinimum;
		int iBitrateMaximum;
	};
	//计算在相应分辨率和帧率下合适的码率范围
	static BitrateStatic GetBitrate( int width, int height, int fps );

	RdzbDemo(QWidget *parent = 0, Qt::WFlags flags = 0);
	~RdzbDemo();
	SettingDialog * m_SettingDialog;//设置窗口
	void Restore();//恢复
	BOOL			m_bChipListChanging;	//标记，当前的元件列表的修改是程序自己调用的，而不是用户操作，因此不需要在事件响应中进行任何处理。

	//控件编号： 0为QListWidget  1为QComboBox
	void GetWindowsList( void * pwidget, int iControlNumber = 0 );//获取窗口列表

	void AddPicture();//添加操作提示图片

	QDomDocument	m_docOption;//界面配置信息
	//返回根元素
	QDomElement FindXmlElement( const QString& szPath, BOOL bCreateIfNull = FALSE );

	QString CombinationFilePath( const QString& szDir, const QString& szPrefix, const QString& szExtension );
	//把界面上的设置更新到配置文件和SDK并保存
	BOOL SaveProfile( BOOL isSet = FALSE);
	bool m_IsClose;//是否退出
	bool m_bIsClose;//是否关闭

	static void setControlText( QWidget * Control, LPWSTR lpAppName,LPWSTR lpKeyName , EControlType controlType );
	void LangageChange();//语言切换
	static IniWOrR& InstanceIniWOrR();

	void SwitchingLanguage();//语言更改切换

	//直播和录播方面的配置文件读取
	BOOL SettingLive();
	//视频方面的配置文件读取
	BOOL SettingVideo();

	//字幕修改
	void CreateSubtitleModification( HCHIP	hChip = NULL );
private:
	QSystemTrayIcon * m_trayicon;//托盘
	QMenu * m_trayiconMenu;//托盘列表
	bool m_bShow;//
	void OnbtnCloseClicked();//托盘的加载

	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent( QDropEvent * event );	

	
protected:
	void closeEvent ( QCloseEvent * event );//关闭事件
	//
private:
	void keyPressEvent(QKeyEvent *event);

	void OnAcceditDone( BOOL bSuccess, const QString& szErrStr );//授权显示
	AboutDialog * m_aboutDialog;//关于软件的介绍的界面
	//加载配置文件
	BOOL LoadProfile();
	//把配置文件的内容设置到界面和SDK
	BOOL SettingToUiAndSdk();
	//声音方面的配置文件读取
	BOOL SettingAuido();

	//截入场景配置文件
	BOOL LoadScenes();
	BOOL SaveScenes();

	Ui::RdzbDemoClass ui;
	bool winEvent( MSG* msg, long* result );//无边框界面的移动处理
	void changeEvent(QEvent* e);//最小化 还原
	QMenu	m_menu;//菜单

	int m_UiWidth;//全界面宽度
	int m_ComponentWidth;//列表宽度
	IGlRender_SPreviewLayout m_sPerviewLayout;	//预览布局

	//
	void UpdatePreviewConfig( IGlRender_SPreviewLayout::EReposWnd eMode );//用于设置和计算预览画面区域的结构
	static VOID WINAPI RenderNotifyCB( IRender_ENotify eNotify, HSCENE hScene, INT iValue, LPVOID pCbParam );//渲染修改提示回调
	static VOID WINAPI EncoderNotifyCB( IEncoder_ENotify eNotify, DWORD dwValue, DWORD_PTR ptrValue, LPVOID pCbParam );//编码设置修改提示回调
	private slots:
		//语言切换
		void on_pushButton_clicked();
		//托盘菜单操作
		void on_UI_clicked();//返回主界面
		void onSystemTrayIconClicked( QSystemTrayIcon::ActivationReason reason );//托盘鼠标点击操作
		void SelfClose();//托盘退出
		//停止直播
		void on_Live_Quit_pushButton_clicked();
		//开始直播
		void on_Live_Begin_pushButton_clicked();
		//元件列表 选中信号槽
		void on_listWidget_currentItemChanged( QListWidgetItem * current, QListWidgetItem * previous );
		void on_listWidget_currentRowChanged( int index );
		//扬声器设置
		void on_Speaker_pushButton_clicked();
		void on_Checke_Speaker_pushButton_clicked( bool checked );
		void on_Speaker_verticalSlider_valueChanged( int value );
		//麦克风设置
		void on_MIC_pushButton_clicked();
		void on_Checke_MIC_pushButton_clicked( bool checked );
		void on_MIC_verticalSlider_valueChanged( int value );
		//设置
		void on_Setting_pushButton_clicked();
		//关闭
		void on_Close_pushButton_clicked();
		//最小化
		void on_Min_pushButton_clicked();
		//右上角设置
		void on_Operate_pushButton_clicked();
		//列表隐藏
		void on_Search_pushButton_clicked( bool checked );
		//手游直播
		void on_Mobile_Game_pushButton_clicked();
		void on_Android_pushButton_select_clicked();//安卓直播
		void on_Android_label_clicked();//安卓直播label

		void on_IOS_pushButton_select_clicked();//IOS直播
		void on_IOS_label_clicked();//IOS直播label

		//其他直播
		void on_Other_pushButton_clicked();//其他选择界面开启

		void on_Video_pushButton_select_clicked();//视频文件
		void on_Video_label_clicked();//视频文件label

		void on_picture_pushButton_select_clicked();//图片
		void on_picture_label_clicked();//图片label

		void on_flash_pushButton_select_clicked();//flash文件
		void on_flash_label_clicked();//flash文件label

		void on_RTMP_pushButton_select_clicked();//rtmp直播
		void on_RTMP_label_clicked();//rtmp直播label	

		void on_captions_pushButton_select_clicked();//字幕添加
		void on_captions_label_clicked();//字幕添加label

		//PC直播
		void on_PC_Live_pushButton_clicked();
		void on_Game_pushButton_select_clicked();//游戏直播
		void on_Game_label_clicked();//游戏直播label

		void on_Display_pushButton_select_clicked();//显示器直播
		void on_Display_label_clicked();//显示器直播label

		void on_Windows_pushButton_select_clicked();//窗口直播
		void on_Windows_label_clicked();//窗口直播label

		void on_Camera_pushButton_select_clicked();//摄像头直播
		void on_Camera_label_clicked();//摄像头直播label

		void on_signalsRenerNotifyCB( int eNotify, int hScene, int iValue );//渲染回调信号槽
		void on_signalsEncoderNotifyCB( int eNotify, ulong dwValue, ulong ptrValue  );//编码回调信号槽
signals:
		void signalsRenderNotifyCB( int eNotify, int hScene, int iValue );//渲染回调信号触发
		void signalsEncoderNotifyCB( int eNotify, ulong dwValue, ulong ptrValue  );//编码回调信号触发
};

#endif // RDZBDEMO_H
