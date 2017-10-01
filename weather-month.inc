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
          </div> <!-- end .small-12 .large-4 -->

          <div class="small-12 large-8 columns">
            <h3>Monthly Statistics and Plots</h3>
            <img src="images/charts/monthtempdew.png" alt="temperatures" />
            <img src="images/charts/monthtempchill.png" alt="heatchill" />
            <img src="images/charts/monthrain.png" alt="rain" />
            <img src="images/charts/monthwind.png" alt="wind" />
            <img src="images/charts/monthbarometer.png" alt="barometer"/>
            <img src="images/charts/monthwinddir.png" alt="Hi Wind" />
            <img src="images/charts/monthinside.png" alt="Inside" />
            <img src="images/charts/monthwindvec.png" alt="Wind Vector" />
            #if $month.radiation.has_data
            <img src="images/charts/monthradiation.png" alt="Radiation" />
            #end if
            #if $month.rxCheckPercent.has_data
            <img src="images/charts/monthrx.png" alt="month rx percent"/>
            #end if

          </div> <!-- End ".small-12 large-6" -->
        </div> <!-- End ".row" -->
