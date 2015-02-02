//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "rPuti.h"
#include "dataUnit.h"
#include "Zadanie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrPuti *frPuti;
//---------------------------------------------------------------------------
__fastcall TfrPuti::TfrPuti(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrPuti::DBGrid1DblClick(TObject *Sender)
{
 if (MainData->q_poezd->FieldByName("id_poezd")->AsInteger == 0)
 {
  ShowMessage("По этому пути не произведены тяговые расчеты");
 }
 else
 {
  frPuti->Close();
  fZadanie->ShowModal();
 };
}
//---------------------------------------------------------------------------

