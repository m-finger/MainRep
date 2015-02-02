//---------------------------------------------------------------------------

#ifndef PutiH
#define PutiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfPuti : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall DBGrid1DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfPuti(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfPuti *fPuti;
//---------------------------------------------------------------------------
#endif
