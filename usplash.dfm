object splash: Tsplash
  Left = 327
  Top = 160
  BorderStyle = bsNone
  Caption = 'splash'
  ClientHeight = 167
  ClientWidth = 313
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
    Top = 120
    Width = 71
    Height = 16
    Caption = #1047#1072#1075#1088#1091#1079#1082#1072'...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object splGaug: TCGauge
    Left = 8
    Top = 144
    Width = 297
    Height = 20
    ForeColor = clNavy
    BackColor = clCream
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Extended Properti' +
      'es="Driver={Microsoft Visual FoxPro Driver};UID=;SourceDB=C:\Dat' +
      'aBase\;SourceType=DBF;Exclusive=No;BackgroundFetch=Yes;Collate=M' +
      'achine;Null=Yes;Deleted=Yes;"'
    LoginPrompt = False
    Left = 8
    Top = 8
  end
end
