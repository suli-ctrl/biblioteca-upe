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
    Left = 8
    Top = 46
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
  object Button1: TButton
    Left = 312
    Top = 415
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
  object StringGridPrestamos: TStringGrid
    Left = 0
    Top = 72
    Width = 748
    Height = 337
    DefaultColWidth = 200
    TabOrder = 1
    OnClick = StringGridPrestamosClick
  end
end
