;---------------------------------------------------------------------
; MEASURES

[MeasureUTC]
Measure=Time
TimeZone=0

[MeasureUNIX]
Measure=Calc
Formula=MeasureUTC-11644473600

[MeasureTimeZone]
Group=Time
Measure=String
String=[@CurrentObservationTimeStamp]
RegExpSubstitute=1
Substitute="\d\d\d\d-\d\d-\d\dT\d\d:\d\d:\d\d(.*)$":"\1"
DynamicVariables=1
Disabled=1

[MeasureTime]
Group=Time
Measure=Time
TimeStamp=((([MeasureTimeZone]-100)*36)+[MeasureUTC:TimeStamp])
DynamicVariables=1
DaylightSavingTime=0
Disabled=1

[MeasureTimeSeconds]
Measure=Time
TimeZone=[MeasureTimeZone]
Format="%#S"
DynamicVariables=1
DaylightSavingTime=0

[MeasureClock]
Measure=Time
Format="%#H:%M"
TimeStamp=[MeasureTime]
TimeStampFormat=%H:%M:%S
Substitute="PM":"pm","AM":"am"
DynamicVariables=1
DaylightSavingTime=0

[MeasureBar]
Measure=Calc
Formula=MeasureTimeSeconds / 60

;---------------------------------------------------------------------
; METERS

[Background]
Meter=Image
MeterStyle=Style#Variant#Background

[Icon]
Meter=IMAGE
MeterStyle=Style#Variant#Icon | StyleClockIcon

[Seconds]
Meter=ROUNDLINE
MeterStyle=Style#Variant#Icon | StyleClockHands | StyleClockSeconds
MeasureName=MeasureTime

[Hours]
Meter=ROUNDLINE
MeterStyle=Style#Variant#Icon | StyleClockHands | StyleClockHours
MeasureName=MeasureTime

[Minutes]
Meter=ROUNDLINE
MeterStyle=Style#Variant#Icon | StyleClockHands | StyleClockMinutes
MeasureName=MeasureTime

[Text]
Meter=STRING
MeterStyle=Style#Variant#Text | StyleWorld#Variant#Text
MeasureName=MeasureClock
MeasureName2=@LocationName

[Label]
Meter=STRING
MeterStyle=Style#Variant#Label | StyleWorld#Variant#Label
MeasureName=@LocationName
MeasureName2=MeasureClock

[Bar]
Meter=BAR
MeterStyle=Style#Variant#Bar
MeasureName=MeasureBar
