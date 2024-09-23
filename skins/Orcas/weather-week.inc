        <div class="row">
          <div class="small-12 large-5 columns">
            <h3>This Week</h3>
            <table>
              <tbody>
                <tr>
                  <td class="stats_label">
                    High Temperature<br/>
                    Low Temperature
                  </td>
                  <td class="stats_data">
                    $week.outTemp.max at $week.outTemp.maxtime<br/>
                    $week.outTemp.min at $week.outTemp.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Heat Index
                  </td>
                  <td class="stats_data"> 
                    $week.heatindex.max at $week.heatindex.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    Low Wind Chill
                  </td>
                  <td class="stats_data"> 
                    $week.windchill.min at $week.windchill.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Humidity<br/>
                    Low Humidity
                  </td>
                  <td class="stats_data">
                    $week.outHumidity.max at $week.outHumidity.maxtime<br/>
                    $week.outHumidity.min at $week.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $week.dewpoint.max at $week.dewpoint.maxtime<br/>
                    $week.dewpoint.min at $week.dewpoint.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Barometer<br/>
                    Low Barometer
                  </td>
                  <td class="stats_data">
                    $week.barometer.max at $week.barometer.maxtime<br/>
                    $week.barometer.min at $week.barometer.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Rain Total
                  </td>
                  <td class="stats_data">
                    $week.rain.sum
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    High Rain Rate
                  </td>
                  <td class="stats_data">
                    $week.rainRate.max at $week.rainRate.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Wind Speed
                  </td>
                  <td class="stats_data">
                    $week.wind.max from $week.wind.gustdir at $week.wind.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Average Wind
                  </td>
                  <td class="stats_data">
                    $week.wind.avg
                  </td>
                </tr>
                
                <tr>
                  <td class="stats_label">
                    RMS Wind
                  </td>
                  <td class="stats_data">
                    $week.wind.rms
                  </td>
                </tr>

                <tr>
                  <td class="stats_label">
                    Vector Average Speed<br/>
                    Vector Average Direction
                  </td>
                  <td class="stats_data">
                    $week.wind.vecavg<br/>
                    $week.wind.vecdir
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Inside Temperature<br/>
                    Low Inside Temperature
                  </td>
                  <td class="stats_data">
                    $week.inTemp.max at $week.inTemp.maxtime<br/>
                    $week.inTemp.min at $week.inTemp.mintime
                  </td>
                </tr>
                #if $week.ET.has_data and $week.ET.sum.raw > 0.0
                <tr>
                  <td class="stats_label">
                    High ET<br/>
                    Low ET
                  </td>
                  <td class="stats_data">
                    $week.ET.max at $week.ET.maxtime<br/>
                    $week.ET.min at $week.ET.mintime
                  </td>
                </tr>
                #end if
                #if $week.radiation.has_data
                <tr>
                  <td class="stats_label">
                    High Radiation<br/>
                    Low Radiation
                  </td>
                  <td class="stats_data">
                    $week.radiation.max at $week.radiation.maxtime<br/>
                    $week.radiation.min at $week.radiation.mintime
                  </td>
                </tr>
                #end if
              </tbody>
            </table>
          </div> <!-- end .small-12 .large-4 -->

          <div class="small-12 large-7 columns">
            <h3>Weekly Statistics and Plots</h3>
            <img src="images/charts/weektempdew.png" alt="temperatures" />
            <img src="images/charts/weektempchill.png" alt="heatchill" />
            <img src="images/charts/weekrain.png" alt="rain" />
            <img src="images/charts/weekwind.png" alt="wind" />
            <img src="images/charts/weekbarometer.png" alt="barometer"/>
            <img src="images/charts/weekwinddir.png" alt="Hi Wind" />
            <img src="images/charts/weekinside.png" alt="Inside" />
            <img src="images/charts/weekwindvec.png" alt="Wind Vector" />
            #if $week.radiation.has_data
            <img src="images/charts/weekradiation.png" alt="Radiation" />
            #end if
            #if $week.rxCheckPercent.has_data
            <img src="images/charts/weekrx.png" alt="week rx percent"/>
            #end if
          </div> <!-- End ".small-12 large-6" -->
        </div> <!-- End ".row" -->
