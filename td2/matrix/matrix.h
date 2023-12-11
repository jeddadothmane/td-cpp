//
// Created by pc on 09/12/2023.
//

// matrix.h
#ifndef MATRIX_H
#define MATRIX_H

#include<vector>
#include <cstddef>

template<typename T>
class MatrixBase {
protected:
    std::vector<std::vector<T>> data;
    size_t rows, cols;

public:
    MatrixBase(size_t r, size_t c) : rows(r), cols(c) {
        data.resize(rows);
        for (size_t i = 0; i < rows; i++) {
            data[i].resize(cols);
        }
    }

    void addElement(size_t r, size_t c, T val) {
        data[r][c] = val;
    }

    T getElement(size_t r, size_t c) const {
        return data[r][c];
    }

    size_t getRows() const {
        return rows;
    }

    size_t getCols() const {
        return cols;
    }

    virtual void Display() const = 0;
};

#endif // MATRIX_H