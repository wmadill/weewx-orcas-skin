# installer for Orcas skin

from setup import ExtensionInstaller

def loader():
    return OrcasInstaller()

class OrcasInstaller(ExtensionInstaller):
    def __init__(self):
        super(OrcasInstaller, self).__init__(
            version="1.5.1",
            name='Orcas',
            description='Skin for Orcas weather station',
            author='Bill Madill',
            author_email='bill@jamimi.com',
            config={
                'StdReport': {
                    'Orcas': {
                        'skin':'Orcas',
                        'enable':'true'}}},
            files=[('skins/Orcas',
                    ['skins/Orcas/about.html.tmpl',
                     'skins/Orcas/almanac.html.tmpl',
                     'skins/Orcas/favicon.ico',
                     'skins/Orcas/footer.inc',
                     'skins/Orcas/forecast.html.tmpl',
                     'skins/Orcas/header.inc',
                     'skins/Orcas/index.html.tmpl',
                     'skins/Orcas/robots.txt',
                     'skins/Orcas/skin.conf',
                     'skins/Orcas/weather-current.inc',
                     'skins/Orcas/weather-month.inc',
                     'skins/Orcas/weather-summaries-monthly.inc',
                     'skins/Orcas/weather-summaries-yearly.inc',
                     'skins/Orcas/weather-week.inc',
                     'skins/Orcas/weather-year.inc']),
                   ('skins/Orcas/NOAA',
                    ['skins/Orcas/NOAA/NOAA-YYYY.txt.tmpl',
                     'skins/Orcas/NOAA/NOAA-YYYY-MM.txt.tmpl']),
                   ('skins/Orcas/css',
                    ['skins/Orcas/css/app.css',
                     'skins/Orcas/css/foundation.css',
                     'skins/Orcas/css/foundation.min.css',
                     'skins/Orcas/css/foundation_stock.css',
                     'skins/Orcas/css/foundation_stock.min.css',
                     'skins/Orcas/css/normalize.css']),
                   ('skins/Orcas/images/icons',
                    ['skins/Orcas/images/icons/AF.png',
                     'skins/Orcas/images/icons/B1n.png',
                     'skins/Orcas/images/icons/B1.png',
                     'skins/Orcas/images/icons/B2n.png',
                     'skins/Orcas/images/icons/B2.png',
                     'skins/Orcas/images/icons/BD.png',
                     'skins/Orcas/images/icons/BKn.png',
                     'skins/Orcas/images/icons/BK.png',
                     'skins/Orcas/images/icons/blizzard.png',
                     'skins/Orcas/images/icons/BS.png',
                     'skins/Orcas/images/icons/CLn.png',
                     'skins/Orcas/images/icons/CL.png',
                     'skins/Orcas/images/icons/drizzle.png',
                     'skins/Orcas/images/icons/E.png',
                     'skins/Orcas/images/icons/flag.png',
                     'skins/Orcas/images/icons/flag-yellow.png',
                     'skins/Orcas/images/icons/flurries.png',
                     'skins/Orcas/images/icons/F.png',
                     'skins/Orcas/images/icons/F+.png',
                     'skins/Orcas/images/icons/frzngdrzl.png',
                     'skins/Orcas/images/icons/FWn.png',
                     'skins/Orcas/images/icons/FW.png',
                     'skins/Orcas/images/icons/H.png',
                     'skins/Orcas/images/icons/K.png',
                     'skins/Orcas/images/icons/moonphase.png',
                     'skins/Orcas/images/icons/moon.png',
                     'skins/Orcas/images/icons/moonriseset.png',
                     'skins/Orcas/images/icons/NE.png',
                     'skins/Orcas/images/icons/N.png',
                     'skins/Orcas/images/icons/NW.png',
                     'skins/Orcas/images/icons/OVn.png',
                     'skins/Orcas/images/icons/OV.png',
                     'skins/Orcas/images/icons/PF.png',
                     'skins/Orcas/images/icons/PF+.png',
                     'skins/Orcas/images/icons/pop.png',
                     'skins/Orcas/images/icons/raindrop.png',
                     'skins/Orcas/images/icons/rain.png',
                     'skins/Orcas/images/icons/rainshwrs.png',
                     'skins/Orcas/images/icons/raintorrent.png',
                     'skins/Orcas/images/icons/SCn.png',
                     'skins/Orcas/images/icons/SC.png',
                     'skins/Orcas/images/icons/SE.png',
                     'skins/Orcas/images/icons/sleet.png',
                     'skins/Orcas/images/icons/snowflake.png',
                     'skins/Orcas/images/icons/snow.png',
                     'skins/Orcas/images/icons/snowshwrs.png',
                     'skins/Orcas/images/icons/S.png',
                     'skins/Orcas/images/icons/sprinkles.png',
                     'skins/Orcas/images/icons/sunmoon.png', 'skins/Orcas/images/icons/sun.png',
                     'skins/Orcas/images/icons/sunriseset.png',
                     'skins/Orcas/images/icons/SW.png',
                     'skins/Orcas/images/icons/thermometer-blue.png',
                     'skins/Orcas/images/icons/thermometer-dewpoint.png',
                     'skins/Orcas/images/icons/thermometer.png',
                     'skins/Orcas/images/icons/thermometer-red.png',
                     'skins/Orcas/images/icons/triangle-down.png',
                     'skins/Orcas/images/icons/triangle-right.png',
                     'skins/Orcas/images/icons/tstms.png',
                     'skins/Orcas/images/icons/water.png',
                     'skins/Orcas/images/icons/W.png']),
                   ('skins/Orcas/js',
                    ['skins/Orcas/js/foundation.min.js',
                     'skins/Orcas/js/foundation.stock.min.js']),
                   ('skins/Orcas/js/foundation',
                    ['skins/Orcas/js/foundation/foundation.abide.js',
                     'skins/Orcas/js/foundation/foundation.accordion.js',
                     'skins/Orcas/js/foundation/foundation.alert.js',
                     'skins/Orcas/js/foundation/foundation.clearing.js',
                     'skins/Orcas/js/foundation/foundation.dropdown.js',
                     'skins/Orcas/js/foundation/foundation.equalizer.js',
                     'skins/Orcas/js/foundation/foundation.interchange.js',
                     'skins/Orcas/js/foundation/foundation.joyride.js',
                     'skins/Orcas/js/foundation/foundation.js',
                     'skins/Orcas/js/foundation/foundation.magellan.js',
                     'skins/Orcas/js/foundation/foundation.offcanvas.js',
                     'skins/Orcas/js/foundation/foundation.orbit.js',
                     'skins/Orcas/js/foundation/foundation.reveal.js',
                     'skins/Orcas/js/foundation/foundation.slider.js',
                     'skins/Orcas/js/foundation/foundation.tab.js',
                     'skins/Orcas/js/foundation/foundation.tooltip.js',
                     'skins/Orcas/js/foundation/foundation.topbar.js',
                     'skins/Orcas/js/foundation/jquery.cookie.js']),
                   ('skins/Orcas/js/vendor',
                    ['skins/Orcas/js/vendor/fastclick.js',
                     'skins/Orcas/js/vendor/jquery.cookie.js',
                     'skins/Orcas/js/vendor/jquery.js',
                     'skins/Orcas/js/vendor/modernizr.js',
                     'skins/Orcas/js/vendor/placeholder.js']),
                   ('skins/Orcas/RSS',
                    ['skins/Orcas/RSS/weewx_rss.xml.tmpl']),
                   ]
            )
