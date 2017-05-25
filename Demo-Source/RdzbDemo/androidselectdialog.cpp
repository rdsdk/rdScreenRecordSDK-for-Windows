#include "stdafx.h"
#include "rdzbdemo.h"
#include "androidselectdialog.h"

AndroidSelectDialog::AndroidSelectDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
}

AndroidSelectDialog::~AndroidSelectDialog()
{

}

void AndroidSelectDialog::on_Close_pushButton_clicked()
{
	close();
}

void AndroidSelectDialog::on_Download_pushButton_clicked()
{
	QDesktopServices::openUrl(QUrl("http://www.bluestacks.cn/"));
}

bool AndroidSelectDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{

		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.label_2 || pWid == ui.label ||  pWid == ui.widget_2)
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void AndroidSelectDialog::on_DownWindow_pushButton_clicked()
{
	HWND			hWnd	= GetTopWindow( NULL );
	WCHAR			szWindow[MAX_PATH]	= {0};
	DWORD			dwStyle				= 0;
	DWORD			dwStyleEx			= 0;
	BOOL			bAddWindow			= FALSE;
	HWND			hMyWnd				= winId();
	QString			szItem;
	while( hWnd )
	{
		bAddWindow	= FALSE;
		dwStyle		= GetWindowLong( hWnd, GWL_STYLE );
		dwStyleEx	= GetWindowLong( hWnd, GWL_EXSTYLE );
		while( !bAddWindow )
		{
			if (  hMyWnd == hWnd ) break;
			if ( dwStyle & ( WS_ICONIC | WS_CHILD ) ) break;
			if ( ( dwStyle & WS_VISIBLE ) == 0 ) break;
			if ( GetWindow( hWnd, GW_OWNER ) ) break;
			if ( GetWindowLong( hWnd, GWL_HWNDPARENT ) ) break;
			bAddWindow	= TRUE;
		}

		if ( bAddWindow )
		{
			if ( InternalGetWindowText( hWnd, szWindow, ARRAYSIZE( szWindow ) ) && szWindow[0] )
			{
				szItem	= QFU( szWindow );
				BOOL isBeginGameAndroid = FALSE;
				if ( szItem == QFU(L"劲风版") )
				{
					isBeginGameAndroid = TRUE;
					//51安卓模拟器
				} 
				else if( szItem == QFU(L"Bluestacks App Player") )
				{
					isBeginGameAndroid = TRUE;
					//蓝叠
				}
				else if( szItem == QFU(L"靠谱助手") )
				{
					isBeginGameAndroid = TRUE;
					//靠谱助手
				}
				else if ( szItem.contains(QFU(L"海马玩模拟器"), Qt::CaseInsensitive))
				{
					isBeginGameAndroid = TRUE;
					//海马玩模拟器
				}
				else if ( szItem.contains(QFU(L"MuMu模拟器"), Qt::CaseInsensitive) )
				{
					isBeginGameAndroid = TRUE;
					//网易mumu
				}
				else if ( szItem.contains(QFU(L"靠谱天天模拟器"), Qt::CaseInsensitive) )
				{
					isBeginGameAndroid = TRUE;
					//天天模拟器
				}
				else if ( szItem.contains(QFU(L"猩猩安卓模拟器"), Qt::CaseInsensitive) )
				{
					isBeginGameAndroid = TRUE;
					//猩猩安卓模拟器
				}
				if ( isBeginGameAndroid )
				{
					IScreen_SCapParams	sCapParams	= {0};
					sCapParams.hWindow = hWnd;
					HCHIP	hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Screen, Screen_AssembleSource( &sCapParams ) );
					if ( hChip )
					{
						Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
						//新添加的元件，不要忘了设置显示。
						Chip_SetVisible( hChip, TRUE );
						Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );
					}
					close();
					return;
				}
			}
		}
		hWnd	= GetWindow( hWnd, GW_HWNDNEXT );
	}
	QMessageBox::warning(this,
		QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"AndroidSimulation")),
		QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"AndroidSimulationError")),
		QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );
}

void AndroidSelectDialog::LangageChange()
{
	//安卓直播
	RdzbDemo::setControlText( ui.label,L"RdzbDemoAndroidLive", L"AndroidLive",ELabel);

	//模拟器
	RdzbDemo::setControlText( ui.pushButton,L"RdzbDemoAndroidLive", L"Simulator",EButton);

	//下载模拟器
	RdzbDemo::setControlText( ui.pushButton,L"RdzbDemoAndroidLive", L"DownloadSimulator",EButton);

	//添加
	RdzbDemo::setControlText( ui.DownWindow_pushButton,L"RdzbDemoAndroidLive", L"Superinduce",EButton);

	//首先
	//RdzbDemo::setControlText( ui.textBrowser,L"RdzbDemoAndroidLive", L"DisplayPointOut1",ETextEdit);
	QString str = QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut1"));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut2")));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut3")));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut4")));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut5")));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut6")));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoAndroidLive",L"DisplayPointOut7")));
	
	 ui.textBrowser->setText(str);
}
