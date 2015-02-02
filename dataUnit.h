//---------------------------------------------------------------------------

#ifndef dataUnitH
#define dataUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TMainData : public TDataModule
{
__published:	// IDE-managed Components
        TADOTable *t_nsi;
        TDataSource *s_nsi;
        TDataSource *s_uchastki;
        TADOTable *t_uchastki;
        TDataSource *s_puti;
        TADOTable *t_puti;
        TDataSource *s_dkm_puch;
        TADOTable *t_dkm_puch;
        TDataSource *s_npk;
        TADOTable *t_npk;
        TDataSource *s_plan;
        TADOTable *t_plan;
        TDataSource *s_rpunkt;
        TADOTable *t_rpunkt;
        TDataSource *s_raschet;
        TADOTable *t_problems;
        TDataSource *s_problems;
        TADOTable *t_zadtr;
        TDataSource *s_zadtr;
        TADOQuery *q_zadrasch;
        TDataSource *s_zadrasch;
        TADOQuery *q_problem;
        TDataSource *s_problem;
        TADOQuery *q_poezd;
        TDataSource *s_poezd;
        TADOQuery *q_vosn;
        TDataSource *s_vosn;
        TIntegerField *t_putiid_put;
        TIntegerField *t_putiid_uch;
        TStringField *t_putin_put;
        TADOTable *t_zadrasch;
        TDataSource *st_zadrasch;
        TADOQuery *q_plan;
        TDataSource *sq_plan;
        TADOQuery *q_temp;
        TADOQuery *q_deltemp;
        TADOTable *t_temp;
        TADOTable *t_vedomost;
        TDataSource *s_vedomost;
        TADOQuery *q_vedomost;
        TIntegerField *t_vedomostid_ved;
        TIntegerField *t_vedomostid_zadan;
        TIntegerField *t_vedomostid_uch;
        TIntegerField *t_vedomostid_put;
        TIntegerField *t_vedomostkm_nach;
        TIntegerField *t_vedomostpk_nach;
        TIntegerField *t_vedomostpl_nach;
        TIntegerField *t_vedomostkm_konc;
        TIntegerField *t_vedomostpk_konc;
        TIntegerField *t_vedomostpl_konc;
        TIntegerField *t_vedomostdlin_kriv;
        TIntegerField *t_vedomostr;
        TStringField *t_vedomostnapravl;
        TIntegerField *t_vedomosth_tek;
        TBCDField *t_vedomostv_max_pass;
        TBCDField *t_vedomostv_max_gr;
        TBCDField *t_vedomostv_priv;
        TBCDField *t_vedomostv_p_gr;
        TIntegerField *t_vedomosth_pass;
        TIntegerField *t_vedomosth_gr;
        TIntegerField *t_vedomosth_pot;
        TBCDField *t_vedomostv_max_p_k;
        TBCDField *t_vedomostv_max_gr_k;
        TIntegerField *t_vedomosth_pass_kor;
        TIntegerField *t_vedomosth_gr_kor;
        TIntegerField *t_vedomosth_itog;
        TIntegerField *t_problemsid_prob;
        TStringField *t_problemscod;
        TStringField *t_problemsprimech;
        TADOTable *t_vdop;
        TIntegerField *t_vdopid_uch;
        TIntegerField *t_vdopid_put;
        TIntegerField *t_vdopkm_nach;
        TIntegerField *t_vdoppk_nach;
        TIntegerField *t_vdoppl_nach;
        TIntegerField *t_vdopkm_konc;
        TIntegerField *t_vdoppk_konc;
        TIntegerField *t_vdoppl_konc;
        TBCDField *t_vdopv_dop_pass;
        TBCDField *t_vdopv_dop_gr;
        TDataSource *s_vdop;
        void __fastcall s_poezdDataChange(TObject *Sender,
          TField *Field);
        void __fastcall s_zadraschDataChange(TObject *Sender,
          TField *Field);
        void __fastcall s_putiDataChange(TObject *Sender, TField *Field);
        void __fastcall s_uchastkiDataChange(TObject *Sender,
          TField *Field);
private:	// User declarations
public:		// User declarations
        __fastcall TMainData(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainData *MainData;
//---------------------------------------------------------------------------
#endif
