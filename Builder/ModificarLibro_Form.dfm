object ModificarLibroForm: TModificarLibroForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'ModificarLibroForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object lblIngreseInfoLibroAModi: TLabel
    Left = 215
    Top = 8
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
  object lblModificarLibro: TLabel
    Left = 649
    Top = 0
    Width = 99
    Height = 16
    Caption = 'Modificar libro'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblEstadoAModi: TLabel
    Left = 112
    Top = 328
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
  object lblAnioPublicacionLibroAModi: TLabel
    Left = 456
    Top = 328
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
  object lblUbicacionAModi: TLabel
    Left = 456
    Top = 264
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
  object lblAutoresAModi: TLabel
    Left = 456
    Top = 200
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
  object lblEditorialAModi: TLabel
    Left = 456
    Top = 136
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
  object lblSubAreaAModi: TLabel
    Left = 112
    Top = 264
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
  object lblAreaAModi: TLabel
    Left = 112
    Top = 200
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
  object lblNombreAModi: TLabel
    Left = 112
    Top = 136
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
  object lblNombreLibroBuscarModi: TLabel
    Left = 336
    Top = 39
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
  object txtNombreLibroBuscarAModi: TEdit
    Left = 272
    Top = 63
    Width = 185
    Height = 23
    TabOrder = 0
  end
  object BtnBuscarNomAModi: TButton
    Left = 320
    Top = 92
    Width = 97
    Height = 25
    Caption = 'Buscar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object txtAutoresAModi: TEdit
    Left = 456
    Top = 222
    Width = 161
    Height = 23
    TabOrder = 2
  end
  object btnModificarLibro: TButton
    Left = 296
    Top = 416
    Width = 137
    Height = 33
    Caption = 'Modificar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object lstEstadoAModi: TListBox
    Left = 112
    Top = 350
    Width = 161
    Height = 35
    ItemHeight = 15
    Items.Strings = (
      'Bien '
      'Regular'
      'Malo'
      'Destruido')
    TabOrder = 4
  end
  object txtAnioPublicacionAModi: TEdit
    Left = 456
    Top = 350
    Width = 161
    Height = 23
    TabOrder = 5
  end
  object txtUbicacionAModi: TEdit
    Left = 456
    Top = 286
    Width = 161
    Height = 23
    TabOrder = 6
  end
  object txtEditorialAModi: TEdit
    Left = 456
    Top = 158
    Width = 161
    Height = 23
    TabOrder = 7
  end
  object txtSubAreaAModi: TEdit
    Left = 112
    Top = 286
    Width = 161
    Height = 23
    TabOrder = 8
  end
  object txtAreaAModi: TEdit
    Left = 112
    Top = 222
    Width = 161
    Height = 23
    TabOrder = 9
  end
  object txtNombreAModi: TEdit
    Left = 112
    Top = 158
    Width = 161
    Height = 23
    TabOrder = 10
  end
end
