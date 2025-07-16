# Change Log

## v1.9 - 16 April 2025
- Convert changelog from text file to CHANGELOG.md
- Convert readme.txt from text file to README.md

## v1.8 - 21 November 2024
- Update NOAA "Forecast Discussion" link
- Integrate sysinfo on server.html

## v1.7 - 12 October 2024
- Move server info to new page
- Move weather summaries to menu
- Add Python 3 support
- Check if forecast extension exists for forecast and tide display
- Fix uptime display

## v1.6.1 - 22 August 2019
Almanac page
- Fix rounding error that makes "minutes" = 60

## v1.6 - 21 August 2019
- Roll version number
- Convert to weewx extension

## v1.5.1 - 19 August 2019
Almanac page
- Fix daylight difference bug when daylight is decreasing
- Only display hours and minutes of daylight. Removed seconds and round
  minutes as needed

## v1.5 - 25 March 2019
### General
- Roll version number
- Remove references to "mem" extension since replaced by "cmon"
### About page
- Remove references to "mem" extension since replaced by "cmon"

## v1.4 - 15 March 2019
### Skin config
- Remove all Units and rely on weewx.conf to handle
### Weather pages
- Add missing "at" to several of max and min times

## v1.3 - 11 March 2019
### Almanac page
- Add amount of daylight and change since previous day
### About page
- Update OS version

## v1.2 - 30 September 2017
### General
- General reorganization. Move forecast icons and generated images
into new "images" directory.
### Forecast page
- Show expansions for daily forecasts.
### About page
- Get version for MemoryMonitor extension directly from it.
- Minor updates

## v1.1 - 25 April 2015
### General
- Actually roll the version number this time
- Update list of files copied into public_html when first run
### Weather pages
- Add remark to yearly rain totals explaining it really started on 28 Mar 2015
### Forecast page
- Futile change for small screen layout
### Almanac page
- Improve tablet layout
### About page
- Move information around and improve descritpion

## 1.0 - 24 April 2015
### General
- Improve small screen layouts for weather tabs and forecast
- Move current date/time from header to specific pages
- Improve date formatting:
  - remove "-"s between date fields
  - show only hours and minutes on data charts
### Weather pages
- Add current date/time to current weather page
- Remove duplicated data from week and month pages
### Forecast page
- Add small screen-specific forecast markup
### Almanac page
- Remove declination and right ascension for sun and moon
- Only show alititude and azimuth for sun if in civil twilight or above horizon; only show for moon if above horizon
- Add dates to top of astronomy and tide tables
### About page
- Move content around and expand history section
- Add some server information

## v0.1 - 17 April 2015
Initial version
