object fPuti: TfPuti
  Left = 255
  Top = 194
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1055#1091#1090#1080
  ClientHeight = 176
  ClientWidth = 233
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
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 233
    Height = 176
    Align = alClient
    DataSource = MainData.s_puti
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
        FieldName = 'id_put'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'n_put'
        Title.Caption = #1055#1091#1090#1100
        Width = 200
        Visible = True
      end>
  end
end
