//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "uElevation.h"
#include "nsi.h"
#include "Uchastki.h"
#include "dataUnit.h"
#include "Doroga.h"
#include "Puti.h"
#include "Tune.h"
#include "fRaschet.h"
#include "rPuti.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMain *Main;
//---------------------------------------------------------------------------
__fastcall TMain::TMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMain::N1Click(TObject *Sender)
{
 NSInfo->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::N5Click(TObject *Sender)
{
 Main->Close();
}
//---------------------------------------------------------------------------
void __fastcall TMain::N2Click(TObject *Sender)
{
 fUchastki->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::N4Click(TObject *Sender)
{
 fTune->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::N3Click(TObject *Sender)
{
 frUchastki->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMain::Button1Click(TObject *Sender)
{
/* String s  = "Provider=MSDASQL.1;";
        s += "Persist Security Info=False;";
        s += "Mode=ReadWrite;";
        s += "Extended Properties=""Driver={Microsoft Visual FoxPro Driver};";
        s += "UID=;";
        s += "SourceDB=C:\\DVGD\\ZABZD\\doroga.dbc;";
        s += "SourceType=DBC;Exclusive=No;";
        s += "BackgroundFetch=Yes;Collate=Machine;Null=Yes;Deleted=Yes;"" ";
 PTRConnection->ConnectionString = s;
 PTRConnection->DefaultDatabase = "C:\\DVGD\\ZABZD\\doroga.dbc";
 PTRConnection->Connected = True;

 ADOTable1->Connection = PTRConnection;
 ADOTable1->TableName = "problems";
 ADOTable1->Active = True;

 DataSource1->DataSet = ADOTable1;

 DBGrid1->DataSource = DataSource1;
 Button1->Enabled = False;
/*
 Provider=MSDASQL.1;Persist Security Info=False;
 Mode=ReadWrite;Extended Properties="Driver={Microsoft Visual FoxPro Driver};
 UID=;SourceDB=C:\database\evaldb(c).dbc;SourceType=DBC;
 Exclusive=No;BackgroundFetch=Yes;Collate=Machine;Null=Yes;Deleted=Yes;"
*/
}
//---------------------------------------------------------------------------
void __fastcall TMain::Button2Click(TObject *Sender)
{
 String s;
 s  = "CREATE TABLE 'c:\\TEMP1.dbf' (id_uch N(3), id_put N(3), n_p_uch N(3), ";
 s += "km_nach N(6), pk_nach N(2), pl_nach N(4), ";
 s += "km_konc N(6), pk_konc N(2), pl_konc N(4), ";
 s += "h N(3), DKMn N(10,4), DKMk N(10,4), DKMsr N(10,5), ";
 s += "Vpr_ch F(15,5), Vpr_zn F(15,5), Vgr_ch F(15,5), Vgr_zn F(15,5), ";
 s += "Vpr F(15,5), Vgr F(15,5))";

 //MainData->q_temp->Close();
 MainData->q_temp->SQL->Clear();
 MainData->q_temp->SQL->Add(s);
 MainData->q_temp->ExecSQL();
}
//---------------------------------------------------------------------------


