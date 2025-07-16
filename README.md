# weewx-orcas-skin

## Overview
This repository contains the custom skin for the weewx installation on Orcas
packaged as a weewx extension.

## Some details
The skin uses a reworked standard skin from tkeffer's excellent WeeWX weather
station software integrated with the `forecast` skin from chaunceygardiner's
(originally mwall's) forecast extension, and the `pmon` skin of mwall's pmon 
xtension (now integrated into the sysinfo extension).

I combined the weather pages into tabs on one page, gave the forecast its own
page, created an almanac page with astronomical and tide information, 
created an about page and a server info. I jammed it all into Foundation CSS
to make it more responsive.

## Plans
- Decide how best to show the graphs on a small screen
- Cleanup the HTML markup which is largely untouched from the original code
  integrated into this skin
