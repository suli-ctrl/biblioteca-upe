object BajaLibroForm: TBajaLibroForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'BajaLibroForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object lblIngreseInfoLibroBaja: TLabel
    Left = 232
    Top = 40
    Width = 299
    Height = 25
    Caption = 'Ingrese informaci'#243'n del libro'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblBajaLibro: TLabel
    Left = 681
    Top = 0
    Width = 67
    Height = 16
    Caption = 'Baja libro'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblNombreBaja: TLabel
    Left = 344
    Top = 104
    Width = 60
    Height = 18
    Caption = 'Nombre'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object btnDarBaja: TButton
    Left = 328
    Top = 160
    Width = 97
    Height = 25
    Caption = 'Dar de baja'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = btnDarBajaClick
  end
  object ComboBoxBaja: TComboBox
    Left = 280
    Top = 128
    Width = 185
    Height = 23
    TabOrder = 1
    Text = 'Ingresar nombre'
  end
end
