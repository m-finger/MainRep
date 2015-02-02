object NSInfo: TNSInfo
  Left = 204
  Top = 116
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1053#1086#1088#1084#1072#1090#1080#1074#1085#1086'-'#1089#1087#1088#1072#1074#1086#1095#1085#1072#1103' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1103
  ClientHeight = 239
  ClientWidth = 493
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel5: TBevel
    Left = 397
    Top = 28
    Width = 67
    Height = 57
    Shape = bsFrame
  end
  object Label4: TLabel
    Left = 403
    Top = 33
    Width = 39
    Height = 16
    Caption = #1050#1086#1083#1077#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Transparent = True
    WordWrap = True
  end
  object Bevel1: TBevel
    Left = 8
    Top = 28
    Width = 140
    Height = 57
    Shape = bsFrame
  end
  object Label5: TLabel
    Left = 29
    Top = 36
    Width = 99
    Height = 16
    Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Transparent = True
  end
  object Bevel2: TBevel
    Left = 146
    Top = 28
    Width = 80
    Height = 57
    Shape = bsFrame
  end
  object Bevel3: TBevel
    Left = 224
    Top = 28
    Width = 75
    Height = 57
    Shape = bsFrame
  end
  object Label1: TLabel
    Left = 148
    Top = 36
    Width = 64
    Height = 16
    Caption = '+[a     ], '#1084'/'#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Transparent = True
  end
  object Label2: TLabel
    Left = 169
    Top = 43
    Width = 12
    Height = 13
    Caption = #1085#1087
    Transparent = True
  end
  object Label7: TLabel
    Left = 214
    Top = 31
    Width = 6
    Height = 13
    Caption = '2'
    Transparent = True
  end
  object Label8: TLabel
    Left = 246
    Top = 43
    Width = 12
    Height = 13
    Caption = #1085#1087
    Transparent = True
  end
  object Label9: TLabel
    Left = 230
    Top = 36
    Width = 61
    Height = 16
    Caption = '-[a     ], '#1084'/'#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Transparent = True
  end
  object Label10: TLabel
    Left = 289
    Top = 30
    Width = 6
    Height = 13
    Caption = '2'
    Transparent = True
  end
  object Bevel4: TBevel
    Left = 297
    Top = 28
    Width = 102
    Height = 57
    Shape = bsFrame
  end
  object Label3: TLabel
    Left = 302
    Top = 30
    Width = 87
    Height = 48
    Caption = #1056#1072#1089#1089#1090#1086#1103#1085#1080#1077' '#1084#1077#1078#1076#1091' '#1086#1089#1103#1084#1080' '#1088#1077#1083#1100#1089#1086#1074
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Transparent = True
    WordWrap = True
  end
  object DBGridNSI: TDBGrid
    Left = 8
    Top = 80
    Width = 473
    Height = 120
    Ctl3D = True
    DataSource = MainData.s_nsi
    Options = [dgEditing, dgIndicator, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    ParentCtl3D = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'id'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'naim'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'a_dop_n_pl'
        Width = 77
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'a_dop_n_mn'
        Width = 72
        Visible = True
      end
      item
        Expanded = False
        FieldName = 's_os_rels'
        Width = 99
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'koleya'
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 224
    Top = 211
    Width = 75
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 1
  end
  object Button2: TButton
    Left = 304
    Top = 211
    Width = 75
    Height = 25
    Caption = #1054#1090#1082#1072#1090
    TabOrder = 2
  end
  object Button3: TButton
    Left = 384
    Top = 211
    Width = 75
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 3
    OnClick = Button3Click
  end
end
