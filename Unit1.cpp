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
	String str_yes = L"hello world!";
	String str_no = L"bye";

	int id = Application->MessageBox( L"yes or no", L"check",  MB_YESNO );
	if( id == IDYES )
	{
		ShowMessage( str_yes );
	}
	else if( id == IDNO )
	{
		ShowMessage( str_no );
    }
}
//---------------------------------------------------------------------------
