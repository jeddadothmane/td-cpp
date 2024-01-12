#ifndef KNN_H
#define KNN_H

#include <string>
#include <vector>
#include "TimeSeriesDataset.h"

class KNN {
private:
    int k;
    std::string similarity_measure;

public:
    KNN(int k, const std::string& similarity_measure);

/*
    double evaluate(const std::vector<std::vector<double>>& trainData,
                    const std::vector<int>& trainLabels,
                    const std::vector<std::vector<double>>& testData,
                    const std::vector<int>& testLabels);
*/

    double evaluate(const TimeSeriesDataset& trainData,
                         const TimeSeriesDataset& testData,
                         const std::vector<int>& ground_truth) ;

};

#endif
