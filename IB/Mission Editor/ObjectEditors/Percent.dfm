object PercentEditor: TPercentEditor
  Left = 620
  Top = 436
  BorderIcons = []
  BorderStyle = bsNone
  ClientHeight = 46
  ClientWidth = 261
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object tbValue: TTrackBar
    Left = 0
    Top = 0
    Width = 261
    Height = 46
    Align = alClient
    BorderWidth = 2
    Ctl3D = True
    LineSize = 2
    Max = 100
    Orientation = trHorizontal
    ParentCtl3D = False
    ParentShowHint = False
    PageSize = 12
    Frequency = 20
    Position = 0
    SelEnd = 0
    SelStart = 0
    ShowHint = True
    TabOrder = 0
    ThumbLength = 10
    TickMarks = tmBottomRight
    TickStyle = tsAuto
    OnChange = tbValueChange
  end
end