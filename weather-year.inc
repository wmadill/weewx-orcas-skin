        <div class="row">
          <div class="small-12 large-4 columns">
            <h3>Calendar Year</h3>
            <table>
              <tbody>
                <tr>
                  <td class="stats_label">
                    High Temperature<br/>
                    Low Temperature
                  </td>
                  <td class="stats_data">
                    $year.outTemp.max at $year.outTemp.maxtime<br/>
                    $year.outTemp.min at $year.outTemp.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Heat Index
                  </td>
                  <td class="stats_data"> 
                    $year.heatindex.max at $year.heatindex.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    Low Wind Chill
                  </td>
                  <td class="stats_data"> 
                    $year.windchill.min at $year.windchill.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Humidity<br/>
                    Low Humidity
                  </td>
                  <td class="stats_data">
                    $year.outHumidity.max $year.outHumidity.maxtime<br/>
                    $year.outHumidity.min $year.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $year.dewpoint.max $year.dewpoint.maxtime<br/>
                    $year.dewpoint.min $year.dewpoint.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Barometer<br/>
                    Low Barometer
                  </td>
                  <td class="stats_data">
                    $year.barometer.max at $year.barometer.maxtime<br/>
                    $year.barometer.min at $year.barometer.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Rain Total
                  </td>
                  <td class="stats_data">
                    $year.rain.sum
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    High Rain Rate
                  </td>
                  <td class="stats_data">
                    $year.rainRate.max at $year.rainRate.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Wind Speed
                  </td>
                  <td class="stats_data">
                    $year.wind.max from $year.wind.gustdir at $year.wind.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Average Wind
                  </td>
                  <td class="stats_data">
                    $year.wind.avg
                  </td>
                </tr>
                
                <tr>
                  <td class="stats_label">
                    RMS Wind
                  </td>
                  <td class="stats_data">
                    $year.wind.rms
                  </td>
                </tr>

                <tr>
                  <td class="stats_label">
                    Vector Average Speed<br/>
                    Vector Average Direction
                  </td>
                  <td class="stats_data">
                    $year.wind.vecavg<br/>
                    $year.wind.vecdir
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Inside Temperature<br/>
                    Low Inside Temperature
                  </td>
                  <td class="stats_data">
                    $year.inTemp.max at $year.inTemp.maxtime<br/>
                    $year.inTemp.min at $year.inTemp.mintime
                  </td>
                </tr>
          #if $year.extraTemp1.has_data
                <tr>
                  <td class="stats_label">
                    High Pond Temperature<br/>
                    Low Pond Temperature
                  </td>
                  <td class="stats_data">
                    $year.extraTemp1.max at $year.extraTemp1.maxtime<br/>
                    $year.extraTemp1.min at $year.extraTemp1.mintime
                  </td>
                </tr>
                #end if
                #if $year.UV.has_data
                <tr>
                  <td class="stats_label">
                    High UV<br/>
                    Low UV
                  </td>
                  <td class="stats_data">
                    $year.UV.max at $year.UV.maxtime<br/>
                    $year.UV.min at $year.UV.mintime
                  </td>
                </tr>
                #end if
                #if $year.ET.has_data and $year.ET.sum.raw >0.0
                <tr>
                  <td class="stats_label">
                    High ET<br/>
                    Low ET
                  </td>
                  <td class="stats_data">
                    $year.ET.max at $year.ET.maxtime<br/>
                    $year.ET.min at $year.ET.mintime
                  </td>
                </tr>
                #end if
                #if $year.radiation.has_data
                <tr>
                  <td class="stats_label">
                    High Radiation<br/>
                    Low Radiation
                  </td>
                  <td class="stats_data">
                    $year.radiation.max at $year.radiation.maxtime<br/>
                    $year.radiation.min at $year.radiation.mintime
                  </td>
                </tr>
                #end if
              </tbody>
            </table>

            <p>&nbsp;</p>

            <h3>Rain Year (1-$station.rain_year_str start)</h3>
            <table>
              <tbody>
                <tr>
                  <td class="stats_label">
                    Rain Year Total
                  </td>
                  <td class="stats_data">
                    $rainyear.rain.sum
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    High Rain Rate
                  </td>
                  <td class="stats_data">
                    $rainyear.rainRate.max at $rainyear.rainRate.maxtime
                  </td>
                </tr>
              </tbody>
            </table>
          </div> <!-- end .small-12 .large-4 -->

          <div class="small-12 large-8 columns">
            <h3>Yearly Statistics and Plots</h3>
            <img src="yeartempdew.png" alt="temperatures" />
            <img src="yeartempchill.png" alt="heatchill" />
            <img src="yearhilow.png" alt="Daily highs and lows for the year" title="Daily highs and lows for the year"/>
            <img src="yearrain.png" alt="rain" />
            <img src="yearwind.png" alt="wind" />
            <img src="yearbarometer.png" alt="barometer"/>
            <img src="yearwinddir.png" alt="Hi Wind" />
            <img src="yearinside.png" alt="Inside" />
            <img src="yearwindvec.png" alt="Wind Vector" />
            #if $year.radiation.has_data
            <img src="yearradiation.png" alt="Radiation" />
            #end if
            #if $year.rxCheckPercent.has_data
            <img src="yearrx.png" alt="year rx percent"/>
            #end if
          </div> <!-- End ".small-12 large-6" -->
        </div> <!-- End ".row" -->
