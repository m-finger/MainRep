object MainData: TMainData
  OldCreateOrder = False
  Left = 245
  Top = 77
  Height = 599
  Width = 578
  object t_nsi: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    TableName = 'nsi'
    Left = 288
    Top = 16
  end
  object s_nsi: TDataSource
    DataSet = t_nsi
    Left = 352
    Top = 16
  end
  object s_uchastki: TDataSource
    DataSet = t_uchastki
    OnDataChange = s_uchastkiDataChange
    Left = 96
    Top = 16
  end
  object t_uchastki: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    TableName = 'uchastki'
    Left = 16
    Top = 16
  end
  object s_puti: TDataSource
    DataSet = t_puti
    OnDataChange = s_putiDataChange
    Left = 136
    Top = 64
  end
  object t_puti: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch'
    MasterFields = 'id_uch'
    MasterSource = s_uchastki
    TableName = 'puti'
    Left = 56
    Top = 64
    object t_putiid_put: TIntegerField
      FieldName = 'id_put'
    end
    object t_putiid_uch: TIntegerField
      FieldName = 'id_uch'
    end
    object t_putin_put: TStringField
      FieldName = 'n_put'
      FixedChar = True
      Size = 30
    end
  end
  object s_dkm_puch: TDataSource
    DataSet = t_dkm_puch
    Left = 171
    Top = 168
  end
  object t_dkm_puch: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch;id_put'
    MasterFields = 'id_uch;id_put'
    MasterSource = s_puti
    TableName = 'dkm_puch'
    Left = 96
    Top = 168
  end
  object s_npk: TDataSource
    DataSet = t_npk
    Left = 168
    Top = 112
  end
  object t_npk: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch;id_put'
    MasterFields = 'id_uch;id_put'
    MasterSource = s_puti
    TableName = 'npk'
    Left = 96
    Top = 112
  end
  object s_plan: TDataSource
    DataSet = t_plan
    Left = 56
    Top = 224
  end
  object t_plan: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch;id_put'
    MasterFields = 'id_uch;id_put'
    MasterSource = s_puti
    TableName = 'plan'
    Left = 8
    Top = 224
  end
  object s_rpunkt: TDataSource
    DataSet = t_rpunkt
    Left = 168
    Top = 280
  end
  object t_rpunkt: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch;id_put'
    MasterFields = 'id_uch;id_put'
    MasterSource = s_puti
    TableName = 'rpunkt'
    Left = 96
    Top = 280
  end
  object s_raschet: TDataSource
    DataSet = t_uchastki
    Left = 176
    Top = 16
  end
  object t_problems: TADOTable
    Active = True
    Connection = Main.PTRConnection
    CursorType = ctStatic
    IndexFieldNames = 'id_prob'
    MasterFields = 'id_ppotok'
    TableName = 'problems'
    Left = 288
    Top = 136
    object t_problemsid_prob: TIntegerField
      FieldName = 'id_prob'
    end
    object t_problemscod: TStringField
      FieldName = 'cod'
      FixedChar = True
      Size = 10
    end
    object t_problemsprimech: TStringField
      FieldName = 'primech'
      FixedChar = True
      Size = 80
    end
  end
  object s_problems: TDataSource
    DataSet = t_problems
    Left = 352
    Top = 136
  end
  object t_zadtr: TADOTable
    Left = 288
    Top = 200
  end
  object s_zadtr: TDataSource
    DataSet = t_zadtr
    Left = 352
    Top = 200
  end
  object q_zadrasch: TADOQuery
    CacheSize = 30
    Connection = Main.MainConnect
    CursorType = ctStatic
    DataSource = s_puti
    Parameters = <
      item
        Name = 'id_uch'
        DataType = ftInteger
        Value = 1
      end
      item
        Name = 'id_put'
        DataType = ftInteger
        Value = 1
      end>
    Left = 96
    Top = 383
  end
  object s_zadrasch: TDataSource
    DataSet = q_zadrasch
    OnDataChange = s_zadraschDataChange
    Left = 168
    Top = 384
  end
  object q_problem: TADOQuery
    Connection = Main.PTRConnection
    CursorType = ctStatic
    DataSource = s_zadrasch
    Parameters = <
      item
        Name = 'id_ppotok'
        DataType = ftInteger
        Value = 1
      end>
    SQL.Strings = (
      'SELECT * FROM problems WHERE id_prob = :id_ppotok')
    Left = 288
    Top = 264
  end
  object s_problem: TDataSource
    DataSet = q_problem
    Left = 352
    Top = 264
  end
  object q_poezd: TADOQuery
    CacheSize = 30
    Connection = Main.PTRuConnection
    CursorType = ctStatic
    DataSource = s_zadrasch
    Parameters = <
      item
        Name = 'id_put'
        DataType = ftInteger
        Value = 1
      end>
    Left = 136
    Top = 440
  end
  object s_poezd: TDataSource
    DataSet = q_poezd
    OnDataChange = s_poezdDataChange
    Left = 200
    Top = 440
  end
  object q_vosn: TADOQuery
    CacheSize = 100
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Extended Properti' +
      'es="Driver={Microsoft Visual FoxPro Driver};UID=;SourceDB=C:\DVG' +
      'D\ZABZD\1\RESTR1\;SourceType=DBF;Exclusive=No;BackgroundFetch=Ye' +
      's;Collate=Machine;Null=Yes;Deleted=Yes;"'
    CursorType = ctOpenForwardOnly
    DataSource = s_poezd
    ParamCheck = False
    Parameters = <
      item
        Name = 'id_poezd'
        DataType = ftInteger
        Size = 1
        Value = 1
      end>
    Left = 136
    Top = 496
  end
  object s_vosn: TDataSource
    DataSet = q_vosn
    Left = 200
    Top = 496
  end
  object t_zadrasch: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch;id_put'
    MasterFields = 'id_uch;id_put'
    MasterSource = s_puti
    TableName = 'zadrasch'
    Left = 25
    Top = 385
  end
  object st_zadrasch: TDataSource
    DataSet = t_zadrasch
    Left = 24
    Top = 440
  end
  object q_plan: TADOQuery
    Connection = Main.MainConnect
    DataSource = s_puti
    Parameters = <
      item
        Name = 'id_uch'
        DataType = ftInteger
        Value = 1
      end
      item
        Name = 'id_put'
        DataType = ftInteger
        Value = 1
      end>
    Left = 120
    Top = 224
  end
  object sq_plan: TDataSource
    DataSet = q_plan
    Left = 176
    Top = 224
  end
  object q_temp: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Extended Properti' +
      'es="Driver={Microsoft Visual FoxPro Driver};UID=;SourceDB=C:\Dat' +
      'aBase\;SourceType=DBF;Exclusive=No;BackgroundFetch=Yes;Collate=M' +
      'achine;Null=Yes;Deleted=Yes;"'
    Parameters = <
      item
        Name = 'id_uch'
        DataType = ftInteger
        Value = 1
      end
      item
        Name = 'id_put'
        DataType = ftInteger
        Value = 1
      end>
    Left = 320
    Top = 470
  end
  object q_deltemp: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Extended Properti' +
      'es="Driver={Microsoft Visual FoxPro Driver};UID=;SourceDB=C:\Dat' +
      'aBase\;SourceType=DBF;Exclusive=No;BackgroundFetch=Yes;Collate=M' +
      'achine;Null=Yes;Deleted=Yes;"'
    Parameters = <>
    Left = 320
    Top = 408
  end
  object t_temp: TADOTable
    Active = True
    CacheSize = 100
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Extended Properti' +
      'es="Driver={Microsoft Visual FoxPro Driver};UID=;SourceDB=C:\Dat' +
      'aBase\;SourceType=DBF;Exclusive=No;BackgroundFetch=Yes;Collate=M' +
      'achine;Null=Yes;Deleted=Yes;"'
    CursorType = ctStatic
    TableName = 'temp1'
    Left = 376
    Top = 408
  end
  object t_vedomost: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_zadan;id_uch;id_put'
    MasterFields = 'id_zadan;id_uch;id_put'
    MasterSource = st_zadrasch
    TableName = 'vedomost'
    Left = 288
    Top = 328
    object t_vedomostid_ved: TIntegerField
      FieldName = 'id_ved'
    end
    object t_vedomostid_zadan: TIntegerField
      FieldName = 'id_zadan'
    end
    object t_vedomostid_uch: TIntegerField
      FieldName = 'id_uch'
    end
    object t_vedomostid_put: TIntegerField
      FieldName = 'id_put'
    end
    object t_vedomostkm_nach: TIntegerField
      FieldName = 'km_nach'
    end
    object t_vedomostpk_nach: TIntegerField
      FieldName = 'pk_nach'
    end
    object t_vedomostpl_nach: TIntegerField
      FieldName = 'pl_nach'
    end
    object t_vedomostkm_konc: TIntegerField
      FieldName = 'km_konc'
    end
    object t_vedomostpk_konc: TIntegerField
      FieldName = 'pk_konc'
    end
    object t_vedomostpl_konc: TIntegerField
      FieldName = 'pl_konc'
    end
    object t_vedomostdlin_kriv: TIntegerField
      FieldName = 'dlin_kriv'
    end
    object t_vedomostr: TIntegerField
      FieldName = 'r'
    end
    object t_vedomostnapravl: TStringField
      FieldName = 'napravl'
      FixedChar = True
      Size = 1
    end
    object t_vedomosth_tek: TIntegerField
      FieldName = 'h_tek'
    end
    object t_vedomostv_max_pass: TBCDField
      FieldName = 'v_max_pass'
      Precision = 8
      Size = 3
    end
    object t_vedomostv_max_gr: TBCDField
      FieldName = 'v_max_gr'
      Precision = 8
      Size = 3
    end
    object t_vedomostv_priv: TBCDField
      FieldName = 'v_priv'
      Precision = 8
      Size = 3
    end
    object t_vedomostv_p_gr: TBCDField
      FieldName = 'v_p_gr'
      Precision = 8
      Size = 3
    end
    object t_vedomosth_pass: TIntegerField
      FieldName = 'h_pass'
    end
    object t_vedomosth_gr: TIntegerField
      FieldName = 'h_gr'
    end
    object t_vedomosth_pot: TIntegerField
      FieldName = 'h_pot'
    end
    object t_vedomostv_max_p_k: TBCDField
      FieldName = 'v_max_p_k'
      Precision = 8
      Size = 3
    end
    object t_vedomostv_max_gr_k: TBCDField
      FieldName = 'v_max_gr_k'
      Precision = 8
      Size = 3
    end
    object t_vedomosth_pass_kor: TIntegerField
      FieldName = 'h_pass_kor'
    end
    object t_vedomosth_gr_kor: TIntegerField
      FieldName = 'h_gr_kor'
    end
    object t_vedomosth_itog: TIntegerField
      FieldName = 'h_itog'
    end
  end
  object s_vedomost: TDataSource
    DataSet = t_vedomost
    Left = 416
    Top = 328
  end
  object q_vedomost: TADOQuery
    Connection = Main.MainConnect
    DataSource = s_zadrasch
    Parameters = <
      item
        Name = 'id_zadan'
        DataType = ftInteger
        Value = 1
      end>
    Left = 352
    Top = 328
  end
  object t_vdop: TADOTable
    Active = True
    Connection = Main.MainConnect
    CursorType = ctStatic
    IndexFieldNames = 'id_uch;id_put'
    MasterFields = 'id_uch;id_put'
    MasterSource = s_puti
    TableName = 'vdop'
    Left = 96
    Top = 334
    object t_vdopid_uch: TIntegerField
      FieldName = 'id_uch'
    end
    object t_vdopid_put: TIntegerField
      FieldName = 'id_put'
    end
    object t_vdopkm_nach: TIntegerField
      FieldName = 'km_nach'
    end
    object t_vdoppk_nach: TIntegerField
      FieldName = 'pk_nach'
    end
    object t_vdoppl_nach: TIntegerField
      FieldName = 'pl_nach'
    end
    object t_vdopkm_konc: TIntegerField
      FieldName = 'km_konc'
    end
    object t_vdoppk_konc: TIntegerField
      FieldName = 'pk_konc'
    end
    object t_vdoppl_konc: TIntegerField
      FieldName = 'pl_konc'
    end
    object t_vdopv_dop_pass: TBCDField
      FieldName = 'v_dop_pass'
      Precision = 7
      Size = 3
    end
    object t_vdopv_dop_gr: TBCDField
      FieldName = 'v_dop_gr'
      Precision = 7
      Size = 3
    end
  end
  object s_vdop: TDataSource
    DataSet = t_vdop
    Left = 168
    Top = 335
  end
end
