import React from "react";
import ChartBar from "./ChartBar";
import "./Chart.css";

const Chart = (props) => 
{
    const dataPointValues = props.dataPoints.map((dataPoint) => dataPoint.value);
    const maxOfValue = Math.max(...dataPointValues);

    return(
    <div className="chart">
        {props.dataPoints.map((dataPoint) =>
        <ChartBar
        key={dataPoint.label}
        value={dataPoint.value}
        maxValue={maxOfValue}
        label={dataPoint.label}
        />
        )}
    </div>)
}

export default Chart;