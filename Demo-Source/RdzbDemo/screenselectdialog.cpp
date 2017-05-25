#include "stdafx.h"
#include "rdzbdemo.h"
#include "screenselectdialog.h"

ScreenSelectDialog::ScreenSelectDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
}

ScreenSelectDialog::~ScreenSelectDialog()
{

}

void ScreenSelectDialog::on_Close_pushButton_clicked()
{
	close();
}

void ScreenSelectDialog::on_Cancel_pushButton_clicked()
{
	close();
}

void ScreenSelectDialog::Refresh_Screen()
{
	int				iScreenCount	= Screen_GetCount();
	MONITORINFOEXW	monit;
	QRect			rtScreen;
	QString			szItem;
	for ( int i = 0; i < iScreenCount; ++i )
	{
		Screen_GetInfo( i, &monit );
		rtScreen	|= QRect( monit.rcMonitor.left, monit.rcMonitor.top, 
			monit.rcMonitor.right - monit.rcMonitor.left, monit.rcMonitor.bottom - monit.rcMonitor.top );
	}

	ui.Screen_comboBox->clear();
	szItem	= QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoScope",L"DisplayPointOut1")
		).arg( rtScreen.width() ).arg( rtScreen.height() );
	ui.Screen_comboBox->addItem( szItem,UINT(-1) );
	if ( iScreenCount > 1 )
	{
		for ( int i = 0; i < iScreenCount; ++i )
		{
			Screen_GetInfo( i, &monit );
			rtScreen	= QRect( monit.rcMonitor.left, monit.rcMonitor.top, 
				monit.rcMonitor.right - monit.rcMonitor.left, monit.rcMonitor.bottom - monit.rcMonitor.top );
			szItem	= QFU( RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoScope",L"DisplayPointOut2")
				).arg(i).arg( rtScreen.width() ).arg( rtScreen.height() );
			ui.Screen_comboBox->addItem( szItem,UINT(i));
		}
	}
}

void ScreenSelectDialog::on_OK_pushButton_clicked()
{
	IScreen_SCapParams	sCapParams	= {0};
	HCHIP	hChip	= 0;
	UINT	iVal	= UINT(ui.Screen_comboBox->itemData( ui.Screen_comboBox->currentIndex()).toInt());
	if ( iVal == 0xFFFFFFFF )
	{
		sCapParams.iScreen	= -1;
	}
	else if ( iVal >= 0 && iVal < 256 )
	{
		sCapParams.iScreen	= iVal;
	}
	else
	{
		sCapParams.hWindow	= HWND(iVal);
	}
	hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Screen,Screen_AssembleSource( &sCapParams ) );
	if ( hChip )
	{
		Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
		//新添加的元件，不要忘了设置显示。
		Chip_SetVisible( hChip, TRUE );
		Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );
	}

	close();
}

void ScreenSelectDialog::on_Refresh_pushButton_clicked()
{
	Refresh_Screen();
}

bool ScreenSelectDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{
		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == ui.widget_2 || pWid == ui.label_2  || pWid == NULL || pWid == ui.label )
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void ScreenSelectDialog::LangageChange()
{
	//全屏录制
	RdzbDemo::setControlText( ui.label_2,L"RdzbDemoScope", L"FullScreenRecording",ELabel);

	//显示器
	RdzbDemo::setControlText( ui.label_3,L"RdzbDemoScope", L"Indicator",ELabel);

	//提示
	RdzbDemo::setControlText( ui.textEdit,L"RdzbDemoScope", L"DisplayPointOut3",ETextEdit);

	//确认
	RdzbDemo::setControlText( ui.OK_pushButton,L"RdzbDemoScope", L"Acknowledgement",EButton);

	//取消
	RdzbDemo::setControlText( ui.Cancel_pushButton,L"RdzbDemoScope", L"Cancel",EButton);

	//刷新
	RdzbDemo::setControlText( ui.Refresh_pushButton,L"RdzbDemoScope", L"Renovation",EButton);
}	
