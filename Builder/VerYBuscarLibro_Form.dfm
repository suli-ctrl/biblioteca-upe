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
  object lblCodigoBarras: TLabel
    Left = 432
    Top = 78
    Width = 20
    Height = 43
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'CCode39'
    Font.Style = []
    ParentFont = False
  end
  object txtNombreBuscar: TEdit
    Left = 24
    Top = 24
    Width = 169
    Height = 23
    TabOrder = 0
  end
  object txtAreaBuscar: TEdit
    Left = 24
    Top = 53
    Width = 169
    Height = 23
    TabOrder = 1
  end
  object txtSubAreaBuscar: TEdit
    Left = 24
    Top = 82
    Width = 169
    Height = 23
    TabOrder = 2
  end
  object txtAutoresBuscar: TEdit
    Left = 24
    Top = 111
    Width = 169
    Height = 23
    TabOrder = 3
  end
  object txtAnioPublicacionBuscar: TEdit
    Left = 232
    Top = 24
    Width = 169
    Height = 23
    TabOrder = 4
  end
  object txtEditorialBuscar: TEdit
    Left = 24
    Top = 140
    Width = 169
    Height = 23
    TabOrder = 5
  end
  object txtUbicacionBuscar: TEdit
    Left = 232
    Top = 53
    Width = 169
    Height = 23
    TabOrder = 6
  end
  object lstEstadoBuscar: TListBox
    Left = 232
    Top = 82
    Width = 169
    Height = 35
    ItemHeight = 15
    Items.Strings = (
      'bien'
      'regular'
      'malo'
      'destruido')
    TabOrder = 7
  end
  object txtCodBarrasBuscar: TEdit
    Left = 232
    Top = 123
    Width = 169
    Height = 23
    TabOrder = 8
  end
  object chkMostrarTodos: TCheckBox
    Left = 232
    Top = 152
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
    DefaultColWidth = 240
    TabOrder = 10
    OnClick = StringGridLibrosClick
  end
  object btnBuscarLibro: TButton
    Left = 432
    Top = 25
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
    OnClick = btnBuscarLibroClick
  end
  object btnCodBarras: TButton
    Left = 559
    Top = 25
    Width = 170
    Height = 32
    Caption = 'Codigo de barras'
    TabOrder = 12
    OnClick = btnCodBarrasClick
  end
end
