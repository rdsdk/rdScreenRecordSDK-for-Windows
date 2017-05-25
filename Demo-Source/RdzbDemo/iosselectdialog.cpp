#include "stdafx.h"
#include "rdzbdemo.h"
#include "iosselectdialog.h"

IOSSelectDialog::IOSSelectDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 


	//ui.Download_pushButton->hide();
}

IOSSelectDialog::~IOSSelectDialog()
{

}

void IOSSelectDialog::on_Close_pushButton_clicked()
{	
	close();
}

void IOSSelectDialog::on_IOS_pushButton_clicked()
{
	QDesktopServices::openUrl(QUrl("http://static.yximgs.com/s1/beta/AirPlayer.exe"));
}

bool IOSSelectDialog::winEvent( MSG* msg, long* result )
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

HWND GetTrueParent(HWND hwnd)
{
	DWORD dwStyle = GetWindowLong(hwnd, GWL_STYLE);
	if((dwStyle & WS_CHILD) == WS_CHILD)
		return GetParent(hwnd);
	else
		return GetDesktopWindow();
}

void IOSSelectDialog::on_Download_pushButton_clicked()
{	
	HWND			hWnd	= GetTopWindow( NULL );
	WCHAR			szWindow[MAX_PATH]	= {0};
	QString			szItem;

	bool isIos = false;
	while( hWnd )
	{
		//获取窗口的所有者窗口句柄
		HWND HwParent =  GetWindow(hWnd,GW_OWNER);
		if ( InternalGetWindowText( HwParent, szWindow, ARRAYSIZE( szWindow ) ) && szWindow[0] )
		{
			szItem = QFU( szWindow );
			if ( szItem == QFU(L"Airplayer") )
			{
				////获取窗口类名
				WCHAR	szClassWindow[MAX_PATH]	= {0};
				if (GetClassName(hWnd,szClassWindow, MAX_PATH ) )
				{
					szItem = QFU(szClassWindow);
					if ( szItem == QFU(L"CHWindow") )
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
						isIos = true;
					}
				}
			}
		}
		hWnd	= GetWindow( hWnd, GW_HWNDNEXT );
	}
	
	if( !isIos )
		QMessageBox::warning(this,
		QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"IOSSimulation")),
		QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"IOSSimulatioError")),
		QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );
}

void IOSSelectDialog::LangageChange()
{
	//IOS直播
	RdzbDemo::setControlText( ui.label,L"RdzbDemoIOSLive", L"IOSLive",ELabel);

	//添加
	RdzbDemo::setControlText( ui.Download_pushButton,L"RdzbDemoIOSLive", L"Superinduce",EButton);

	//下载Airplay
	RdzbDemo::setControlText( ui.IOS_pushButton,L"RdzbDemoIOSLive", L"DownloadAirplay",EButton);

	//提示
	RdzbDemo::setControlText( ui.label_5,L"RdzbDemoIOSLive", L"DisplayPointOut1",ELabel);

	//提示1
	QString str = QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoIOSLive",L"DisplayPointOut2"));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoIOSLive",L"DisplayPointOut3")));
	str.append("\t\n");
	str.append(QFU(RdzbDemo::InstanceIniWOrR().
		GetCurrentLanguagePrivateProfileString(L"RdzbDemoIOSLive",L"DisplayPointOut4")));

	 ui.textBrowser->setText(str);
}	