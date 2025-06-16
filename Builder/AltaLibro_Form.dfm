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
<<<<<<< Updated upstream
  object txtNombreAlta: TEdit
=======
  object EditNombreLibro: TEdit
>>>>>>> Stashed changes
    Left = 128
    Top = 118
    Width = 161
    Height = 23
    TabOrder = 0
  end
<<<<<<< Updated upstream
  object txtAreaAlta: TEdit
=======
  object EditAreaLibro: TEdit
>>>>>>> Stashed changes
    Left = 128
    Top = 182
    Width = 161
    Height = 23
    TabOrder = 1
  end
<<<<<<< Updated upstream
  object txtSubAreaAlta: TEdit
=======
  object EditSubAreaLibro: TEdit
>>>>>>> Stashed changes
    Left = 128
    Top = 246
    Width = 161
    Height = 23
    TabOrder = 2
  end
<<<<<<< Updated upstream
  object txtEditorialAlta: TEdit
=======
  object EditEditorialLibro: TEdit
>>>>>>> Stashed changes
    Left = 472
    Top = 118
    Width = 161
    Height = 23
    TabOrder = 3
  end
<<<<<<< Updated upstream
  object txtAutoresAlta: TEdit
=======
  object EditAutorLibro: TEdit
>>>>>>> Stashed changes
    Left = 472
    Top = 182
    Width = 161
    Height = 23
    TabOrder = 4
  end
<<<<<<< Updated upstream
  object txtUbicacionAlta: TEdit
=======
  object EditUbiLibro: TEdit
>>>>>>> Stashed changes
    Left = 472
    Top = 246
    Width = 161
    Height = 23
    TabOrder = 5
  end
<<<<<<< Updated upstream
  object txtAnioPublicacionAlta: TEdit
=======
  object EditAñoLibro: TEdit
>>>>>>> Stashed changes
    Left = 472
    Top = 310
    Width = 161
    Height = 23
    TabOrder = 6
  end
<<<<<<< Updated upstream
  object lstEstadoAlta: TListBox
=======
  object ListBoxEstado: TListBox
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
  object btnDarAlta: TButton
=======
  object BtnAltaLibro: TButton
>>>>>>> Stashed changes
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
    OnClick = BtnAltaLibroClick
  end
end
