//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fRaschet.h"
#include "dataUnit.h"
#include "uElevation.h"
#include "rPuti.h"
#include "Zadanie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrUchastki *frUchastki;
//---------------------------------------------------------------------------
__fastcall TfrUchastki::TfrUchastki(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrUchastki::DBGrid1DblClick(TObject *Sender)
{
 if (MainData->t_puti->FieldByName("id_uch")->AsInteger == 0){
  ShowMessage("Нет данных по участку");
  }
 else {
  MainData->q_zadrasch->Prepared = False;
  MainData->t_puti->First();
  frUchastki->Close();
  frPuti->ShowModal();
 };
}
//---------------------------------------------------------------------------


