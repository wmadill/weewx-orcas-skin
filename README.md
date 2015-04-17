# weewx-orcas-skin

## Overview
This repository contains the custom skin for the weewx installation on Orcas.

## Some details
The skin uses the standard skin from tkeffer's excellent weewx weather station
software, the forecast skin from mwall's forecast extension, and the mem skin
from vinceskahan's reworked mem extension.

I combined the weather pages into tabs on one page, gave the forecast its own
page, created an almanac page with astronomical and tide information, and
created an about page. I jammed it all into Foundation CSS to make it more
responsive.

## Plans
- Improve small screen layouts, particularly on the forecast page
- In the same vein decide how best to show the graphs on a small screen
- Figure out why the NOAA pages have disappeared
- Display the times on the graphs in the same HH:MM format as elsewhere
- Add copyrights and links to the sources for the components used in this
  version
- Cleanup the HTML markup which is largely untouched from the original code
  integrated into this skin
