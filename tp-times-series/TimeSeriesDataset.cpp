#include "headers/TimeSeriesDataset.h"
#include <iostream>
#include <numeric>
#include <algorithm>
#include <valarray>

using namespace std;

TimeSeriesDataset::TimeSeriesDataset(bool znormalize, bool isTrain)
        : znormalize(znormalize), isTrain(isTrain), maxLength(100), numberOfSamples(0) {}

void TimeSeriesDataset::zNormalizeSeries(vector<double>& series) {
    double mean = accumulate(series.begin(), series.end(), 0.0) / series.size();
    double sq_sum = inner_product(series.begin(), series.end(), series.begin(), 0.0);
    double stdev = sqrt(sq_sum / series.size() - mean * mean);

    for (double& value : series) {
        value = (value - mean) / stdev;
    }
}

void TimeSeriesDataset::addSeries(const vector<double>& series, int label) {
    vector<double> newSeries(series);
    if (newSeries.size() > maxLength) {
        newSeries.resize(maxLength);
    } else {
        newSeries.insert(newSeries.end(), maxLength - newSeries.size(), 0.0);
    }

    if (znormalize) {
        zNormalizeSeries(newSeries);
    }

    data.push_back(newSeries);
    labels.push_back(label);
    ++numberOfSamples;
}
void TimeSeriesDataset::printDataset() const {
    for (size_t i = 0; i < data.size(); ++i) {
        cout << "Series " << i << ": ";
        for (double value : data[i]) {
            cout << value << " ";
        }
        cout << "Label: " << labels[i] << endl;
    }
}

void TimeSeriesDataset::addTimeSeries(const std::vector<double>& series, int label) {
    data.push_back(series);
    labels.push_back(label);
}

void TimeSeriesDataset::addTimeSeries(const std::vector<double>& series) {
    data.push_back(series);
    labels.push_back(-1);
}
const std::vector<std::vector<double>>& TimeSeriesDataset::getData() const {
    return data;
}

const std::vector<int>& TimeSeriesDataset::getLabels() const {
    return labels;
}


