#include "headers/SinWaveGenerator.h"
#include <cmath>

using namespace std;

SinWaveGenerator::SinWaveGenerator()
        : TimeSeriesGenerator(), amplitude(), frequency(), phase() {}

SinWaveGenerator::SinWaveGenerator(double amplitude, double frequency, double phase, int seed)
        : TimeSeriesGenerator(seed), amplitude(amplitude), frequency(frequency), phase(phase) {}

vector<double> SinWaveGenerator::generateTimeSeries(int size) {
    vector<double> series(size, 0);

    for (int i = 0; i < size; ++i) {
        series[i] = amplitude * sin(frequency * i + phase);
    }

    return series;
}
