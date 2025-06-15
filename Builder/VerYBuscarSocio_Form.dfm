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
  TextHeight = 15
  object Label1: TLabel
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
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 169
    Height = 23
    TabOrder = 0
    Text = 'Apellido'
  end
  object Edit2: TEdit
    Left = 8
    Top = 37
    Width = 169
    Height = 23
    TabOrder = 1
    Text = 'DNI'
  end
  object Edit4: TEdit
    Left = 216
    Top = 66
    Width = 169
    Height = 23
    TabOrder = 2
    Text = 'Fecha de nacimiento (D/M/A)'
  end
  object Edit5: TEdit
    Left = 216
    Top = 8
    Width = 169
    Height = 23
    TabOrder = 3
    Text = 'N'#250'mero de tel'#233'fono'
  end
  object Edit6: TEdit
    Left = 216
    Top = 95
    Width = 169
    Height = 23
    TabOrder = 4
    Text = 'E-mail'
  end
  object Edit7: TEdit
    Left = 216
    Top = 37
    Width = 169
    Height = 23
    TabOrder = 5
    Text = 'Edad'
  end
  object ListBox1: TListBox
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
  object Edit8: TEdit
    Left = 8
    Top = 124
    Width = 169
    Height = 23
    TabOrder = 7
    Text = 'Direcci'#243'n de calle'
  end
  object CheckBox1: TCheckBox
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
  object StringGrid1: TStringGrid
    Left = 8
    Top = 184
    Width = 740
    Height = 277
    ColCount = 9
    TabOrder = 9
  end
  object Button1: TButton
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
  end
end
