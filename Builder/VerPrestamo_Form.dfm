object VerPrestamoActivoForm: TVerPrestamoActivoForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'VerPrestamoActivoForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object lblVerPrestamos: TLabel
    Left = 591
    Top = 0
    Width = 157
    Height = 16
    Caption = 'Ver Prestamos Activos'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 160
    Width = 740
    Height = 309
    ColCount = 4
    TabOrder = 0
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 16
    Width = 209
    Height = 23
    TabOrder = 1
  end
  object ComboBox2: TComboBox
    Left = 8
    Top = 45
    Width = 209
    Height = 23
    TabOrder = 2
  end
  object ComboBox3: TComboBox
    Left = 8
    Top = 74
    Width = 209
    Height = 23
    TabOrder = 3
  end
  object CheckBox1: TCheckBox
    Left = 8
    Top = 103
    Width = 137
    Height = 17
    Caption = 'Mostrar todos'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
  object Button1: TButton
    Left = 304
    Top = 40
    Width = 113
    Height = 33
    Caption = 'Buscar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
end
