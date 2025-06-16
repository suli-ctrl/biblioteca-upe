object BajaSocioForm: TBajaSocioForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'BajaSocioForm'
  ClientHeight = 469
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object lblIngreseInfoSocioBaja: TLabel
    Left = 232
    Top = 40
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
  object lblBajaSocio: TLabel
    Left = 681
    Top = 0
    Width = 74
    Height = 16
    Caption = 'Baja socio'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lblDNIBaja: TLabel
    Left = 360
    Top = 104
    Width = 28
    Height = 18
    Caption = 'DNI'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object txtDNIBaja: TEdit
    Left = 280
    Top = 128
    Width = 185
    Height = 23
    TabOrder = 0
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
    TabOrder = 1
  end
end
