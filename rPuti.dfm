object frPuti: TfrPuti
  Left = 269
  Top = 172
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1055#1091#1090#1080
  ClientHeight = 162
  ClientWidth = 213
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
    Width = 213
    Height = 162
    Align = alClient
    DataSource = MainData.s_puti
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
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
        Width = 180
        Visible = True
      end>
  end
end
