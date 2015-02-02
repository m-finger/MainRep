object fUchastki: TfUchastki
  Left = 283
  Top = 144
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1059#1095#1072#1089#1090#1082#1080
  ClientHeight = 304
  ClientWidth = 212
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 212
    Height = 304
    Align = alClient
    Ctl3D = True
    DataSource = MainData.s_uchastki
    ParentCtl3D = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnDblClick = DBGrid1DblClick
    Columns = <
      item
        Expanded = False
        FieldName = 'id_uch'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'n_uch'
        Title.Caption = #1059#1095#1072#1089#1090#1086#1082
        Width = 178
        Visible = True
      end>
  end
end
