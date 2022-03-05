/*=============================================================================
$File: $
$Date: $
$Revision: $
$Creator: $
$Notice: $
===============================================================================*/

#include <windows.h>

int CALLBACK
WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	MessageBoxA(0, "This is Handmade Hero.", "Handmade Hero",
				MB_OK | MB_ICONCONFIRMATION);
	
	return(0);
}