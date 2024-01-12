cmake_minimum_required(VERSION 3.27)
project(tp_times_series)

set(CMAKE_CXX_STANDARD 17)

add_executable(tp_times_series main.cpp
        headers/TimeSeriesGenerator.h
        TimeSeriesGenerator.cpp
        headers/GaussianGenerator.h
        GaussianGenerator.cpp
        headers/StepGenerator.h
        StepGenerator.cpp
        headers/SinWaveGenerator.h
        SinWaveGenerator.cpp
        headers/TimeSeriesDataset.h
        TimeSeriesDataset.cpp
        headers/euclidean_distance.h
        euclidean_distance.cpp
        headers/DTW.h
        DTW.cpp
        headers/KNN.h
        KNN.cpp)
