#include "headers/GaussianGenerator.h"
#include <random>

using namespace  std;

GaussianGenerator::GaussianGenerator()
        : TimeSeriesGenerator(), mean(), stdDev() {}

GaussianGenerator::GaussianGenerator(double mean, double stdDev, int seed)
        : TimeSeriesGenerator(seed), mean(mean), stdDev(stdDev) {}

// Implémentation de generateTimeSeries en utilisant la méthode de Box-Muller
vector<double> GaussianGenerator::generateTimeSeries(int size) {
    vector<double> series;
    series.reserve(size);

    mt19937 generator(seed);
    normal_distribution<double> distribution(mean, stdDev);

    for (int i = 0; i < size; ++i) {
        double value = distribution(generator);
        series.push_back(value);
    }

    return series;
}
