[Variables]

;-----------------------
; LAYOUT

Stylesheet=Enigma Dark

;-----------------------
; WORLD

; Local Weather
WeatherCodeName=Rīga, Vidzeme, Latvija
WeatherCodeLat=56.949397
WeatherCodeLon=24.105184
; Units of measure. This must be one of the following lower case letters:
; e		This is "Imperial", using Fahrenheit.
; m		This is "Metric", using Celsius.
; h		This is "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.
WeatherCodeUnit=m
WeatherCodeLanguage=en-US

; 1st World Weather
World1WeatherCodeName=Тюмень, Привокзальная улица, Калининский административный округ, Тюмень, городской округ Тюмень, Тюменская область, Уральский федеральный округ, 625000, Россия
World1WeatherCodeLat=57.145575
World1WeatherCodeLon=65.522118
; Units of measure. This must be one of the following lower case letters:
; e		This is "Imperial", using Fahrenheit.
; m		This is "Metric", using Celsius.
; h		This is "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.
World1WeatherCodeUnit=m
World1WeatherCodeLanguage=ru-RU

; 2nd World Weather
World2WeatherCodeName=Алматы, Қазақстан
World2WeatherCodeLat=43.236392
World2WeatherCodeLon=76.945727
; Units of measure. This must be one of the following lower case letters:
; e		This is "Imperial", using Fahrenheit.
; m		This is "Metric", using Celsius.
; h		This is "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.
World2WeatherCodeUnit=m
World2WeatherCodeLanguage=ru-RU

; 3rd World Weather
World3WeatherCodeName=New York, United States
World3WeatherCodeLat=40.712728
World3WeatherCodeLon=-74.006015
; Units of measure. This must be one of the following lower case letters:
; e		This is "Imperial", using Fahrenheit.
; m		This is "Metric", using Celsius.
; h		This is "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.
World3WeatherCodeUnit=m
World3WeatherCodeLanguage=ru

; Skin labels
WindChill=Wind Chill
Speed=Speed
Direction=Direction
Visibility=Visibility

;-----------------------
; GENERAL

Note1Path=#@#User\Notes\Notes.txt
Note2Path=#@#User\Notes\Tasks.txt
Note3Path=#@#User\Notes\About.txt
NoteHeight=200
Drive1=C
Drive2=E
Drive3=F
NetworkMaxDownload=1000000
NetworkMaxUpload=500000
SystemGraphType=Floating
CalendarEventFile=%USERPROFILE%\Rainmeter\Skins\Enigma\@Resources\User\Calendars\Holidays.xml
CalendarShowEvents=1
CalendarExtraDays=1
CalendarLeadingZeroes=0
CalendarMondays=0
GalleryPath=%USERPROFILE%\Pictures
GallerySubfolders=1
GalleryPosition=Fill
GalleryRatio=3/4
VolumeIncrement=5
TriptychInterval=30
TriptychDisabled=0
ProcessInterval=5

;-----------------------
; MUSIC

MusicPlayerType=2
MusicPlayer=Spotify

;-----------------------
; FEEDS

Feed1=http://lz.lv/rss
Feed2=http://kaelri.com/feed/
Feed3=http://feeds.bbci.co.uk/news/video_and_audio/news_front_page/rss.xml?edition=uk
GmailUsername=YourUsername
GmailPassword=YourPasswordHere
GmailDomain=domain.com
GmailUrl=https://#GmailUsername#:#GmailPassword#@gmail.google.com/gmail/feed/atom
FacebookFeed=YourFacebookFeedHere
; GoogleCalendar1=https://calendar.google.com/calendar/ical/.../full.ics
GoogleCalendar1=https://calendar.google.com/calendar/ical/en.usa%23holiday%40group.v.calendar.google.com/public/full.ics
GoogleCalendar2=https://calendar.google.com/calendar/ical/ht3jlfaac5lfd6263ulfh4tql8%40group.calendar.google.com/public/full.ics
GoogleCalendar3=
GoogleCalendarWriteEvents=1
RTMusername=YourUserNameHere
RTMpassword=YourPasswordHere
RTMlist1=YourListNumberHere
RTMlist2=YourListNumberHere
RTMlist3=YourListNumberHere
TwitterUsername=YourUsernameHere
TwitterPassword=YourPasswordHere

;-----------------------
; APPS

App1=Chrome
App1Path=chrome.exe
App1PathHandle=chrome.exe
App1Label=WEB
App1Icon=#@#Images\Launcher\Chrome.#ColorImage#.png
App2=Notepad
App2Path=notepad.exe
App2PathHandle=notepad.exe
App2Label=TEXT
App2Icon=#@#Images\Launcher\Text.#ColorImage#.png
App3=Explorer
App3Path=explorer.exe
App3PathHandle=explorer.exe
App3Label=FILES
App3Icon=#@#Images\Launcher\Start.#ColorImage#.png
App4=Skype
App4Path=C:\Program Files\Skype\Phone\skype.exe
App4PathHandle=skype.exe
App4Label=CHAT
App4Icon=#@#Images\Launcher\Skype.#ColorImage#.png
App5=Rainmeter.net
App5Path=http://rainmeter.net/
App5Handle=rainmeter.exe
App5Label=FORUM
App5Icon=#@#Images\Launcher\Rainmeter.png

;-----------------------
; SEARCH

Search1=Google
Search1Command="http://google.com/search?q=$UserInput$"
Search1Icon=#@#Images\Search\Google.#ColorImage#.png
Search2=Wikipedia
Search2Command="http://en.wikipedia.org/wiki/$UserInput$"
Search2Icon=#@#Images\Search\Wiki.#ColorImage#.png
Search3=YouTube
Search3Command="http://www.youtube.com/results?search_query=$UserInput$"
Search3Icon=#@#Images\Search\YouTube.#ColorImage#.png
Search4=Twitter
Search4Command="https://twitter.com/#!/search/$UserInput$"
Search4Icon=#@#Images\Search\Twitter.#ColorImage#.png
Search5=Rainmeter.net
Search5Command="https://www.google.com/search?q=site%3Ahttp%3A%2F%2Frainmeter.net%2Fcms%2F%20$UserInput$"
Search5Icon=#@#Images\Search\Run.#ColorImage#.png
TaskbarHideTriptych=0
