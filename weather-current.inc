        <div class="row">
          <div class="small-12 medium-4 large-4 columns">
            <h3>Current Conditions</h3>
            <table>
              <tbody>
                <tr>
                  <td class="stats_label">Outside Temperature</td>
                  <td class="stats_data">$current.outTemp</td>
                </tr>
                <tr>
                  <td class="stats_label">Wind Chill</td>
                  <td class="stats_data">$current.windchill</td>
                </tr>
                <tr>
                  <td class="stats_label">Heat Index</td>
                  <td class="stats_data">$current.heatindex</td>
                </tr>
                <tr>
                  <td class="stats_label">Dewpoint</td>
                  <td class="stats_data">$current.dewpoint</td>
                </tr>
                <tr>
                  <td class="stats_label">Humidity</td>
                  <td class="stats_data">$current.outHumidity</td>
                </tr>
                <tr>
                  <td class="stats_label">Barometer</td>
                  <td class="stats_data">$current.barometer</td>
                </tr>
                <tr>
                  <td class="stats_label">Barometer Trend ($trend.time_delta.hour.format("%.0f"))</td>
                  <td class="stats_data">$trend.barometer</td>
                </tr>
                <tr>
                  <td class="stats_label">Wind</td>
                  <td class="stats_data">$current.windSpeed from $current.windDir ($current.windDir.ordinal_compass)</td>
                </tr>
                <tr>
                  <td class="stats_label">Rain Rate</td>
                  <td class="stats_data">$current.rainRate</td>
                </tr>
                <tr>
                  <td class="stats_label">Inside Temperature</td>
                  <td class="stats_data">$current.inTemp</td>
                </tr>
                #if $day.ET.has_data and $day.ET.sum.raw > 0.0
                <tr>
                  <td class="stats_label">ET</td>
                  <td class="stats_data">$current.ET</td>
                </tr>
                #end if
                #if $day.radiation.has_data
                <tr>
                  <td class="stats_label">Solar Radiation</td>
                  <td class="stats_data">$current.radiation</td>
                </tr>
                #end if
              </tbody>
            </table>

            <p>&nbsp;</p>

            <h3>Since Midnight</h3>
            <table>
              <tbody>
                <tr>
                  <td class="stats_label">
                    High Temperature<br/>
                    Low Temperature
                  </td>
                  <td class="stats_data">
                    $day.outTemp.max at $day.outTemp.maxtime<br/>
                    $day.outTemp.min at $day.outTemp.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Heat Index<br/>
                    Low Wind Chill
                  </td>
                  <td class="stats_data">
                    $day.heatindex.max at $day.heatindex.maxtime<br/>
                    $day.windchill.min at $day.windchill.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Humidity<br/>
                    Low Humidity
                  </td>
                  <td class="stats_data">
                    $day.outHumidity.max at $day.outHumidity.maxtime<br/>
                    $day.outHumidity.min at $day.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $day.dewpoint.max at $day.dewpoint.maxtime<br/>
                    $day.dewpoint.min at $day.dewpoint.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Barometer<br/>
                    Low Barometer
                  </td>
                  <td class="stats_data">
                    $day.barometer.max at $day.barometer.maxtime<br/>
                    $day.barometer.min at $day.barometer.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">Today's Rain</td>
                  <td class="stats_data">$day.rain.sum</td>
                </tr>
                <tr>
                  <td class="stats_label">High Rain Rate</td>
                  <td class="stats_data">$day.rainRate.max at $day.rainRate.maxtime</td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Wind
                  </td>
                  <td class="stats_data">
                    $day.wind.max from $day.wind.gustdir at $day.wind.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Average Wind
                  </td>
                  <td class="stats_data">
                    $day.wind.avg
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    RMS Wind
                  </td>
                  <td class="stats_data">
                    $day.wind.rms
                  </td>
                </tr>

                <tr>
                  <td class="stats_label">
                    Vector Average Speed<br/>
                    Vector Average Direction
                  </td>
                  <td class="stats_data">
                    $day.wind.vecavg<br/>
                    $day.wind.vecdir
                  </td>
                </tr>

                <tr>
                  <td class="stats_label">
                    High Inside Temperature<br/>
                    Low Inside Temperature
                  </td>
                  <td class="stats_data">
                    $day.inTemp.max at $day.inTemp.maxtime<br/>
                    $day.inTemp.min at $day.inTemp.mintime
                  </td>
                </tr>
                #if $day.ET.has_data and $day.ET.sum.raw >0.0
                <tr>
                  <td class="stats_label">
                    High ET<br/>
                    Low ET
                  </td>
                  <td class="stats_data">
                    $day.ET.max at $day.ET.maxtime<br/>
                    $day.ET.min at $day.ET.mintime
                  </td>
                </tr>
                #end if
                #if $day.radiation.has_data
                <tr>
                  <td class="stats_label">
                    High Radiation<br/>
                    Low Radiation
                  </td>
                  <td class="stats_data">
                    $day.radiation.max at $day.radiation.maxtime<br/>
                    $day.radiation.min at $day.radiation.mintime
                  </td>
                </tr>
                #end if
              </tbody>
            </table>

            <p>&nbsp;</p>

          #if $Extras.has_key('radar_img')
            <div id="radar_img">
              #if $Extras.has_key('radar_url')
              <a  href="$Extras.radar_url">
              #end if
                <img src="$Extras.radar_img" alt="Radar" />
              #if $Extras.has_key('radar_url')
              </a>
              <p>Click image for expanded radar loop</p>
              #end if
            </div>
          #end if
          </div> <!-- end .small-12 .medium-4 .large-4 -->

          <div class="small-12 medium-8 large-8 columns">
<h3>Daily Plots</h3>
            <img src="daytempdew.png"   alt="temperatures" />
            <img src="daytempchill.png" alt="heatchill" />
            <img src="dayrain.png"      alt="rain" />
            <img src="daywind.png"      alt="wind" />
            <img src="daybarometer.png" alt="barometer"/>
            <img src="daywinddir.png"   alt="Hi Wind" />
            <img src="dayinside.png"    alt="Inside" />
            <img src="daywindvec.png"   alt="Wind Vector" />
            #if $day.radiation.has_data
            <img src="dayradiation.png" alt="Radiation" />
            #end if
            #if $day.rxCheckPercent.has_data
            <img src="dayrx.png"        alt="day rx percent"/>
            #end if
          </div> <!-- End ".small-12 medium-8 large-6" -->
        </div> <!-- End ".row" -->
