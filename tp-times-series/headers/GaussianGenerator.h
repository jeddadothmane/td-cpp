#ifndef GAUSSIANGENERATOR_H
#define GAUSSIANGENERATOR_H

#include "TimeSeriesGenerator.h"
#include <vector>

using namespace  std;

class GaussianGenerator : public TimeSeriesGenerator {
private:
    double mean;
    double stdDev;

public:
    GaussianGenerator();
    GaussianGenerator(double mean, double stdDev, int seed);

    vector<double> generateTimeSeries(int size) override;
};

#endif
