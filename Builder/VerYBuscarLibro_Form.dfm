object VerYBuscarLibroForm: TVerYBuscarLibroForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'VerYBuscarLibroForm'
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
  object txtNombreBuscar: TEdit
    Left = 8
    Top = 8
    Width = 169
    Height = 23
    TabOrder = 0
    Text = 'Nombre'
  end
  object txtAreaBuscar: TEdit
    Left = 8
    Top = 37
    Width = 169
    Height = 23
    TabOrder = 1
    Text = 'Area'
  end
  object txtSubAreaBuscar: TEdit
    Left = 8
    Top = 66
    Width = 169
    Height = 23
    TabOrder = 2
    Text = 'SubArea'
  end
  object txtAutoresBuscar: TEdit
    Left = 8
    Top = 95
    Width = 169
    Height = 23
    TabOrder = 3
    Text = 'Autores'
  end
  object txtAnioPublicacionBuscar: TEdit
    Left = 216
    Top = 8
    Width = 169
    Height = 23
    TabOrder = 4
    Text = 'A'#241'o de publicaci'#243'n'
  end
  object txtEditorialBuscar: TEdit
    Left = 8
    Top = 124
    Width = 169
    Height = 23
    TabOrder = 5
    Text = 'Editorial'
  end
  object txtUbicacionBuscar: TEdit
    Left = 216
    Top = 37
    Width = 169
    Height = 23
    TabOrder = 6
    Text = 'Ubicaci'#243'n (EstN'#176'-FN'#176')'
  end
  object lstEstadoBuscar: TListBox
    Left = 216
    Top = 66
    Width = 169
    Height = 35
    ItemHeight = 15
    Items.Strings = (
      'Bien '
      'Regular'
      'Malo'
      'Destruido')
    TabOrder = 7
  end
  object txtCodBarrasBuscar: TEdit
    Left = 216
    Top = 107
    Width = 169
    Height = 23
    TabOrder = 8
    Text = 'C'#243'digo de barras'
  end
  object chkMostrarTodos: TCheckBox
    Left = 216
    Top = 136
    Width = 145
    Height = 17
    Caption = 'Mostrar todos'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
  end
  object StringGridLibros: TStringGrid
    Left = 8
    Top = 184
    Width = 740
    Height = 277
    ColCount = 9
    TabOrder = 10
  end
  object btnBuscarLibro: TButton
    Left = 440
    Top = 57
    Width = 121
    Height = 32
    Caption = 'Buscar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 11
  end
end
