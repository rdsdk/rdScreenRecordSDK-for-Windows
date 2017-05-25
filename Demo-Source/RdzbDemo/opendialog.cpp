#include "stdafx.h"
#include "rdzbdemo.h"
#include "opendialog.h"

OpenDialog::OpenDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
}

OpenDialog::~OpenDialog()
{

}

void OpenDialog::on_Browse_pushButton_clicked()
{
	QString	szFilter;


	switch( m_OpenFileFmt )
	{
	case OPFilefmtMove: szFilter = "Video Files (*.mp4 *.m4v *.flv *.f4v *.3gpp)";
		break;
	case OPFilefmtPicture: szFilter = "Images (*.png *.jpg *.jpeg *.gif *.bmp)";
		break;
	case OPFilefmtFlash: szFilter =  "Video Files (*.swf)";
		break;
	}
	QString szFileName	= QFileDialog::getOpenFileName( this, "Open File", QString(), szFilter );

	ui.File_lineEdit->setText ( szFileName );
}

void OpenDialog::SetTitleText( QString Text )
{
	ui.Title_label->setText ( Text );
}

void OpenDialog::on_OK_pushButton_clicked()
{
	if ( ui.File_lineEdit->text().isEmpty ()  )
	{
		QMessageBox::warning(this,
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptPath")),
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptpathError")),
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );
		return;
	}
	HCHIP	hChip	= 0;
	switch( m_OpenFileFmt )
	{
	case OPFilefmtMove: hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Movie,(LPCWSTR)ui.File_lineEdit->text().utf16(), FALSE, TRUE );
		break;
	case OPFilefmtPicture: hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Picture,(LPCWSTR)ui.File_lineEdit->text().utf16() );
		break;
	case OPFilefmtFlash: hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Flash,(LPCWSTR)ui.File_lineEdit->text().utf16(), FALSE, TRUE );
		break;
	case OPFilefmtRtmp: hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Movie,(LPCWSTR)ui.File_lineEdit->text().utf16(), FALSE, TRUE );
		break;
	}
	if ( hChip )
	{
		Chip_SetRectPercent( hChip, 0.0f, 0.0f, 1.0f, 1.0f, eKeepAspectRatio );
		Chip_SetVisible( hChip, TRUE );
		Chip_SetViewLock( hChip, eLock_AspectRatio, FALSE );
	}
	close();
}

void OpenDialog::SetModel( OpenFileFmt openFileFmt )
{	
	m_OpenFileFmt = openFileFmt;
	switch( m_OpenFileFmt )
	{
	case OPFilefmtMove: ui.Title_label->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"Video")));
		ui.label_2->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"VideoFile")));
		ui.label->setStyleSheet( "QLabel{border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Movie.png);}" );
		break;
	case OPFilefmtPicture: ui.Title_label->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"Picture")));
		ui.label_2->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"Picture")));
		ui.label->setStyleSheet( "QLabel{border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Print.png);}" );
		break;
	case OPFilefmtFlash: ui.Title_label->setText(QFU(L"flash"));
		ui.label_2->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"FlashFile")));
		ui.label->setStyleSheet( "QLabel{border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Flash.png);}" );
		break;
	case OPFilefmtRtmp: ui.Title_label->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"RtmpFlow")));
		ui.label->setStyleSheet( "QLabel{border-image: url(:/SeedUI/Resources/SeedUI/SeedUI_Rtmp.png);}" );
		ui.label_2->setText(QFU(RdzbDemo::InstanceIniWOrR().
				GetCurrentLanguagePrivateProfileString(L"RdzbDemoInputInterface",L"RtmpAddress")));
		ui.Browse_pushButton->hide();
		break;
	}
}

bool OpenDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{

		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.Title_label || pWid == ui.label ||  pWid == ui.widget_2)
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void OpenDialog::on_Close_pushButton_clicked()
{
	close();
}

void OpenDialog::LangageChange()
{
	//»∑»œ
	RdzbDemo::setControlText( ui.OK_pushButton,L"RdzbDemoInputInterface", L"Acknowledgement",EButton);

	//‰Ø¿¿
	RdzbDemo::setControlText( ui.Browse_pushButton,L"RdzbDemoInputInterface", L"LookThrough",EButton);
}