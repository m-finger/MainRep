//---------------------------------------------------------------------------

#ifndef rPutiH
#define rPutiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrPuti : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        void __fastcall DBGrid1DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrPuti(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrPuti *frPuti;
//---------------------------------------------------------------------------
#endif
