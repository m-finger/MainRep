object newZad: TnewZad
  Left = 286
  Top = 190
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1079#1072#1076#1072#1085#1080#1077' '#1085#1072' '#1088#1072#1089#1095#1077#1090
  ClientHeight = 153
  ClientWidth = 471
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 66
    Height = 16
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 240
    Top = 8
    Width = 27
    Height = 16
    Caption = #1050' '#1087#1085
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 322
    Top = 8
    Width = 88
    Height = 16
    Caption = #1055#1086#1077#1079#1076#1086#1087#1086#1090#1086#1082
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 8
    Top = 56
    Width = 73
    Height = 21
    Enabled = False
    TabOrder = 0
    Visible = False
  end
  object Edit2: TEdit
    Left = 8
    Top = 80
    Width = 73
    Height = 21
    Enabled = False
    TabOrder = 1
    Visible = False
  end
  object Edit3: TEdit
    Left = 8
    Top = 104
    Width = 73
    Height = 21
    Enabled = False
    TabOrder = 2
    Visible = False
  end
  object Edit4: TEdit
    Left = 8
    Top = 25
    Width = 225
    Height = 21
    TabOrder = 3
    Text = #1050#1072#1087#1080#1090#1072#1083#1100#1085#1099#1081' '#1088#1077#1084#1086#1085#1090' '#1087#1091#1090#1080
  end
  object Edit5: TEdit
    Left = 239
    Top = 25
    Width = 73
    Height = 21
    TabOrder = 4
    Text = '0,85'
  end
  object lookUP: TDBLookupComboBox
    Left = 318
    Top = 25
    Width = 145
    Height = 21
    KeyField = 'id_prob'
    ListField = 'cod'
    ListFieldIndex = 5
    ListSource = MainData.s_problems
    TabOrder = 5
    OnCloseUp = lookUPCloseUp
  end
  object Button1: TButton
    Left = 304
    Top = 120
    Width = 75
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 384
    Top = 120
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 7
    OnClick = Button2Click
  end
  object Edit6: TEdit
    Left = 8
    Top = 128
    Width = 73
    Height = 21
    Enabled = False
    TabOrder = 8
    Visible = False
  end
end
