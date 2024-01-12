#include "headers/DTW.h"
#include <cmath>
#include <limits>
#include <vector>

using namespace std;

double DTW::compute(const vector<double>& x, const vector<double>& y) {
    int L_x = x.size();
    int L_y = y.size();
    vector<vector<double>> D(L_x + 1, vector<double>(L_y + 1, numeric_limits<double>::infinity()));

    D[0][0] = 0;

    for (int i = 1; i <= L_x; ++i) {
        for (int j = 1; j <= L_y; ++j) {
            double cost = pow(x[i - 1] - y[j - 1], 2);
            double min_value = D[i - 1][j];
            if (D[i][j - 1] < min_value) {
                min_value = D[i][j - 1];
            }
            if (D[i - 1][j - 1] < min_value) {
                min_value = D[i - 1][j - 1];
            }
            D[i][j] = cost + min_value;
        }
    }

    return sqrt(D[L_x][L_y]);
}