#ifndef SINWAVEGENERATOR_H
#define SINWAVEGENERATOR_H

#include "TimeSeriesGenerator.h"
#include <vector>

using namespace std;

class SinWaveGenerator : public TimeSeriesGenerator {
private:
    double amplitude;
    double frequency;
    double phase;

public:
    SinWaveGenerator();

    SinWaveGenerator(double amplitude, double frequency, double phase, int seed);

    vector<double> generateTimeSeries(int size) override;
};

#endif
