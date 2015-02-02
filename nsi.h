//---------------------------------------------------------------------------

#ifndef nsiH
#define nsiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <dbcgrids.hpp>
#include <Mask.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TNSInfo : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TDBGrid *DBGridNSI;
        TBevel *Bevel1;
        TLabel *Label5;
        TBevel *Bevel2;
        TBevel *Bevel3;
        TLabel *Label1;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TBevel *Bevel4;
        TBevel *Bevel5;
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TNSInfo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNSInfo *NSInfo;
//---------------------------------------------------------------------------
#endif
