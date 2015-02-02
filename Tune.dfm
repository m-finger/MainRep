object fTune: TfTune
  Left = 330
  Top = 200
  Width = 438
  Height = 186
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 5
    Width = 270
    Height = 13
    Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093' '#1090#1103#1075#1086#1074#1099#1093' '#1088#1072#1089#1095#1077#1090#1086#1074' '#1089#1080#1089#1090#1077#1084#1099' '#1048#1057#1050#1056#1040'-'#1055#1058#1056
  end
  object Label2: TLabel
    Left = 16
    Top = 53
    Width = 160
    Height = 13
    Caption = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093' '#1089#1080#1089#1090#1077#1084#1099' Elevation'
  end
  object Edit1: TEdit
    Left = 16
    Top = 23
    Width = 289
    Height = 21
    Enabled = False
    TabOrder = 0
  end
  object selectPTR: TButton
    Left = 320
    Top = 21
    Width = 75
    Height = 25
    Caption = #1054#1073#1079#1086#1088
    TabOrder = 1
    OnClick = selectPTRClick
  end
  object Button2: TButton
    Left = 128
    Top = 112
    Width = 75
    Height = 25
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 240
    Top = 112
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 3
    OnClick = Button3Click
  end
  object Edit2: TEdit
    Left = 16
    Top = 71
    Width = 289
    Height = 21
    Enabled = False
    TabOrder = 4
  end
  object selectEval: TButton
    Left = 320
    Top = 69
    Width = 75
    Height = 25
    Caption = #1054#1073#1079#1086#1088
    TabOrder = 5
    OnClick = selectEvalClick
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = 'dbc'
    Filter = 'doroga.dbc|doroga.dbc|*.dbc|*.dbc'
    Left = 400
    Top = 20
  end
  object OpenDialog2: TOpenDialog
    Filter = 'evaldb(c).dbc|evaldb(c).dbc|*.dbc|*.dbc'
    Left = 400
    Top = 67
  end
end
