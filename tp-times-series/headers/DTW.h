#ifndef DTW_H
#define DTW_H

#include <vector>

class DTW {
public:
    static double compute(const std::vector<double>& x, const std::vector<double>& y);
};

#endif