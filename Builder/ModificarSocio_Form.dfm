object ModificarSocioForm: TModificarSocioForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'ModificarSocioForm'
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
  object lblIngreseInfoSocioAModi: TLabel
    Left = 200
    Top = 24
    Width = 348
    Height = 25
    Caption = 'Ingrese DNI del socio a modificar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
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
  object lblApellidoAModi: TLabel
    Left = 120
    Top = 124
    Width = 58
    Height = 16
    Caption = 'Apellido'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblDNIAModi: TLabel
    Left = 120
    Top = 180
    Width = 26
    Height = 16
    Caption = 'DNI'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblNumTelAModi: TLabel
    Left = 120
    Top = 284
    Width = 136
    Height = 16
    Caption = 'N'#250'mero de tel'#233'fono'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblEdadAModi: TLabel
    Left = 464
    Top = 124
    Width = 37
    Height = 16
    Caption = 'Edad'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblFechaNacimientoAModi: TLabel
    Left = 464
    Top = 180
    Width = 144
    Height = 16
    Caption = 'Fecha de nacimiento'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblDireccionCalleAModi: TLabel
    Left = 120
    Top = 230
    Width = 126
    Height = 16
    Caption = 'Direcci'#243'n de calle'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblGeneroAModi: TLabel
    Left = 464
    Top = 284
    Width = 51
    Height = 16
    Caption = 'G'#233'nero'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblEmailAModi: TLabel
    Left = 464
    Top = 230
    Width = 44
    Height = 16
    Caption = 'E-mail'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object btnBuscarSocioModi: TButton
    Left = 328
    Top = 84
    Width = 97
    Height = 25
    Caption = 'Buscar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = btnBuscarSocioModiClick
  end
  object txtApellidoAModi: TEdit
    Left = 120
    Top = 146
    Width = 161
    Height = 23
    TabOrder = 1
  end
  object txtDNIAModi: TEdit
    Left = 120
    Top = 202
    Width = 161
    Height = 23
    TabOrder = 2
  end
  object txtNumTelAModi: TEdit
    Left = 120
    Top = 306
    Width = 161
    Height = 23
    TabOrder = 3
  end
  object txtEdadAModi: TEdit
    Left = 464
    Top = 146
    Width = 161
    Height = 23
    TabOrder = 4
  end
  object txtFechaNacimientoAModi: TEdit
    Left = 464
    Top = 202
    Width = 161
    Height = 23
    TabOrder = 5
  end
  object txtDireccionCalleAModi: TEdit
    Left = 120
    Top = 252
    Width = 161
    Height = 23
    TabOrder = 6
  end
  object btnModificar: TButton
    Left = 312
    Top = 380
    Width = 129
    Height = 33
    Caption = 'Modificar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = btnModificarClick
  end
  object txtEmailAModi: TEdit
    Left = 464
    Top = 252
    Width = 161
    Height = 23
    TabOrder = 8
  end
  object ComboBoxBusqueda: TComboBox
    Left = 288
    Top = 55
    Width = 176
    Height = 23
    TabOrder = 9
    Text = 'Ingresar DNI del socio'
  end
  object ComboBoxGenero: TComboBox
    Left = 464
    Top = 306
    Width = 161
    Height = 23
    TabOrder = 10
  end
end
