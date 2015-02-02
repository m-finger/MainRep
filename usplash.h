//---------------------------------------------------------------------------

#ifndef usplashH
#define usplashH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CGAUGES.h"
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class Tsplash : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TCGauge *splGaug;
        TADOConnection *ADOConnection1;
        void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsplash(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsplash *splash;
//---------------------------------------------------------------------------
#endif
