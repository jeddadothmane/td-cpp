#ifndef TIMESERIESDATASET_H
#define TIMESERIESDATASET_H

#include <vector>

using namespace std;

class TimeSeriesDataset {
private:
    bool znormalize;
    bool isTrain;
    vector<vector<double>> data;
    vector<int> labels;
    int maxLength;
    int numberOfSamples;

    void zNormalizeSeries(vector<double>& series);

public:
    //TimeSeriesDataset(bool znormalize, bool isTrain, int maxLength);
    TimeSeriesDataset(bool znormalize, bool isTrain);

    void addSeries(const vector<double>& series, int label);
    void printDataset() const;
    void addTimeSeries(const std::vector<double>& series, int label);

    void addTimeSeries(const vector<double> &series);
    const vector<std::vector<double>>& getData() const;
    const vector<int>& getLabels() const;

};

#endif
