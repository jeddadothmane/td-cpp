#include "headers/KNN.h"
#include "headers/euclidean_distance.h"
#include "headers/DTW.h"
#include "headers/TimeSeriesDataset.h"
#include <map>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

KNN::KNN(int k, const string& similarity_measure)
        : k(k), similarity_measure(similarity_measure) {}

/*double KNN::evaluate(const vector<vector<double>>& trainData,
                     const vector<int>& trainLabels,
                     const vector<vector<double>>& testData,
                     const vector<int>& testLabels) {
    int correctCount = 0;

    for (size_t i = 0; i < testData.size(); ++i) {
        priority_queue<pair<double, int>> neighbors;
        for (size_t j = 0; j < trainData.size(); ++j) {
            double distance;
            if (similarity_measure == "euclidean") {
                distance = euclidean_distance(testData[i], trainData[j]);
            } else if (similarity_measure == "dtw") {
                distance = DTW::compute(testData[i], trainData[j]);
            }

            if (neighbors.size() < k || distance < neighbors.top().first) {
                if (neighbors.size() == k) neighbors.pop();
                neighbors.emplace(distance, trainLabels[j]);
            }
        }

        map<int, int> counts;
        while (!neighbors.empty()) {
            int neighborLabel = neighbors.top().second;
            neighbors.pop();
            counts[neighborLabel]++;
        }

        int predictedLabel = max_element(
                counts.begin(), counts.end(),
                [](const pair<int, int>& a, const pair<int, int>& b) {
                    return a.second < b.second;
                })->first;

        if (predictedLabel == testLabels[i]) {
            correctCount++;
        }
    }

    return static_cast<double>(correctCount) / testLabels.size();
}*/

double KNN::evaluate(const TimeSeriesDataset& trainData,
                     const TimeSeriesDataset& testData,
                     const std::vector<int>& ground_truth) {
    int correctPredictions = 0;

    // Retrieve the training and test data and labels from the TimeSeriesDataset objects
    const std::vector<std::vector<double>>& trainSeries = trainData.getData();
    const std::vector<int>& trainLabels = trainData.getLabels();
    const std::vector<std::vector<double>>& testSeries = testData.getData();

    for (size_t i = 0; i < testSeries.size(); ++i) {
        std::priority_queue<std::pair<double, int>,
                std::vector<std::pair<double, int>>,
                std::greater<std::pair<double, int>>> neighbors;

        for (size_t j = 0; j < trainSeries.size(); ++j) {
            double distance;
            if (similarity_measure == "euclidean") {
                distance = euclidean_distance(testSeries[i], trainSeries[j]);
            } else {
                distance = euclidean_distance(testSeries[i], trainSeries[j]);
            }

            neighbors.emplace(distance, trainLabels[j]);

            if (neighbors.size() > k) {
                neighbors.pop();
            }
        }

        std::map<int, int> labelCounts;
        while (!neighbors.empty()) {
            int neighborLabel = neighbors.top().second;
            neighbors.pop();
            labelCounts[neighborLabel]++;
        }

        int predictedLabel = std::max_element(
                labelCounts.begin(), labelCounts.end(),
                [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                    return a.second < b.second;
                })->first;

        if (predictedLabel == ground_truth[i]) {
            correctPredictions++;
        }
    }

    return static_cast<double>(correctPredictions) / testSeries.size();
}

