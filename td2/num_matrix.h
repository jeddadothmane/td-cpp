//
// Created by pc on 10/12/2023.
//

// num_matrix.h
#ifndef NUM_MATRIX_H
#define NUM_MATRIX_H

#include "matrix.h"
#include<cmath>
#include <stdexcept>
#include<iostream>

using namespace std;

template<typename T>
class MatrixNumerical : public MatrixBase<T> {
public:
    MatrixNumerical(size_t r, size_t c) : MatrixBase<T>(r, c) {}

    T getDeterminant() const {
        if (this->getRows() != this->getCols()) {
            throw invalid_argument("Matrix must be square to calculate determinant");
        }
        if (this->getRows() == 1) {
            return this->getElement(0, 0);
        }
        if (this->getRows() == 2) {
            return this->getElement(0, 0) * this->getElement(1, 1) - this->getElement(0, 1) * this->getElement(1, 0);
        }
        T det = 0;
        for (size_t i = 0; i < this->getCols(); i++) {
            det += pow(-1, i) * this->getElement(0, i) * getCoFactor(0, i).getDeterminant();
        }
        return det;
    }

    MatrixNumerical<T> getInverse() const {
        T det = this->getDeterminant();
        if (det == 0) {
            throw invalid_argument("Matrix must be invertible to calculate inverse");
        }
        MatrixNumerical<T> cofactor(*this);
        for (size_t i = 0; i < this->getRows(); i++) {
            for (size_t j = 0; j < this->getCols(); j++) {
                cofactor.addElement(i, j, getCoFactor(i, j).getDeterminant() * pow(-1, i + j));
            }
        }
        return cofactor * (1 / det);
    }

    MatrixNumerical<T> operator+(const MatrixNumerical<T>& other) const {
        if (this->getRows() != other.getRows() || this->getCols() != other.getCols()) {
            throw invalid_argument("Matrices must have the same size to add");
        }
        MatrixNumerical<T> result(this->getRows(), this->getCols());
        for (size_t i = 0; i < this->getRows(); i++) {
            for (size_t j = 0; j < this->getCols(); j++) {
                result.addElement(i, j, this->getElement(i, j) + other.getElement(i, j));
            }
        }
        return result;
    }

    MatrixNumerical<T> operator-(const MatrixNumerical<T>& other) const {
        if (this->getRows() != other.getRows() || this->getCols() != other.getCols()) {
            throw invalid_argument("Matrices must have the same size to subtract");
        }
        MatrixNumerical<T> result(this->getRows(), this->getCols());
        for (size_t i = 0; i < this->getRows(); i++) {
            for (size_t j = 0; j < this->getCols(); j++) {
                result.addElement(i, j, this->getElement(i, j) - other.getElement(i, j));
            }
        }
        return result;
    }

    MatrixNumerical<T> operator*(const MatrixNumerical<T>& other) const {
        if (this->getCols() != other.getRows()) {
            throw invalid_argument("Number of columns in first matrix must match number of rows in second matrix to multiply");
        }
        MatrixNumerical<T> result(this->getRows(), other.getCols());
        for (size_t i = 0; i < this->getRows(); i++) {
            for (size_t j = 0; j < other.getCols(); j++) {
                T sum = 0;
                for (size_t k = 0; k < this->getCols(); k++) {
                    sum += this->getElement(i, k) * other.getElement(k, j);
                }
                result.addElement(i, j, sum);
            }
        }
        return result;
    }
    MatrixNumerical<T> operator*(const double& scalar) const {
        MatrixNumerical<T> result(this->getRows(), this->getCols());
        for (size_t i = 0; i < this->getRows(); i++) {
            for (size_t j = 0; j < this->getCols(); j++) {
                result.addElement(i, j, this->getElement(i, j) * scalar);
            }
        }
        return result;
    }
    MatrixNumerical<T> operator/(const MatrixNumerical<T>& other) const {
        return *this * other.getInverse();
    }

    static MatrixNumerical<T> getIdentity(size_t size) {
        MatrixNumerical<T> result(size, size);
        for (size_t i = 0; i < size; i++) {
            result.addElement(i, i, 1);
        }
        return result;
    }

    void Display() const override {
        for (size_t i = 0; i < this->getRows(); i++) {
            for (size_t j = 0; j < this->getCols(); j++) {
                cout << this->getElement(i, j) << " ";
            }
            cout << endl;
        }
    }

private:
    MatrixNumerical<T> getCoFactor(size_t row, size_t col) const {
        MatrixNumerical<T> cofactor(this->getRows() - 1, this->getCols() - 1);
        size_t r = 0, c = 0;
        for (size_t i = 0; i < this->getRows(); i++) {
            if (i == row) continue;
            c = 0;
            for (size_t j = 0; j < this->getCols(); j++) {
                if (j == col) continue;
                cofactor.addElement(r, c, this->getElement(i, j));
                c++;
            }
            r++;
        }
        return cofactor;
    }
};

#endif // NUM_MATRIX_H