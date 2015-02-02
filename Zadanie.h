//---------------------------------------------------------------------------

#ifndef ZadanieH
#define ZadanieH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <dbcgrids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include "CGAUGES.h"
#include "pies.h"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfZadanie : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TDBGrid *DBGrid2;
        TDBGrid *DBGrid1;
        TDBGrid *DBGrid3;
        TButton *Button2;
        TTabSheet *TabSheet2;
        TDBGrid *DBGrid4;
        TCGauge *CGauge1;
        TLabel *Label1;
        TButton *Button4;
        TButton *Button6;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TLabel *Label3;
        TBevel *Bevel3;
        TLabel *Label4;
        TBevel *Bevel4;
        TLabel *Label5;
        TBevel *Bevel5;
        TLabel *Label6;
        TLabel *Label2;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TBevel *Bevel6;
        TBevel *Bevel7;
        TBevel *Bevel8;
        TBevel *Bevel9;
        TBevel *Bevel10;
        TBevel *Bevel11;
        TBevel *Bevel12;
        TBevel *Bevel13;
        TButton *Button3;
        TButton *Button7;
        TButton *Button1;
        TButton *Button5;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TBevel *Bevel18;
        TLabel *Label21;
        TBevel *Bevel19;
        TBevel *Bevel20;
        TBevel *Bevel21;
        TLabel *Label22;
        TLabel *Label23;
        TBevel *Bevel22;
        TLabel *Label24;
        TBevel *Bevel23;
        TLabel *Label25;
        TLabel *Label27;
        TBevel *Bevel14;
        TBevel *Bevel15;
        TBevel *Bevel16;
        TLabel *Label28;
        TBevel *Bevel17;
        TBevel *Bevel24;
        TLabel *Label18;
        TBevel *Bevel25;
        TLabel *Label19;
        TBevel *Bevel26;
        TBevel *Bevel27;
        TLabel *Label20;
        TLabel *Label26;
        TLabel *Label29;
        TBevel *Bevel28;
        TBevel *Bevel29;
        TBevel *Bevel30;
        TLabel *Label30;
        TLabel *Label31;
        TBevel *Bevel31;
        TLabel *Label32;
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TBevel *Bevel32;
        TBevel *Bevel33;
        TBevel *Bevel34;
        TBevel *Bevel35;
        TLabel *Label36;
        TBevel *Bevel36;
        TBevel *Bevel37;
        TBevel *Bevel38;
        TBevel *Bevel39;
        TBevel *Bevel40;
        TBevel *Bevel41;
        TLabel *Label37;
        TLabel *Label39;
        TLabel *Label38;
        TLabel *Label40;
        TLabel *Label41;
        TLabel *Label42;
        TBevel *Bevel42;
        TLabel *Label43;
        TLabel *Label44;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfZadanie(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfZadanie *fZadanie;
//---------------------------------------------------------------------------
#endif
