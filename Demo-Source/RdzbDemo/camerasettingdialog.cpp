#include "stdafx.h"
#include "rdzbdemo.h"
#include "camerasettingdialog.h"

CameraSettingDialog::CameraSettingDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 

	ui.label_4->hide();
	ui.horizontalSlider->hide();
	ui.Whitening_label->hide();
	ui.checkBox_3->hide();

	CreateComboBox();
}

CameraSettingDialog::~CameraSettingDialog()
{

}

void CameraSettingDialog::on_Close_pushButton_clicked()
{
	close();
}

void CameraSettingDialog::on_Cancel_pushButton_clicked()
{	
	close();
}

void CameraSettingDialog::CreateComboBox()
{	
	ui.comboBox->clear();
	int		iCameraCount	= Camera_GetCount();
	if ( iCameraCount )
	{
		for ( int i = 0; i < iCameraCount; ++i )
		{
			QFontMetrics	fm( ui.comboBox->font() );
			QString szName = fm.elidedText( QFU( Camera_GetFriendlyName( i ) ), Qt::ElideRight, ui.comboBox->width() );	
			ui.comboBox->addItem( szName, QFU( Camera_GetInternalName( i )) );
		}
	}
}

void CameraSettingDialog::on_Refresh_pushButton_clicked()
{
	CreateComboBox();
}

void CameraSettingDialog::on_OK_pushButton_clicked()
{
	HCHIP	hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Camera, (LPCWSTR)ui.comboBox->itemData(ui.comboBox->currentIndex()).toString().utf16()  );
	if ( hChip )
	{
		Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
		Chip_SetVisible( hChip, TRUE );
		Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );

		float fy = 0,fx = 0;

		if( ui.checkBox_2->isChecked() )
			fx = 180;
		if( ui.checkBox->isChecked() )
			fy = 180;

		Chip_SetRotate( hChip, fx,fy,0 );
	}

	close();
}

bool CameraSettingDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{
		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.widget_2 ||  pWid == ui.label_2 || pWid == ui.label)
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void CameraSettingDialog::LangageChange()
{
	//摄像头设置
	RdzbDemo::setControlText( ui.label_2,L"RdzbDemoCameraSettings", L"CameraSettings",ELabel);

	//摄像头选择
	RdzbDemo::setControlText( ui.label_3,L"RdzbDemoCameraSettings", L"CameraSelection",ELabel);

	//画面美白
	RdzbDemo::setControlText( ui.label_4,L"RdzbDemoCameraSettings", L"PictureWhitening",ELabel);

	//镜头方向
	RdzbDemo::setControlText( ui.label_5,L"RdzbDemoCameraSettings", L"LensDirection",ELabel);

	//刷新
	RdzbDemo::setControlText( ui.Refresh_pushButton,L"RdzbDemoCameraSettings", L"Renovation",EButton);

	//确认
	RdzbDemo::setControlText( ui.OK_pushButton,L"RdzbDemoCameraSettings", L"Acknowledgement",EButton);

	//取消
	RdzbDemo::setControlText( ui.Cancel_pushButton,L"RdzbDemoCameraSettings", L"Cancel",EButton);

	//水平翻转
	RdzbDemo::setControlText( ui.checkBox,L"RdzbDemoCameraSettings", L"FlipHorizintal",EButton);

	//垂直翻转
	RdzbDemo::setControlText( ui.checkBox_2,L"RdzbDemoCameraSettings", L"FlipVertical",EButton);

	//开
	RdzbDemo::setControlText( ui.checkBox_3,L"RdzbDemoCameraSettings", L"Open",EButton);
}		
