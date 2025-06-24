object VerPrestamoActivoForm: TVerPrestamoActivoForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'VerPrestamoActivoForm'
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
  object lblVerPrestamos: TLabel
    Left = 591
    Top = 0
    Width = 157
    Height = 16
    Caption = 'Ver Prestamos Activos'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object LabelVencimiento: TLabel
    Left = 8
    Top = 37
    Width = 269
    Height = 37
    Caption = 'Estado de prestamo: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object StringGridPrestamos: TStringGrid
    Left = 8
    Top = 80
    Width = 740
    Height = 381
    ColCount = 4
    DefaultColWidth = 128
    TabOrder = 0
    OnClick = StringGridPrestamosClick
    RowHeights = (
      24
      24
      24
      24
      24)
  end
end
