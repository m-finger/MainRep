//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Puti.h"
#include "uElevation.h"
#include "Doroga.h"
#include "dataUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfPuti *fPuti;
//---------------------------------------------------------------------------
__fastcall TfPuti::TfPuti(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfPuti::FormShow(TObject *Sender)
{
   //  ADOQuery1->Open();
}
//---------------------------------------------------------------------------


void __fastcall TfPuti::DBGrid1DblClick(TObject *Sender)
{
 /*int a1 = DBGrid1->Fields[0]->AsInteger;
 int b1 = DBGrid1->Fields[1]->AsInteger;

 Form5->ADOQuery1->SQL->Clear();

 String s1 = "select * from dkm_puch where id_uch="+IntToStr(a1);
 s1 += " and id_put ="+IntToStr(b1);

 Form5->ADOQuery1->SQL->Add(s1);
 //---
 int a2 = DBGrid1->Fields[0]->AsInteger;
 int b2 = DBGrid1->Fields[1]->AsInteger;

 Form5->ADOQuery2->SQL->Clear();

 String s2 = "select * from npk where id_uch="+IntToStr(a2);
 s2 += " and id_put ="+IntToStr(b2);

 Form5->ADOQuery2->SQL->Add(s2);
 //---
 int a3 = DBGrid1->Fields[0]->AsInteger;
 int b3 = DBGrid1->Fields[1]->AsInteger;

 Form5->ADOQuery3->SQL->Clear();

 String s3 = "select * from plan where id_uch="+IntToStr(a3);
 s3 += " and id_put ="+IntToStr(b3);

 Form5->ADOQuery3->SQL->Add(s3);
 //---
 int a4 = DBGrid1->Fields[0]->AsInteger;
 int b4 = DBGrid1->Fields[1]->AsInteger;

 Form5->ADOQuery4->SQL->Clear();

 String s4 = "select * from rpunkt where id_uch="+IntToStr(a4);
 s4 += " and id_put ="+IntToStr(b4);

 Form5->ADOQuery4->SQL->Add(s4);
 //---
 //String p = IntToStr(a);
 //ShowMessage("p_"+p+"");*/
 fDoroga->ShowModal();     
}
//---------------------------------------------------------------------------

