//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uElevation.h"
#include "nsi.h"
#include "dataUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TNSInfo *NSInfo;
//---------------------------------------------------------------------------
__fastcall TNSInfo::TNSInfo(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TNSInfo::Button3Click(TObject *Sender)
{
 NSInfo->Close();        
}
//---------------------------------------------------------------------------

