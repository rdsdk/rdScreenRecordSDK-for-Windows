#include "stdafx.h"
#include "rdzbdemo.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	HANDLE	hMutex	= CreateMutex( NULL, FALSE, L"RdzbDemo" );
	if ( GetLastError() == ERROR_ALREADY_EXISTS )
	{
		CloseHandle( hMutex );
		return 0;
	}

	QApplication a(argc, argv);
	RdzbDemo w;
	w.show();
	return a.exec();
}
