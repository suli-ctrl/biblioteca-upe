object VerYBuscarSocioForm: TVerYBuscarSocioForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'VerYBuscarSocioForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poMainFormCenter
  OnShow = FormShow
  TextHeight = 15
  object lblModificarSocio: TLabel
    Left = 642
    Top = 0
    Width = 106
    Height = 16
    Caption = 'Modificar socio'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object txtApellidoBuscar: TEdit
    Left = 8
    Top = 8
    Width = 169
    Height = 23
    TabOrder = 0
  end
  object txtDNIBuscar: TEdit
    Left = 8
    Top = 37
    Width = 169
    Height = 23
    TabOrder = 1
  end
  object txtFechaNacimientoBuscar: TEdit
    Left = 216
    Top = 66
    Width = 169
    Height = 23
    TabOrder = 2
  end
  object txtNumTelBuscar: TEdit
    Left = 216
    Top = 8
    Width = 169
    Height = 23
    TabOrder = 3
  end
  object txtEmailBuscar: TEdit
    Left = 216
    Top = 95
    Width = 169
    Height = 23
    TabOrder = 4
  end
  object txtEdadBuscar: TEdit
    Left = 216
    Top = 37
    Width = 169
    Height = 23
    TabOrder = 5
  end
  object lstGeneroBuscar: TListBox
    Left = 8
    Top = 66
    Width = 169
    Height = 52
    ItemHeight = 15
    Items.Strings = (
      'Masculino'
      'Femenino'
      'No especificado')
    TabOrder = 6
  end
  object txtDireccionCalleBuscar: TEdit
    Left = 8
    Top = 124
    Width = 169
    Height = 23
    TabOrder = 7
  end
  object chkMostrarTodos: TCheckBox
    Left = 216
    Top = 124
    Width = 145
    Height = 17
    Caption = 'Mostrar todos'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
  end
  object StringGridSocios: TStringGrid
    Left = 8
    Top = 184
    Width = 740
    Height = 277
    ColCount = 9
    DefaultColWidth = 235
    TabOrder = 9
  end
  object btnBuscarSocio: TButton
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
    TabOrder = 10
    OnClick = btnBuscarSocioClick
  end
end
