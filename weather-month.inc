        <div class="row">
          <div class="small-12 large-4 columns">
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
                    $month.outHumidity.max $month.outHumidity.maxtime<br/>
                    $month.outHumidity.min $month.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $month.dewpoint.max $month.dewpoint.maxtime<br/>
                    $month.dewpoint.min $month.dewpoint.mintime
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
                </tr>
                
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
          #if $month.extraTemp1.has_data
                <tr>
                  <td class="stats_label">
                    High Pond Temperature<br/>
                    Low Pond Temperature
                  </td>
                  <td class="stats_data">
                    $month.extraTemp1.max at $month.extraTemp1.maxtime<br/>
                    $month.extraTemp1.min at $month.extraTemp1.mintime
                  </td>
                </tr>
                #end if
                #if $month.UV.has_data
                <tr>
                  <td class="stats_label">
                    High UV<br/>
                    Low UV
                  </td>
                  <td class="stats_data">
                    $month.UV.max at $month.UV.maxtime<br/>
                    $month.UV.min at $month.UV.mintime
                  </td>
                </tr>
                #end if
                #if $month.ET.has_data and $month.ET.sum.raw > 0.0
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

            <p>&nbsp;</p>

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
                    $year.outHumidity.max at $year.outHumidity.maxtime<br/>
                    $year.outHumidity.min at $year.outHumidity.mintime
                  </td>
                </tr>
                <tr>
                  <td class="stats_label">
                    High Dewpoint<br/>
                    Low Dewpoint
                  </td>
                  <td class="stats_data">
                    $year.dewpoint.max at $year.dewpoint.maxtime<br/>
                    $year.dewpoint.min at $year.dewpoint.mintime
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
                </td>
                
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
          </div> <!-- end .small-12 .large-4 -->

          <div class="small-12 large-8 columns">
            <h3>Monthly Statistics and Plots</h3>
            <img src="monthtempdew.png" alt="temperatures" />
            <img src="monthtempchill.png" alt="heatchill" />
            <img src="monthrain.png" alt="rain" />
            <img src="monthwind.png" alt="wind" />
            <img src="monthbarometer.png" alt="barometer"/>
            <img src="monthwinddir.png" alt="Hi Wind" />
            <img src="monthinside.png" alt="Inside" />
            <img src="monthwindvec.png" alt="Wind Vector" />
            #if $month.radiation.has_data
            <img src="monthradiation.png" alt="Radiation" />
            #end if
            #if $month.rxCheckPercent.has_data
            <img src="monthrx.png" alt="month rx percent"/>
            #end if

          </div> <!-- End ".small-12 large-6" -->
        </div> <!-- End ".row" -->
