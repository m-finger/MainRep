//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Uchastki.h"
#include "uElevation.h"
#include "Puti.h"
#include "dataUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfUchastki *fUchastki;
//---------------------------------------------------------------------------
__fastcall TfUchastki::TfUchastki(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfUchastki::DBGrid1DblClick(TObject *Sender)
{
 if (MainData->t_puti->FieldByName("id_uch")->AsInteger == 0){
  ShowMessage("Нет данных по участку");
 }
 else {
  fPuti->ShowModal();
 };
}
//---------------------------------------------------------------------------

