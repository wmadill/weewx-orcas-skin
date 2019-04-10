#errorCatcher Echo
#encoding UTF-8
<!doctype html>
<html class="no-js" lang="en">
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>$station.location $title</title>
    <link rel="stylesheet" href="css/normalize.css" />
    <link rel="stylesheet" href="css/foundation.css" />
    <link rel="stylesheet" href="css/app.css" />
    <!-- <link rel="icon" type="image/png" href="favicon.ico" /> -->
    <script src="js/vendor/modernizr.js"></script>
    <script type="text/javascript">
      function openNoaaFile(date) {
        var url = "NOAA/NOAA-";
        url = url + date;
        url = url + ".txt";
        window.location=url;
      }
    </script>
  </head>
  <body>
    <nav class="top-bar" data-topbar role="navigation">
      <ul class="title-area">
        <li class="name">
          <h1><a href="index.html">$station.location</a></h1>
        </li>
        <li class="toggle-topbar menu-icon"><a href=""><span></span></a></li>
      </ul>

      <section class="top-bar-section">
        <ul class="right">
          <li><a href="index.html">Weather</a></li>
          <li><a href="forecast.html">Forecast</a></li>
          <li><a href="almanac.html">Almanac</a></li>
          <li><a href="about.html">About</a></li>
        </ul>
      </section>
    </nav>

    <div class="row">
      <div class="small-12 columns">
        <h1>$title</h1>
