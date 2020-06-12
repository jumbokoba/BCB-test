//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String str = L"hello world!";

	if( Application->MessageBox( L"yes or no", L"check",  MB_YESNO ) == IDYES )
	{
		ShowMessage( str );
	}
}
//---------------------------------------------------------------------------
