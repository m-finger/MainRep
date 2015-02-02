//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Zadanie.h"
#include "dataUnit.h"
#include "uElevation.h"
#include "newZadanie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TfZadanie *fZadanie;
//---------------------------------------------------------------------------
double __fastcall f_sqr(double f)
{
 if (f>0){return sqrt(f);}
 else return 0;
}

double __fastcall f_fivediv(double f)
{
 f = f/5;
 f = (int)f;
 f = f*5; 
 return f;
}

double __fastcall fh_itog(double h)
{
 if (h>150){return 150;};
 if (h<0){return 0;};
 if ((h>=0)&&(h<=150)){return h;};
}

double __fastcall f_minus(double f)
{
 if (f>0){return f;}
 else return 0;
}
//-------------------

__fastcall TfZadanie::TfZadanie(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfZadanie::FormClose(TObject *Sender, TCloseAction &Action)
{
 MainData->q_vosn->Prepared = False;
/* MainData->q_vosn->Close();
 MainData->q_poezd->Close();
 MainData->t_temp->Close();
 MainData->q_plan->Close();
 MainData->q_vedomost->Close();
 MainData->t_vedomost->Close();
 ShowMessage("close");*/
}
//---------------------------------------------------------------------------
void __fastcall TfZadanie::Button2Click(TObject *Sender)
{
 //MainData->s_vosn->DataSet = NULL;
 CGauge1->MaxValue = MainData->q_vosn->RecordCount+310;
 int a = 0;
 MainData->t_temp->First();
 MainData->q_poezd->First();
 String kat;
 double vpr_ch;
 double vpr_zn;
 double vgr_ch;
 double vgr_zn;
 double klNAves;
 for (int i=1; i<=MainData->q_poezd->RecordCount;i++) {
  a=0;
  double kl = MainData->q_poezd->FieldByName("kol_vo")->Value;
  double ves = MainData->q_poezd->FieldByName("rves")->Value;
  kat = MainData->q_poezd->FieldByName("rkategor")->AsString;
  klNAves = kl*ves;
  while (!MainData->t_temp->Eof) {
   double sr = MainData->t_temp->FieldByName("DKMsr")->AsFloat;
   double n = MainData->q_vosn->FieldByName("DKMn")->AsFloat;
   double k = MainData->q_vosn->FieldByName("DKMk")->AsFloat;
   if ( ((n<=sr)&&(sr<=k)) || ((n>=sr)&&(sr>=k)) )
    {
     double vn = MainData->q_vosn->FieldByName("vn")->AsFloat;
      //Label1->Caption = FloatToStr(vn); Label1->Refresh();
     MainData->t_temp->Edit();
     vpr_ch = MainData->t_temp->FieldByName("vpr_ch")->AsFloat;
     vpr_ch = vn*vn*klNAves+vpr_ch;
     MainData->t_temp->FieldByName("vpr_ch")->Value = vpr_ch;
     vpr_zn = MainData->t_temp->FieldByName("vpr_zn")->AsFloat;
     vpr_zn = kl*ves+vpr_zn;
     MainData->t_temp->FieldByName("vpr_zn")->Value = vpr_zn;
     if (kat[1] != 'П') {
      vgr_ch = MainData->t_temp->FieldByName("vgr_ch")->AsFloat;
      vgr_ch = vn*vn*klNAves+vgr_ch;
       MainData->t_temp->FieldByName("vgr_ch")->Value = vgr_ch;
      vgr_zn = MainData->t_temp->FieldByName("vgr_zn")->AsFloat;
      vgr_zn = kl*ves+vgr_zn;
       MainData->t_temp->FieldByName("vgr_zn")->Value = vgr_zn;
     };
     MainData->t_temp->Post();
     MainData->t_temp->Next();
     a++;
    }
   else
    {
     if ((sr<n)&&(sr<k))
     {
      MainData->t_temp->Edit();
      int nn = 0;
      MainData->t_temp->FieldByName("vpr_ch")->Value += nn;
      MainData->t_temp->FieldByName("vpr_zn")->Value += nn;
      MainData->t_temp->Post();
      MainData->t_temp->Next();
     };
     if ((sr>n)&&(sr>k))
     {
      if (!MainData->q_vosn->Eof){MainData->q_vosn->Next();}else {break;};
     };
    a++;
    };
   CGauge1->Progress = a;
  };
  MainData->q_poezd->Next();
  MainData->q_vosn->First();
  MainData->t_temp->First();
 };
 //ShowMessage(IntToStr(MainData->q_vosn->RecordCount)+"_"+IntToStr(a));
 //ShowMessage("Step 02/05 is Complete");
 Label44->Caption = "Шаг 02/05 выполнен";
 Label44->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfZadanie::Button3Click(TObject *Sender)
{
 String s;
 s  = "SELECT id_uch, id_put, ";
 s += "km_nach, pk_nach, pl_nach, ";
 s += "km_konc, pk_konc, pl_konc, ";
 s += "(km_nach+pk_nach*0.1+pl_nach*0.001) AS DKMn, ";
 s += "(km_konc+pk_konc*0.1+pl_konc*0.001) AS DKMk, ";
 s += "(((km_nach+pk_nach*0.1+pl_nach*0.001)+(km_konc+pk_konc*0.1+pl_konc*0.001))*0.5) AS DKMsr, ";
 s += " 0 AS Vpr_ch, 0 AS Vpr_zn";
 s += " FROM plan WHERE id_uch = :id_uch AND id_put = :id_put";
 //MainData->q_plan->Close();
 MainData->q_plan->SQL->Clear();
 MainData->q_plan->SQL->Add(s);
 MainData->q_plan->Open();
 MainData->t_temp->First();
 int a=0;
 CGauge1->MaxValue = MainData->q_plan->RecordCount;
 while (!MainData->q_plan->Eof)
 {
  MainData->t_temp->Insert();
  MainData->t_temp->FieldByName("id_uch")->Value=MainData->q_plan->FieldByName("id_uch")->Value;
  MainData->t_temp->FieldByName("id_put")->Value=MainData->q_plan->FieldByName("id_put")->Value;
  MainData->t_temp->FieldByName("km_nach")->Value=MainData->q_plan->FieldByName("km_nach")->Value;
  MainData->t_temp->FieldByName("pk_nach")->Value=MainData->q_plan->FieldByName("pk_nach")->Value;
  MainData->t_temp->FieldByName("pl_nach")->Value=MainData->q_plan->FieldByName("pl_nach")->Value;
  MainData->t_temp->FieldByName("km_konc")->Value=MainData->q_plan->FieldByName("km_konc")->Value;
  MainData->t_temp->FieldByName("pk_konc")->Value=MainData->q_plan->FieldByName("pk_konc")->Value;
  MainData->t_temp->FieldByName("pl_konc")->Value=MainData->q_plan->FieldByName("pl_konc")->Value;
  MainData->t_temp->FieldByName("DKMn")->Value=MainData->q_plan->FieldByName("DKMn")->Value;
  MainData->t_temp->FieldByName("DKMk")->Value=MainData->q_plan->FieldByName("DKMk")->Value;
  MainData->t_temp->FieldByName("DKMsr")->Value=MainData->q_plan->FieldByName("DKMsr")->Value;
  MainData->t_temp->FieldByName("Vpr_ch")->AsFloat=0;
  MainData->t_temp->FieldByName("Vpr_zn")->AsFloat=0;
  MainData->t_temp->FieldByName("Vgr_ch")->AsFloat=0;
  MainData->t_temp->FieldByName("Vgr_zn")->AsFloat=0;
  MainData->t_temp->Post();
  MainData->q_plan->Next();
  CGauge1->Progress = ++a;
 };
  //MainData->q_plan->Close();
  Label44->Caption = "Шаг 01/05 выполнен";
  Label44->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfZadanie::Button4Click(TObject *Sender)
{
 CGauge1->MaxValue = MainData->t_temp->RecordCount;
 MainData->t_temp->First();
 double vpr_ch;
 double vpr_zn;
 double vgr_ch;
 double vgr_zn;
 double vpr;
 double vgr;
 int a=0;
 while (!MainData->t_temp->Eof) {
  MainData->t_temp->Edit();
  vpr_ch = MainData->t_temp->FieldByName("vpr_ch")->Value;
  vpr_zn = MainData->t_temp->FieldByName("vpr_zn")->Value;
  if (vpr_zn == 0){vpr = vpr_ch;}else{vpr = vpr_ch/vpr_zn;};
  vpr = 0.85*sqrt(vpr);
  MainData->t_temp->FieldByName("vpr")->Value = vpr;
  vgr_ch = MainData->t_temp->FieldByName("vgr_ch")->Value;
  vgr_zn = MainData->t_temp->FieldByName("vgr_zn")->Value;
  if (vgr_zn == 0){vgr = vgr_ch;}else{vgr = vgr_ch/vgr_zn;};
  vgr = 0.85*sqrt(vgr);
  MainData->t_temp->FieldByName("vgr")->Value = vgr;
  MainData->t_temp->Post();
  MainData->t_temp->Next();
  CGauge1->Progress = ++a;
 }
 Label44->Caption = "Шаг 03/05 выполнен";
 Label44->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TfZadanie::Button1Click(TObject *Sender)
{
 String s;
 s = "";
 s+="SELECT 0 AS id_ved, z.id_zadan, p.id_uch, p.id_put, ";
 s+="p.km_nach, p.pk_nach, p.pl_nach, ";
 s+="p.km_konc, p.pk_konc, p.pl_konc, ";
 s+="p.dlin_kriv, p.r, p.povorot, p.h AS h_tek, ";
 s+="v.v_dop_pass AS v_max_pass, v.v_dop_gr AS v_max_gr, ";
 s+="t.Vpr, t.Vgr ";
 s+="FROM plan p, zadrasch z, vdop v, temp1 t ";
 s+="WHERE p.id_uch=z.id_uch AND p.id_put=z.id_put AND z.id_zadan= z.id_zadan ";
 s+="AND v.id_uch=p.id_uch AND v.id_put=p.id_put ";
 s+="AND( ";
 s+="    ( ";
 s+="     (v.km_nach+v.pk_nach*0.1+v.pl_nach*0.001) <= (p.km_nach+p.pk_nach*0.1+p.pl_nach*0.001) ";
 s+="      AND ";
 s+="     (v.km_konc+v.pk_konc*0.1+v.pl_konc*0.001) >= (p.km_konc+p.pk_konc*0.1+p.pl_konc*0.001) ";
 s+="    ) ";
 s+="    OR ";
 s+="    ( ";
 s+="     (v.km_nach+v.pk_nach*0.1+v.pl_nach*0.001) >= (p.km_nach+p.pk_nach*0.1+p.pl_nach*0.001) ";
 s+="      AND ";
 s+="     (v.km_konc+v.pk_konc*0.1+v.pl_konc*0.001) <= (p.km_konc+p.pk_konc*0.1+p.pl_konc*0.001) ";
 s+="    ) ";
 s+="   ) ";
 s+="AND p.id_uch=t.id_uch AND p.id_put=t.id_put ";
 s+="AND p.km_nach=t.km_nach AND p.pk_nach=t.pk_nach AND p.pl_nach=t.pl_nach ";

 //MainData->q_vedomost->Close();
 MainData->q_vedomost->SQL->Clear();
 MainData->q_vedomost->SQL->Add(s);
 MainData->q_vedomost->Open();
 Label44->Caption = "Шаг 04/05 выполнен";
 Label44->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfZadanie::Button5Click(TObject *Sender)
{
 MainData->q_vedomost->First();
 MainData->t_vedomost->First();
 int AutoInc=1;
 double Hpass;
 double Hgr;
 double Hpot;
 double R;
 double Vmax_pass;
 double Vmax_gr;
 double V_priv;
 double V_p_gr;
 double Htemp;
 int a=0;
 CGauge1->MaxValue = MainData->q_vedomost->RecordCount;
 while (!MainData->q_vedomost->Eof){
  CGauge1->Progress = ++a;
  MainData->t_vedomost->Insert();
  MainData->t_vedomost->FieldByName("id_ved")->Value=AutoInc++;
  MainData->t_vedomost->FieldByName("id_uch")->Value=MainData->q_vedomost->FieldByName("id_uch")->Value;
  MainData->t_vedomost->FieldByName("id_put")->Value=MainData->q_vedomost->FieldByName("id_put")->Value;
  MainData->t_vedomost->FieldByName("id_zadan")->Value=MainData->q_vedomost->FieldByName("id_zadan")->Value;
  MainData->t_vedomost->FieldByName("km_nach")->Value=MainData->q_vedomost->FieldByName("km_nach")->Value;
  MainData->t_vedomost->FieldByName("pk_nach")->Value=MainData->q_vedomost->FieldByName("pk_nach")->Value;
  MainData->t_vedomost->FieldByName("pl_nach")->Value=MainData->q_vedomost->FieldByName("pl_nach")->Value;
  MainData->t_vedomost->FieldByName("km_konc")->Value=MainData->q_vedomost->FieldByName("km_konc")->Value;
  MainData->t_vedomost->FieldByName("pk_konc")->Value=MainData->q_vedomost->FieldByName("pk_konc")->Value;
  MainData->t_vedomost->FieldByName("pl_konc")->Value=MainData->q_vedomost->FieldByName("pl_konc")->Value;
  MainData->t_vedomost->FieldByName("dlin_kriv")->Value=MainData->q_vedomost->FieldByName("dlin_kriv")->Value;
   R = MainData->q_vedomost->FieldByName("r")->AsFloat;
  MainData->t_vedomost->FieldByName("r")->Value = R;
  MainData->t_vedomost->FieldByName("napravl")->Value=MainData->q_vedomost->FieldByName("povorot")->Value;
  MainData->t_vedomost->FieldByName("h_tek")->Value=MainData->q_vedomost->FieldByName("h_tek")->Value;
   Vmax_pass = MainData->q_vedomost->FieldByName("v_max_pass")->AsFloat;
  MainData->t_vedomost->FieldByName("v_max_pass")->Value = Vmax_pass;
   Vmax_gr = MainData->q_vedomost->FieldByName("v_max_gr")->AsFloat;
  MainData->t_vedomost->FieldByName("v_max_gr")->Value = Vmax_gr;
   V_priv = MainData->q_vedomost->FieldByName("Vpr")->AsFloat;
  MainData->t_vedomost->FieldByName("v_priv")->Value = V_priv;
   V_p_gr = MainData->q_vedomost->FieldByName("Vgr")->AsFloat;
  MainData->t_vedomost->FieldByName("v_p_gr")->Value = V_p_gr;

  Hpass = f_minus(12.5*Vmax_pass*Vmax_pass/R-115);
  MainData->t_vedomost->FieldByName("h_pass")->Value = Hpass;
  Hgr = f_minus(12.5*Vmax_gr*Vmax_gr/R-50);
  MainData->t_vedomost->FieldByName("h_gr")->Value = Hgr;
  Hpot = f_minus(12.5*V_priv*V_priv/R-0);
  MainData->t_vedomost->FieldByName("h_pot")->Value = Hpot;

  if (Hpass>Hgr){
   if (Hpass>Hpot){
    if ((f_sqr(Vmax_pass*Vmax_pass-5.2*R)>=V_p_gr)&&(V_p_gr>f_sqr(Vmax_pass*Vmax_pass-13*R))){
     MainData->t_vedomost->FieldByName("h_pass_kor")->Value=Hpass;
     MainData->t_vedomost->FieldByName("h_itog")->Value=fh_itog(f_fivediv(Hpass));
    }
    else{
     Vmax_pass = f_fivediv(f_sqr(V_p_gr*V_p_gr+13*R));
     MainData->t_vedomost->FieldByName("v_max_p_k")->Value=Vmax_pass;
     Hpass = 12.5*Vmax_pass*Vmax_pass/R-115;
     MainData->t_vedomost->FieldByName("h_pass_kor")->Value = Hpass;
     MainData->t_vedomost->FieldByName("h_itog")->Value = fh_itog(f_fivediv(Hpass));
    };
   };
  }
  else {
   if (Hgr>Hpot){
    if (V_p_gr>f_sqr(Vmax_gr*Vmax_gr-8*R)){
     MainData->t_vedomost->FieldByName("h_gr_kor")->Value=Hgr;
     MainData->t_vedomost->FieldByName("h_itog")->Value = fh_itog(f_fivediv(Hgr));
    }
    else{
     Vmax_gr = f_fivediv(f_sqr(V_p_gr));
     MainData->t_vedomost->FieldByName("v_max_gr_k")->Value = Vmax_gr;
     Hgr = 12.5*Vmax_gr*Vmax_gr/R-50;
     MainData->t_vedomost->FieldByName("h_gr_kor")->Value = Hgr;
     MainData->t_vedomost->FieldByName("h_itog")->Value = fh_itog(f_fivediv(Hgr));
    };
   };
  };
  if ((Hpass<Hpot)&&(Hgr<Hpot)) {
   MainData->t_vedomost->FieldByName("h_itog")->Value = fh_itog(f_fivediv(Hpot));
  };
  MainData->t_vedomost->Post();
  MainData->q_vedomost->Next();
 }
 ShowMessage("Расчет выполнен");
 Label44->Caption = "Шаг 05/05 выполнен";
 Label44->Refresh();
}
//---------------------------------------------------------------------------

 //
void __fastcall TfZadanie::Button6Click(TObject *Sender)
{
 newZad->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TfZadanie::Button7Click(TObject *Sender)
{
 Button3Click(Sender);
 Button2Click(Sender);
 Button4Click(Sender);
 Button1Click(Sender);
 Button5Click(Sender);        
}
//---------------------------------------------------------------------------
//ShowMessage(FloatToStr(f_fivediv(StrToFloat(ed->Text))));


