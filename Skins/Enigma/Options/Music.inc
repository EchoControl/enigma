[Variables]
PanelHeight=425
ArrowY=88
LabelsQueue=

;---------------------------------------------------------------------
; METERS

;-----------------------
; INDICATOR ARROW

[Arrow]
Meter=IMAGE
MeterStyle=StyleMenuArrow
Y=[#ArrowY]

[Grabber]
Meter=IMAGE
ImageName=[#@]Images\Grabber.W.png
X=213
Y=(59+([#MusicPlayerType]*20))

;-----------------------
; MUSIC

[PanelName]
Meter=STRING
MeterStyle=StyleName | StyleNameFirst
Text=M  U  S  I  C

[PanelNotes]
Meter=STRING
MeterStyle=StyleNotes | StyleNameFirst
Text=Set the media player app that you would like to use with Enigma Music.
H=24

;-----------------------

[MusicPlayerName]
Meter=STRING
MeterStyle=StyleName
Text="Music Player"

[MusicPlayerText10]
Meter=STRING
MeterStyle=StyleText | StyleTextSub
Text="Spotify"
LeftMouseUpAction=[!CommandMeasure MeasureInputScript "Write('MusicPlayerType', '2', 'wait')"][!CommandMeasure MeasureInputScript "Write('MusicPlayer', 'Spotify')"]
TooltipTitle="Spotify"
TooltipText=ONLY PLAYER SUPPORTED
