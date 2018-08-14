//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if ( Key == VK_UP ){
  Form2->Height = Form2->Height - 1;
}
if ( Key == VK_DOWN ){
  Form2->Height = Form2->Height + 1;
}
if ( Key == VK_LEFT ){
  Form2->Width = Form2->Width - 1;
}
if ( Key == VK_RIGHT ){
  Form2->Width = Form2->Width + 1;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormMouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
ReleaseCapture();
SendMessage(Form2->Handle, WM_NCLBUTTONDOWN, HTCAPTION, 0);        
}
//---------------------------------------------------------------------------

