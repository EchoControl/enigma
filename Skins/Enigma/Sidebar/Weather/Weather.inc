; Enigma Additions
; WIND

[@CurrentWindDirectionDegreesCardinal]
Measure=Calc
Formula=FLOOR((([@CurrentWindDirectionDegrees:]/11.25)+1.5) < 33 ? (([@CurrentWindDirectionDegrees:]/11.25)+1.5) : (([@CurrentWindDirectionDegrees:]/11.25)+1.5)-32)
Substitute="10":"EbS","11":"ESE","12":"SEbE","13":"SE","14":"SEbS","15":"SSE","16":"SbE","17":"S","18":"SbW","19":"SSW","20":"SWbS","21":"SW","22":"SWbW","23":"WSW","24":"WbSW","25":"W","26":"WbN","27":"WNW","28":"NWbW","29":"NW","30":"NWbN","31":"NNW","32":"NbW","1":"N","2":"NbE","3":"NNE","4":"NEbN","5":"NE","6":"NEbE","7":"ENE","8":"EbN","9":"E"
DynamicVariables=1

[MeasureWeatherDay2Average]
Measure=Calc
Formula=ROUND(([@ForecastDay2NightTemperature:]+[@ForecastDay2DayTemperature:])/2)
DynamicVariables=1

[MeasureWeatherDay3Average]
Measure=Calc
Formula=ROUND(([@ForecastDay3NightTemperature:]+[@ForecastDay3DayTemperature:])/2)
DynamicVariables=1

[YahooWeatherLogo]
Meter=IMAGE
MeterStyle=Style#Variant#Icon
Group=EnigmaMouseover
ImageName=#@#Images\MoxaWeather\Logo.png
H=25
W=25
Hidden=1
LeftMouseUpAction=["https://weather.com/weather/today/l/#Latitude#,#Longitude#"]
ToolTipText=Powered by Weather.com

;---------------------------------------------------------------------
; METERS

[Background]
Meter=IMAGE
MeterStyle=StyleSidebarBackground | StyleWeather#Variant#Background

[Border]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Border | StyleWeather#Variant#Border1

;-----------------------
; DAY 1

[Icon]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Moxa
MeasureName=@CurrentIcon

[Temp]
Meter=STRING
MeterStyle=StyleWeather#Variant#Text
MeasureName=@CurrentTemperature
Postfix="°"
;LeftMouseUpAction=["https://weather.com/#Language#/weather/today/l/#CurrentCode#"]

[Desc]
Meter=STRING
MeasureName=@CurrentConditions
MeterStyle=StyleWeather#Variant#Label

;-----------------------
; WIND

[WindSeparator]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Separator

[WindChill]
Meter=STRING
MeasureName=@CurrentFeelsLike
MeterStyle=StyleWeather#Variant#Text | StyleWeather#Variant#TextSub
Postfix="°"

[WindChillLabel]
Meter=STRING
MeterStyle=StyleWeather#Variant#Label | StyleWeather#Variant#LabelSub
Text=#WindChill#

[WindSpeed]
Meter=STRING
MeasureName=@CurrentWindSpeed
MeasureName2=@UnitsSpeed
MeterStyle=StyleWeather#Variant#Text | StyleWeather#Variant#TextSub
Text=%1 %2

[WindSpeedLabel]
Meter=STRING
MeterStyle=StyleWeather#Variant#Label | StyleWeather#Variant#LabelSub
Text=#Speed#

[WindDirection]
Meter=STRING
MeasureName=@CurrentWindDirectionDegrees
MeasureName2=@CurrentWindDirectionDegreesCardinal
MeterStyle=StyleWeather#Variant#Text | StyleWeather#Variant#TextSub
Text=%1° (%2)

[WindDirectionLabel]
Meter=STRING
MeterStyle=StyleWeather#Variant#Label | StyleWeather#Variant#LabelSub
Text=#Direction#

;-----------------------
; ATMOSPHERE

[AtmoSeparator]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Separator

[AtmoHumidity]
Meter=STRING
MeasureName=@CurrentHumidity
MeterStyle=StyleWeather#Variant#Text | StyleWeather#Variant#TextSub
Postfix="%"

[AtmoHumidityLabel]
Meter=STRING
MeterStyle=StyleWeather#Variant#Label | StyleWeather#Variant#LabelSub
Text=#Humidity#

[AtmoPressure]
Meter=STRING
MeasureName=@CurrentPressure
MeasureName2=@UnitsPressure
MeterStyle=StyleWeather#Variant#Text | StyleWeather#Variant#TextSub
Text=%1 %2

[AtmoPressureLabel]
Meter=STRING
MeterStyle=StyleWeather#Variant#Label | StyleWeather#Variant#LabelSub
Text=#Pressure#

[AtmoVisibility]
Meter=STRING
MeasureName=@CurrentVisibilityDistance
MeasureName2=@UnitsDistance
MeterStyle=StyleWeather#Variant#Text | StyleWeather#Variant#TextSub
Text=%1 %2

[AtmoVisibilityLabel]
Meter=STRING
MeterStyle=StyleWeather#Variant#Label | StyleWeather#Variant#LabelSub
Text=#Visibility#

;-----------------------
; DAY 2

[Day2Separator]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Border | StyleWeather#Variant#Border2

[Icon2]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Moxa
MeasureName=@ForecastDay2DayIcon

[Temp2]
Meter=STRING
MeterStyle=StyleWeather#Variant#Text
MeasureName=MeasureWeatherDay2Average
Postfix="°"
;LeftMouseUpAction=["https://weather.com/#Language#/weather/today/l/#CurrentCode#"]

[Date2]
Meter=STRING
MeasureName=@ForecastDay2DayShort
MeterStyle=StyleWeather#Variant#Label

;-----------------------
; DAY 3

[Day3Separator]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Border | StyleWeather#Variant#Border3

[Icon3]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Moxa
MeasureName=@ForecastDay3DayIcon

[Temp3]
Meter=STRING
MeterStyle=StyleWeather#Variant#Text
MeasureName=MeasureWeatherDay3Average
Postfix="°"
;LeftMouseUpAction=["https://weather.com/#Language#/weather/today/l/#CurrentCode#"]

[Date3]
Meter=STRING
MeasureName=@ForecastDay3DayShort
MeterStyle=StyleWeather#Variant#Label

;-----------------------

[BorderBottom]
Meter=IMAGE
MeterStyle=StyleWeather#Variant#Border | StyleWeather#Variant#Border4
