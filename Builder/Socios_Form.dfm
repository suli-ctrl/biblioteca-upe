object SociosForm: TSociosForm
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'SociosForm'
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
      Height = 89
      BevelOuter = bvNone
      Caption = 'Biblioteca UPE'
      Color = clActiveCaption
      ParentBackground = False
      TabOrder = 0
    end
    object BtnVolverSocios: TButton
      Left = 0
      Top = 344
      Width = 179
      Height = 43
      Caption = 'Volver'
      TabOrder = 1
      OnClick = BtnVolverSociosClick
    end
    object BtnVerSocios: TButton
      Left = 0
      Top = 263
      Width = 182
      Height = 50
      Caption = 'Visualizaci'#243'n'#13#10'y Busqueda'
      TabOrder = 2
    end
    object BtnBajaSocio: TButton
      Left = 0
      Top = 204
      Width = 182
      Height = 53
      Caption = 'Dar baja '#13#10'Socio'
      TabOrder = 3
    end
    object BtnAltaSocio: TButton
      Left = 0
      Top = 144
      Width = 182
      Height = 54
      Caption = 'Dar alta'#13#10'Socio'
      TabOrder = 4
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
