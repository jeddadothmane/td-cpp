#include "headers/TimeSeriesGenerator.h"
#include <iostream>

using namespace  std;

TimeSeriesGenerator::TimeSeriesGenerator() : seed(0) {}

TimeSeriesGenerator::TimeSeriesGenerator(int seed) : seed(seed) {}

void TimeSeriesGenerator::printTimeSeries(const vector<double>& series) {
    for (const auto& value : series) {
        cout << value << " ";
    }
    cout << endl;
}
