//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "newZadanie.h"
#include "dataUnit.h"
#include "uElevation.h"
#include "Zadanie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TnewZad *newZad;
//---------------------------------------------------------------------------
__fastcall TnewZad::TnewZad(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TnewZad::FormShow(TObject *Sender)
{
 TLocateOptions opt;
 Edit1->Text = MainData->q_zadrasch->FieldByName("id_uch")->AsString;
 Edit2->Text = MainData->q_zadrasch->FieldByName("id_put")->AsString;

 MainData->t_zadrasch->First();
 int max;
 max = MainData->t_zadrasch->FieldByName("id_zadan")->AsInteger;
 while (!MainData->t_zadrasch->Eof){
  if (MainData->t_zadrasch->FieldByName("id_zadan")->AsInteger > max){
   max = MainData->t_zadrasch->FieldByName("id_zadan")->AsInteger;
  }
  if(MainData->t_zadrasch->Eof){break;};
  MainData->t_zadrasch->Next();
 }
 Edit3->Text = IntToStr(++max);
  
}
//---------------------------------------------------------------------------
void __fastcall TnewZad::lookUPCloseUp(TObject *Sender)
{
 Variant res;
 res = lookUP->KeyValue;
 Edit6->Text=IntToStr((int)res);
}
//---------------------------------------------------------------------------
void __fastcall TnewZad::Button2Click(TObject *Sender)
{
 newZad->Close();
}
//---------------------------------------------------------------------------


void __fastcall TnewZad::Button1Click(TObject *Sender)
{
 MainData->t_zadrasch->Insert();
 MainData->t_zadrasch->FieldByName("id_uch")->Value = StrToInt(Edit1->Text);
 MainData->t_zadrasch->FieldByName("id_put")->Value = StrToInt(Edit2->Text);
 MainData->t_zadrasch->FieldByName("id_zadan")->Value = StrToInt(Edit3->Text);
 MainData->t_zadrasch->FieldByName("name")->Value = Edit4->Text;
 MainData->t_zadrasch->FieldByName("k_ponij")->Value = StrToFloat(Edit5->Text);
 MainData->t_zadrasch->FieldByName("id_ppotok")->Value = StrToInt(Edit6->Text);
 MainData->t_zadrasch->Post();
 //MainData->t_zadrasch->Close();
 newZad->Close();

 //MainData->q_zadrasch->Prepared = False;
 //MainData->s_putiDataChange(Sender,fZadanie->DBGrid1->Fields[1]);
  String s;
  s = "SELECT zadrasch.id_uch, zadrasch.id_put, zadrasch.id_zadan, zadrasch.name,";
  s += " uchastki.n_uch,  zadrasch.k_ponij, zadrasch.id_ppotok";
  s += " FROM zadrasch, uchastki";
  s += " WHERE zadrasch.id_uch = 1";
  s += " and zadrasch.id_uch = uchastki.id_uch";
  s += " and zadrasch.id_put = 1";

  MainData->q_zadrasch->SQL->Clear();
  MainData->q_zadrasch->SQL->Add(s);
  MainData->q_zadrasch->Open();
  MainData->q_zadrasch->Prepared = True;
}
//---------------------------------------------------------------------------

