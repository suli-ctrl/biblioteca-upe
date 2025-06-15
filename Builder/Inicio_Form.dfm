object InicioForm: TInicioForm
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Biblioteca UPE'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 15
  object Splitter1: TSplitter
    Left = 185
    Top = 29
    Height = 390
    ExplicitLeft = 186
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 624
    Height = 29
    Caption = 'ToolBar1'
    TabOrder = 0
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 419
    Width = 624
    Height = 22
    Panels = <>
  end
  object Panel1: TPanel
    Left = 0
    Top = 29
    Width = 185
    Height = 390
    Align = alLeft
    BevelOuter = bvNone
    TabOrder = 2
    object Panel3: TPanel
      Left = 0
      Top = 8
      Width = 185
      Height = 81
      BevelOuter = bvNone
      Caption = 'Biblioteca UPE'
      Color = clActiveCaption
      ParentBackground = False
      TabOrder = 0
    end
    object BtnSalir: TButton
      Left = 0
      Top = 344
      Width = 179
      Height = 43
      Caption = 'Salir'
      TabOrder = 1
      OnClick = BtnSalirClick
    end
    object BtnSocios: TButton
      Left = 0
      Top = 263
      Width = 182
      Height = 50
      Caption = 'Socios'
      TabOrder = 2
      OnClick = BtnSociosClick
    end
    object BtnPrestamos: TButton
      Left = 0
      Top = 204
      Width = 182
      Height = 53
      Caption = 'Prestamos'
      TabOrder = 3
      OnClick = BtnPrestamosClick
    end
    object BtnLibros: TButton
      Left = 0
      Top = 144
      Width = 182
      Height = 54
      Caption = 'Libros'
      TabOrder = 4
      OnClick = BtnLibrosClick
    end
    object Panel4: TPanel
      Left = 0
      Top = 80
      Width = 185
      Height = 41
      BevelOuter = bvNone
      Caption = 'Opciones de Gesti'#243'n'
      Color = clGray
      ParentBackground = False
      TabOrder = 5
    end
  end
  object Panel2: TPanel
    Left = 188
    Top = 29
    Width = 436
    Height = 390
    Align = alClient
    BevelOuter = bvNone
    TabOrder = 3
  end
end
