//---------------------------------------------------------------------------

#ifndef UchastkiH
#define UchastkiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TfUchastki : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        void __fastcall DBGrid1DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfUchastki(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfUchastki *fUchastki;
//---------------------------------------------------------------------------
#endif
