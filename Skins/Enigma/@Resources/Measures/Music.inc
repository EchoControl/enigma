[MeasureMediaPlayer]
Measure=NowPlaying
PlayerName=#MusicPlayer#
PlayerType=FILE

[MeasureTrack]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title

[MeasureAlbum]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Album

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist

[MeasureCover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
DefaultPath=#@#Images\Default.png
CoverPath=#@#Images\Cover.png

[MeasureTimeDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration

[MeasureTimePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position

[MeasureTimeProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
Substitute="NaN":"1"
DynamicVariables=1

[MeasureState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State

[MeasureRepeat]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Repeat

[MeasureShuffle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Shuffle

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
Substitute="NaN":"1"
DynamicVariables=1