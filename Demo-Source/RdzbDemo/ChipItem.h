#ifndef CHIPITEM_H
#define CHIPITEM_H

#include <QWidget>
#include "ui_chipitem.h"

class ChipItem : public QWidget
{
	Q_OBJECT

public:
	//QTimer m_timer;
	ChipItem( HCHIP hChip, QListWidget *parent = 0 , QWidget * parentDialog = 0 );
	~ChipItem();

	void Init();
	HCHIP GetHChip() { return m_hChip; }
	//元件修改回调
	static BOOL OnRenderNotify( QWidget * parentDialog, QListWidget* pList, IRender_ENotify eNotify, HSCENE hScene, int iValue );
	//删除操作
	static HCHIP GetChipHandle( QListWidget* pList, int iViewIndex );
	//选中操作
	BOOL m_IsSelected;//是否选中
	BOOL m_IsMove;//是否移动位置
	void OnChipSelected( BOOL bSelect = TRUE );
	void on_StatusChanged( const IPinInput_SStatusInfo& sChipStatus );//播放等一些类按钮的状态修改
	HCHIP			m_hChip;
	
	QTimer*			m_pPlayTimer;//播放时间定时器
	//元件名生成
	void DisplaySourceName();
	Ui::ChipItem ui;
	
	void LangageChange();//语言切换
	QString m_strPinInput;//元件类型
private:
	QWidget * m_parentDialog;
	IPinInput_EClass	m_eClassType;
	QSize			m_siBase;

	IScreen_SCapParams		m_sScrCapParams;
	IPinInput_SStatusInfo	m_sChipStatus;
	QListWidget*		m_listWidChips;
	QListWidgetItem*	m_lwItem;
	
	void OnPosChanged();
	static ChipItem* GetChipItem( QListWidget* pList, int iViewIndex );
	static BOOL MoveChipItem( QWidget * parentDialog, QListWidget* pList, int iViewFrom, int iViewTo );
public slots:
	//void on_Timer();
	void on_widPlayProgress_areaChanged( double fMin, double fMax );
	void on_widPlayProgress_valueChanged( double fValue );
	
	void on_timPlayProgress_timeout();
	//界面显隐的操作
	void on_chkHideChip_clicked( bool checked );
	//正中
	void on_butMiddle_clicked( bool checked );
	//平铺
	void on_butScaleFull_clicked( bool checked );
	//上移
	void on_Up_Chip_pushButton_clicked();
	//下移
	void on_Down_Chip_pushButton_clicked();
	//删除
	void on_Close_Chip_pushButton_clicked();

	void on_butPlay_clicked();//播放
	void on_butPause_clicked();//暂停
	void on_butStop_clicked();//停止
	void on_chkMute_clicked( bool checked );//是否播放声音
	void on_horizontalSlider_valueChanged( int value );//声音大小调节

	void on_pushButton_Revise_Txt_clicked();//字幕设置
};


#endif // CHIPITEM_H
