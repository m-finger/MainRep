//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "usplash.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
Tsplash *splash;
//---------------------------------------------------------------------------
__fastcall Tsplash::Tsplash(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tsplash::FormShow(TObject *Sender)
{
 String s;
 s  = "CREATE TABLE 'c:\\DataBase\\TEMP1.dbf' (id_uch N(3), id_put N(3), n_p_uch N(3), ";
 s += "km_nach N(6), pk_nach N(2), pl_nach N(4), ";
 s += "km_konc N(6), pk_konc N(2), pl_konc N(4), ";
 s += "h N(3), DKMn N(10,4), DKMk N(10,4), DKMsr N(10,5), ";
 s += "Vpr_ch F(15,5), Vpr_zn F(15,5), Vgr_ch F(15,5), Vgr_zn F(15,5), ";
 s += "Vpr F(15,5), Vgr F(15,5))";
 ADOConnection1->Execute(s, cmdText, TExecuteOptions());
}
//---------------------------------------------------------------------------

