
      </div> <!-- .small-12 -->
    </div> <!-- .row -->

    ## Include the Google Analytics code if the user has supplied an ID:
    #if $Extras.has_key('googleAnalyticsId')
    <script type="text/javascript">
        var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
        document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
    </script>
    <script type="text/javascript">
        try{
            var pageTracker = _gat._getTracker("$Extras.googleAnalyticsId");
            pageTracker._trackPageview();
        } catch(err) {}
    </script>
    #end if

    <script>
    <!-- test if specified directory exists and if not, create -->
    <!-- for now just assume it exists -->
function openNOAAFile(date) {
    if (date.match(/^\d\d\d\d/)) {
        window.location = "NOAA/NOAA-" + date + ".txt";
    }
}
</script>
    <script src="js/vendor/jquery.js"></script>
    <script src="js/foundation.min.js"></script>
    <script>
      \$(document).foundation();
    </script>
  </body>
</html>
