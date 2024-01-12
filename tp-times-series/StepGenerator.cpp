#include "headers/StepGenerator.h"
#include <random>

using namespace std;

StepGenerator::StepGenerator() = default;

StepGenerator::StepGenerator(int seed) : TimeSeriesGenerator(seed) {}


vector<double> StepGenerator::generateTimeSeries(int size) {
    vector<double> series(size, 0);
    mt19937 generator(seed);
    uniform_int_distribution<int> distribution(0, 100);
    bernoulli_distribution coinFlip(0.5);

    for (int i = 1; i < size; ++i) {
        if (coinFlip(generator)) {
            series[i] = series[i - 1];
        } else {
            series[i] = distribution(generator);
        }
    }

    return series;
}



