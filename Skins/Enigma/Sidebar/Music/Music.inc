;---------------------------------------------------------------------
; METERS

[Background]
Meter=IMAGE
MeterStyle=StyleSidebarBackground | StyleMusic[#Variant]Background

[Border]
Meter=IMAGE
MeterStyle=StyleMusic[#Variant]Border

[Header]
Meter=STRING
MeterStyle=StyleMusic[#Variant]Header

;-----------------------
; ART

[IconBack]
Meter=IMAGE
MeterStyle=StyleMusic[#Variant]IconBack

[Icon]
Meter=IMAGE
MeterStyle=StyleMusic[#Variant]Icon
MeasureName=MeasureCover
LeftMouseUpAction=!CommandMeasure "MeasureMediaPlayer" "OpenPlayer"
ToolTipTitle=Open Player

[Curtain]
Meter=IMAGE
MeterStyle=StyleMusic[#Variant]Curtain

;-------------------------
; TEXT

[Track]
Meter=STRING
MeterStyle=StyleMusic[#Variant]Text | StyleMusic[#Variant]TextFirst
MeasureName=MeasureTrack

[Artist]
Meter=STRING
MeterStyle=StyleMusic[#Variant]Text | StyleMusic[#Variant]TextSecond
MeasureName=MeasureArtist

[Album]
Meter=STRING
MeterStyle=StyleMusic[#Variant]Text | StyleMusic[#Variant]TextThird
MeasureName=MeasureAlbum

[Time]
Meter=STRING
MeterStyle=StyleMusic[#Variant]Time
MeasureName=MeasureTimePosition

;-------------------------
; BUTTONS

[Prev]
Meter=Image
MeterStyle=StyleMusic[#Variant]Button | StyleMusic[#Variant]ButtonPrevious
LeftMouseUpAction=[!CommandMeasure MeasureState "Previous"]
[Play]
Meter=Image
MeterStyle=StyleMusic[#Variant]Button | StyleMusic[#Variant]ButtonPlayPause[&MeasureState]
LeftMouseUpAction=[!CommandMeasure MeasureState "PlayPause"]
DynamicVariables=1

[Next]
Meter=Image
MeterStyle=StyleMusic[#Variant]Button | StyleMusic[#Variant]ButtonNext
LeftMouseUpAction=[!CommandMeasure MeasureState "Next"]

[Repeat]
Meter=Image
MeterStyle=StyleMusic[#Variant]Button | StyleMusic[#Variant]ButtonRepeat[&MeasureRepeat] 
LeftMouseUpAction=[!CommandMeasure MeasureState "Repeat"]
DynamicVariables=1

[Shuffle]
Meter=Image
MeterStyle=StyleMusic[#Variant]Button | StyleMusic[#Variant]ButtonShuffle[&MeasureShuffle]
LeftMouseUpAction=[!CommandMeasure MeasureState "Shuffle"]
DynamicVariables=1

[Progress]
Meter=BAR
MeterStyle=StyleMusic[#Variant]Progress
MeasureName=MeasureProgress
