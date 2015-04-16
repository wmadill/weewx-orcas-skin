        <div class="row">
          <div class="small-12 large-4 columns">
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
                    $week.outHumidity.max $week.outHumidity.maxtime<br/>
                    $week.outHumidity.min $week.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $week.dewpoint.max $week.dewpoint.maxtime<br/>
                    $week.dewpoint.min $week.dewpoint.mintime
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

            <p>&nbsp;</p>

            <h3>This Month</h3>
            <table>
              <tbody>
                <tr>
                  <td class="stats_label">
                    High Temperature<br/>
                    Low Temperature
                  </td>
                  <td class="stats_data">
                    $month.outTemp.max at $month.outTemp.maxtime<br/>
                    $month.outTemp.min at $month.outTemp.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Heat Index
                  </td>
                  <td class="stats_data"> 
                    $month.heatindex.max at $month.heatindex.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    Low Wind Chill
                  </td>
                  <td class="stats_data"> 
                    $month.windchill.min at $month.windchill.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Humidity<br/>
                    Low Humidity
                  </td>
                  <td class="stats_data">
                    $month.outHumidity.max at $month.outHumidity.maxtime<br/>
                    $month.outHumidity.min at $month.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $month.dewpoint.max at $month.dewpoint.maxtime<br/>
                    $month.dewpoint.min at $month.dewpoint.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Barometer<br/>
                    Low Barometer
                  </td>
                  <td class="stats_data">
                    $month.barometer.max at $month.barometer.maxtime<br/>
                    $month.barometer.min at $month.barometer.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Rain Total
                  </td>
                  <td class="stats_data">
                    $month.rain.sum
                  </td>
                </tr>
                <tr>
                  <td class="stats_label"> 
                    High Rain Rate
                  </td>
                  <td class="stats_data">
                    $month.rainRate.max at $month.rainRate.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Wind Speed
                  </td>
                  <td class="stats_data">
                    $month.wind.max from $month.wind.gustdir at $month.wind.maxtime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Average Wind
                  </td>
                  <td class="stats_data">
                    $month.wind.avg
                  </td>
                </td>
                
                <tr>
                  <td class="stats_label">
                    RMS Wind
                  </td>
                  <td class="stats_data">
                    $month.wind.rms
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    Vector Average Speed<br/>
                    Vector Average Direction
                  </td>
                  <td class="stats_data">
                    $month.wind.vecavg<br/>
                    $month.wind.vecdir
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Inside Temperature<br/>
                    Low Inside Temperature
                  </td>
                  <td class="stats_data">
                    $month.inTemp.max at $month.inTemp.maxtime<br/>
                    $month.inTemp.min at $month.inTemp.mintime
                  </td>
                </tr>
                #if $month.ET.has_data and $month.ET.sum.raw >0.0
                <tr>
                  <td class="stats_label">
                    High ET<br/>
                    Low ET
                  </td>
                  <td class="stats_data">
                    $month.ET.max at $month.ET.maxtime<br/>
                    $month.ET.min at $month.ET.mintime
                  </td>
                </tr>
                #end if
                #if $month.radiation.has_data
                <tr>
                  <td class="stats_label">
                    High Radiation<br/>
                    Low Radiation
                  </td>
                  <td class="stats_data">
                    $month.radiation.max at $month.radiation.maxtime<br/>
                    $month.radiation.min at $month.radiation.mintime
                  </td>
                </tr>
                #end if
              </tbody>
            </table>
          </div> <!-- end .small-12 .large-4 -->

          <div class="small-12 large-8 columns">
            <h3>Weekly Statistics and Plots</h3>
            <img src="weektempdew.png" alt="temperatures" />
            <img src="weektempchill.png" alt="heatchill" />
            <img src="weekrain.png" alt="rain" />
            <img src="weekwind.png" alt="wind" />
            <img src="weekbarometer.png" alt="barometer"/>
            <img src="weekwinddir.png" alt="Hi Wind" />
            <img src="weekinside.png" alt="Inside" />
            <img src="weekwindvec.png" alt="Wind Vector" />
            #if $week.radiation.has_data
            <img src="weekradiation.png" alt="Radiation" />
            #end if
            #if $week.rxCheckPercent.has_data
            <img src="weekrx.png" alt="week rx percent"/>
            #end if
          </div> <!-- End ".small-12 large-6" -->
        </div> <!-- End ".row" -->
