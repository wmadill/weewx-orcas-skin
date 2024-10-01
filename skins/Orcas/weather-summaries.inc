        <div class="row">
          <div class="small-12 large-4 columns">
            <h3>Monthly summary</h3>
            <select NAME=noaaselect onchange="openNoaaFile(value)">
            #for $monthYear in $SummaryByMonth
                <option value="$monthYear">$monthYear</option>
            #end for
                <option selected>-Select month-</option>
            </select>
          </div> <!-- End ".small-12 large-4" -->
        </div> <!-- End ".row" -->


        <div class="row">
          <div class="small-12 large-4 columns">
            <h3>Yearly summary</h3>
            <select NAME=noaaselect onchange="openNoaaFile(value)">
            #for $year in $SummaryByYear
                <option value="$year">$year</option>
            #end for
                <option selected>-Select year-</option>
            </select>
          </div> <!-- End ".small-12 large-4" -->
        </div> <!-- End ".row" -->
