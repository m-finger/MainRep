//---------------------------------------------------------------------------

#ifndef TuneH
#define TuneH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TfTune : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TButton *selectPTR;
        TOpenDialog *OpenDialog1;
        TLabel *Label1;
        TButton *Button2;
        TButton *Button3;
        TEdit *Edit2;
        TButton *selectEval;
        TLabel *Label2;
        TOpenDialog *OpenDialog2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall selectEvalClick(TObject *Sender);
        void __fastcall selectPTRClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfTune(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfTune *fTune;
//---------------------------------------------------------------------------
#endif
