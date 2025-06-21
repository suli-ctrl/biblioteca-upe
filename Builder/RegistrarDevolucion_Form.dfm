object RegistarDevoluciónForm: TRegistarDevoluciónForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'RegistarDevoluci'#243'nForm'
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
  object lblRegistrarDevolucion: TLabel
    Left = 602
    Top = 0
    Width = 146
    Height = 16
    Caption = 'Registrar Devoluci'#243'n'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object LabelSeleccionado: TLabel
    Left = 226
    Top = 126
    Width = 252
    Height = 25
    Caption = 'Prestamo seleccionado:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 512
    Top = 53
    Width = 102
    Height = 18
    Caption = 'DNI del socio'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 56
    Top = 40
    Width = 125
    Height = 18
    Caption = 'Nombre del libro'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 592
    Top = 408
    Width = 137
    Height = 41
    Caption = 'Registrar'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object ComboBox1: TComboBox
    Left = 512
    Top = 77
    Width = 171
    Height = 23
    TabOrder = 1
  end
  object ListBox1: TListBox
    Left = 64
    Top = 64
    Width = 193
    Height = 16
    ItemHeight = 15
    TabOrder = 2
  end
  object StringGridPrestamos: TStringGrid
    Left = 56
    Top = 168
    Width = 673
    Height = 234
    TabOrder = 3
    OnClick = StringGridPrestamosClick
  end
end
