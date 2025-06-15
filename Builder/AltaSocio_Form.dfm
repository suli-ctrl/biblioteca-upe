object AltaSocioForm: TAltaSocioForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'AltaSocioForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 682
    Top = 0
    Width = 71
    Height = 16
    Caption = 'Alta Socio'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 233
    Top = 32
    Width = 309
    Height = 25
    Caption = 'Ingrese informaci'#243'n del socio'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 128
    Top = 96
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
  object Label4: TLabel
    Left = 128
    Top = 152
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
  object Label6: TLabel
    Left = 128
    Top = 256
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
  object Label7: TLabel
    Left = 472
    Top = 96
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
  object Label8: TLabel
    Left = 472
    Top = 152
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
  object Label9: TLabel
    Left = 128
    Top = 202
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
  object Label10: TLabel
    Left = 472
    Top = 256
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
  object Label5: TLabel
    Left = 472
    Top = 202
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
  object Edit1: TEdit
    Left = 128
    Top = 118
    Width = 161
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 128
    Top = 174
    Width = 161
    Height = 23
    TabOrder = 1
  end
  object Edit4: TEdit
    Left = 128
    Top = 278
    Width = 161
    Height = 23
    TabOrder = 2
  end
  object Edit5: TEdit
    Left = 472
    Top = 118
    Width = 161
    Height = 23
    TabOrder = 3
  end
  object Edit6: TEdit
    Left = 472
    Top = 174
    Width = 161
    Height = 23
    TabOrder = 4
  end
  object Edit7: TEdit
    Left = 128
    Top = 224
    Width = 161
    Height = 23
    TabOrder = 5
  end
  object ListBox1: TListBox
    Left = 472
    Top = 278
    Width = 161
    Height = 48
    ItemHeight = 15
    Items.Strings = (
      'Masculino'
      'Femenino'
      'No especificado')
    TabOrder = 6
  end
  object Button1: TButton
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
    TabOrder = 7
  end
  object Edit3: TEdit
    Left = 472
    Top = 224
    Width = 161
    Height = 23
    TabOrder = 8
  end
end
