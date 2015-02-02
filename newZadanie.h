//---------------------------------------------------------------------------

#ifndef newZadanieH
#define newZadanieH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
//---------------------------------------------------------------------------
class TnewZad : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TLabel *Label1;
        TEdit *Edit4;
        TLabel *Label2;
        TEdit *Edit5;
        TLabel *Label3;
        TDBLookupComboBox *lookUP;
        TButton *Button1;
        TButton *Button2;
        TEdit *Edit6;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall lookUPCloseUp(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TnewZad(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TnewZad *newZad;
//---------------------------------------------------------------------------
#endif
