object AltaLibroForm: TAltaLibroForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'AltaLibroForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object lblAltaLibro: TLabel
    Left = 682
    Top = 0
    Width = 66
    Height = 16
    Caption = 'Alta Libro'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblIngreseInfoLibroAlta: TLabel
    Left = 240
    Top = 32
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
  object lblNombreAlta: TLabel
    Left = 128
    Top = 96
    Width = 55
    Height = 16
    Caption = 'Nombre'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblAreaAlta: TLabel
    Left = 128
    Top = 160
    Width = 33
    Height = 16
    Caption = 'Area'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblSubAreaAlta: TLabel
    Left = 128
    Top = 224
    Width = 60
    Height = 16
    Caption = 'SubArea'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblEditorialAlta: TLabel
    Left = 472
    Top = 96
    Width = 58
    Height = 16
    Caption = 'Editorial'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblAutoresAlta: TLabel
    Left = 472
    Top = 160
    Width = 53
    Height = 16
    Caption = 'Autores'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblUbicacionAlta: TLabel
    Left = 472
    Top = 224
    Width = 70
    Height = 16
    Caption = 'Ubicaci'#243'n'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblAnioPublicacionAlta: TLabel
    Left = 472
    Top = 288
    Width = 133
    Height = 16
    Caption = 'A'#241'o de publicaci'#243'n'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblEstadoAlta: TLabel
    Left = 128
    Top = 288
    Width = 49
    Height = 16
    Caption = 'Estado'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object txtNombreAlta: TEdit
    Left = 128
    Top = 118
    Width = 161
    Height = 23
    TabOrder = 0
  end
  object txtAreaAlta: TEdit
    Left = 128
    Top = 182
    Width = 161
    Height = 23
    TabOrder = 1
  end
  object txtSubAreaAlta: TEdit
    Left = 128
    Top = 246
    Width = 161
    Height = 23
    TabOrder = 2
  end
  object txtEditorialAlta: TEdit
    Left = 472
    Top = 118
    Width = 161
    Height = 23
    TabOrder = 3
  end
  object txtAutoresAlta: TEdit
    Left = 472
    Top = 182
    Width = 161
    Height = 23
    TabOrder = 4
  end
  object txtUbicacionAlta: TEdit
    Left = 472
    Top = 246
    Width = 161
    Height = 23
    TabOrder = 5
  end
  object txtAnioPublicacionAlta: TEdit
    Left = 472
    Top = 310
    Width = 161
    Height = 23
    TabOrder = 6
  end
  object lstEstadoAlta: TListBox
    Left = 128
    Top = 310
    Width = 161
    Height = 35
    ItemHeight = 15
    Items.Strings = (
      'Bien '
      'Regular'
      'Malo'
      'Destruido')
    TabOrder = 7
  end
  object btnDarAlta: TButton
    Left = 312
    Top = 376
    Width = 129
    Height = 33
    Caption = 'Dar alta'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
  end
end
