//---------------------------------------------------------------------------

#ifndef fRaschetH
#define fRaschetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrUchastki : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        void __fastcall DBGrid1DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrUchastki(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrUchastki *frUchastki;
//---------------------------------------------------------------------------
#endif
