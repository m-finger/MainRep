//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>

#include "Tune.h"
#include "uElevation.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfTune *fTune;
//---------------------------------------------------------------------------
__fastcall TfTune::TfTune(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfTune::Button2Click(TObject *Sender)
{
 TIniFile *ini;
 ini = new TIniFile(ChangeFileExt(Application->ExeName,".ini"));
 ini->WriteString("DestinationPath", "PTR", Edit1->Text);
 ini->WriteString("DestinationPath", "Eval", Edit2->Text);
 fTune->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfTune::Button3Click(TObject *Sender)
{
 fTune->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfTune::selectEvalClick(TObject *Sender)
{
 OpenDialog2->Execute();
 Edit2->Text = OpenDialog2->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TfTune::selectPTRClick(TObject *Sender)
{
 OpenDialog1->Execute();
 Edit1->Text = OpenDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TfTune::FormActivate(TObject *Sender)
{
 TIniFile *ini;
 ini = new TIniFile(ChangeFileExt(Application->ExeName,".ini"));
 Edit1->Text = ini->ReadString("DestinationPath", "PTR", "c:\\");
 Edit2->Text = ini->ReadString("DestinationPath", "Eval", "c:\\");
}
//---------------------------------------------------------------------------


