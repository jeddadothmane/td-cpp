#include "headers/euclidean_distance.h"
#include <cmath>
#include <stdexcept>

using namespace std;

double euclidean_distance(const vector<double>& x, const vector<double>& y) {
    if (x.size() != y.size()) {
        throw invalid_argument("Les séries doivent avoir la même taille.");
    }

    double sum_of_squares = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        sum_of_squares += (x[i] - y[i]) * (x[i] - y[i]);
    }

    return sqrt(sum_of_squares);
}
