//---------------------------------------------------------------------------

#ifndef uElevationH
#define uElevationH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ADODB.hpp>
#include <DBGrids.hpp>
#include <DB.hpp>
#include <Grids.hpp>
#include <IniFiles.hpp> 
//---------------------------------------------------------------------------
class TMain : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *mainMenu;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TADOConnection *MainConnect;
        TADOConnection *PTRConnection;
        TButton *Button1;
        TADOConnection *PTRuConnection;
        TButton *Button2;
        TButton *Button3;
        void __fastcall N1Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMain *Main;
//---------------------------------------------------------------------------
#endif
