object Main: TMain
  Left = 240
  Top = 119
  Width = 630
  Height = 473
  Caption = 'Elevation'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = mainMenu
  OldCreateOrder = False
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = #1087#1088#1080#1084#1077#1088
    TabOrder = 0
    Visible = False
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 536
    Top = 368
    Width = 81
    Height = 25
    Caption = 'Create Temp1'
    TabOrder = 1
    Visible = False
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 536
    Top = 400
    Width = 81
    Height = 25
    Caption = 'Create Temp2'
    TabOrder = 2
    Visible = False
  end
  object mainMenu: TMainMenu
    Left = 8
    Top = 392
    object N1: TMenuItem
      Caption = #1053#1057#1048
      OnClick = N1Click
    end
    object N2: TMenuItem
      Caption = #1044#1086#1088#1086#1075#1072
      OnClick = N2Click
    end
    object N3: TMenuItem
      Caption = #1056#1072#1089#1095#1077#1090
      OnClick = N3Click
    end
    object N4: TMenuItem
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072
      OnClick = N4Click
    end
    object N5: TMenuItem
      Caption = #1042#1099#1093#1086#1076
      OnClick = N5Click
    end
  end
  object MainConnect: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Mode=ReadWrite;Ex' +
      'tended Properties="Driver={Microsoft Visual FoxPro Driver};UID=;' +
      'SourceDB=C:\database\evaldb(c).dbc;SourceType=DBC;Exclusive=No;B' +
      'ackgroundFetch=Yes;Collate=Machine;Null=Yes;Deleted=Yes;"'
    LoginPrompt = False
    Mode = cmReadWrite
    Left = 48
    Top = 392
  end
  object PTRConnection: TADOConnection
    CommandTimeout = 10
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Mode=ReadWrite;Ex' +
      'tended Properties="Driver={Microsoft Visual FoxPro Driver};UID=;' +
      'SourceDB=C:\DVGD\ZABZD\doroga.dbc;SourceType=DBC;Exclusive=No;Ba' +
      'ckgroundFetch=Yes;Collate=Machine;Null=Yes;Deleted=Yes;"'
    DefaultDatabase = 'C:\DVGD\ZABZD\doroga.dbc'
    LoginPrompt = False
    Mode = cmReadWrite
    Left = 88
    Top = 392
  end
  object PTRuConnection: TADOConnection
    CommandTimeout = 10
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Mode=ReadWrite;Ex' +
      'tended Properties="Driver={Microsoft Visual FoxPro Driver};UID=;' +
      'SourceDB=C:\DVGD\ZABZD\1\uchastok.dbc;SourceType=DBC;Exclusive=N' +
      'o;BackgroundFetch=Yes;Collate=Machine;Null=Yes;Deleted=Yes;"'
    LoginPrompt = False
    Mode = cmReadWrite
    Left = 128
    Top = 392
  end
end
