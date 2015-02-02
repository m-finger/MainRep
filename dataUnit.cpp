//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "dataUnit.h"
#include "uElevation.h"
#include "nsi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainData *MainData;
//---------------------------------------------------------------------------
__fastcall TMainData::TMainData(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainData::s_poezdDataChange(TObject *Sender,
      TField *Field)
{
 //SELECT vn, vk, dk_n, pk_n, plus_n, dk_k, pk_k, plus_k  FROM vosn_1

 int a = MainData->q_poezd->FieldByName("id_poezd")->AsInteger;
 if (a != 0)
 {
  String s;
  s = "SELECT vn, vk, dk_n, pk_n, plus_n, dk_k, pk_k, plus_k, ";
  s += " (dk_n + pk_n*0.1 + plus_n*0.001) AS DKMn, ";
  s += " (dk_k + pk_k*0.1 + plus_k*0.001) AS DKMk";
  s += " FROM vosn_";
  s += IntToStr(a);
  s += " ORDER BY DKMn";

  //MainData->q_vosn->Close();
  MainData->q_vosn->SQL->Clear();
  MainData->q_vosn->SQL->Add(s);
  MainData->q_vosn->Open();
  MainData->q_vosn->Prepared = True;
 };
}
//---------------------------------------------------------------------------

void __fastcall TMainData::s_zadraschDataChange(TObject *Sender,
      TField *Field)
{
 //SELECT npoezd, id_poezd, kol_vo, rtiploco, rves, rname_rp1, rname_rp2
 //FROM zadtr_1 WHERE rid_put = :id_put
 if (!MainData->q_poezd->Prepared)
  {
   String s;
   s  = "SELECT npoezd, id_poezd, kol_vo, rtiploco, rves, rname_rp1, rname_rp2, rkategor";
   s += " FROM zadtr_1 WHERE rid_put = :id_put";

   MainData->q_poezd->SQL->Clear();
   MainData->q_poezd->SQL->Add(s);
   MainData->q_poezd->Open();
   MainData->q_poezd->Prepared = True;
  };
}
//---------------------------------------------------------------------------
void __fastcall TMainData::s_putiDataChange(TObject *Sender, TField *Field)
{
 // MainData->q_zadrasch->SQL->Clear();
 // MainData->q_zadrasch->Prepared = False;
 // ShowMessage("puti");
 if (!MainData->q_zadrasch->Prepared){
  String s;
  s = "SELECT zadrasch.id_uch, zadrasch.id_put, zadrasch.id_zadan, zadrasch.name,";
  s += " uchastki.n_uch,  zadrasch.k_ponij, zadrasch.id_ppotok";
  s += " FROM zadrasch, uchastki";
  s += " WHERE zadrasch.id_uch = :id_uch";
  s += " and zadrasch.id_uch = uchastki.id_uch";
  s += " and zadrasch.id_put = :id_put";

  MainData->q_zadrasch->SQL->Clear();
  MainData->q_zadrasch->SQL->Add(s);
  MainData->q_zadrasch->Open();
  MainData->q_zadrasch->Prepared = True;
 };
}
//---------------------------------------------------------------------------

void __fastcall TMainData::s_uchastkiDataChange(TObject *Sender,
      TField *Field)
{
 MainData->q_zadrasch->Prepared = True;
}
//---------------------------------------------------------------------------



