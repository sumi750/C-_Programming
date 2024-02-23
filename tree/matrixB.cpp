#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        this->data = new double*[rows];
        for (int i = 0; i < rows; i++) {
            this->data[i] = new double[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < this->rows; i++) {
            delete[] this->data[i];
        }
        delete[] this->data;
    }

    double get(int row, int col) {
        return this->data[row][col];
    }

    void set(int row, int col, double value) {
        this->data[row][col] = value;
    }

    Matrix add(Matrix other) {
        Matrix result(this->rows, this->cols);
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->cols; j++) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix subtract(Matrix other) {
        Matrix result(this->rows, this->cols);
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->cols; j++) {
                result.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    Matrix multiply(Matrix other) {
        Matrix result(this->rows, other.cols);
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < this->cols; k++) {
                    result.data[i][j] += this->data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(this->cols, this->rows);
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->cols; j++) {
                result.data[j][i] = this->data[i][j];
            }
        }
        return result;
    }

public:
    int rows;
    int cols;
    double** data;
};

int main() {

    Matrix A(3, 3);
    A.set(0, 0, 1);
    A.set(0, 1, 2);
    A.set(0, 2, 3);
    A.set(1, 0, 4);
    A.set(1, 1, 5);
    A.set(1, 2, 6);
    A.set(2, 0, 7);
    A.set(2, 1, 8);
    A.set(2, 2, 9);

    Matrix B(3, 3);
    B.set(0, 0, 10);
    B.set(0, 1, 11);
    B.set(0, 2, 12);
    B.set(1, 0, 13);
    B.set(1, 1, 14);
    B.set(1, 2, 15);
    B.set(2, 0, 16);
    B.set(2, 1, 17);
    B.set(2, 2, 18);

    cout<<"Addition of matrix:"<<endl;
    Matrix C = A.add(B);

    for (int i = 0; i < C.rows; i++) {
        for (int j = 0; j < C.cols; j++) {
            cout << C.get(i, j) << " ";
        }
        cout << endl;
    }

    cout<<"Subtraction of matrix:"<<endl;
    Matrix D = A.subtract(B);

    for (int i = 0; i < C.rows; i++) {
        for (int j = 0; j < C.cols; j++) {
            cout << C.get(i, j) << " ";
        }
        cout << endl;
    }

    cout<<"Multiplication  of matrix:"<<endl;
    Matrix E = A.multiply(B);

    for (int i = 0; i < C.rows; i++) {
        for (int j = 0; j < C.cols; j++) {
            cout << C.get(i, j) << " ";
        }
        cout << endl;
    }
    

    return 0;
}
