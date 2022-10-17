/* WAP to multiply two matrices by returning an object from a function. */
#include <iostream>

using namespace std;

class Matrix {
    public:
        int rows;
        int cols;
        int **matrix;
        void display();
        void init_matrix();
        Matrix(int r, int c) {
            this->rows = r;
            this->cols = c;
            matrix = new int*[rows];
            for (int i = 0; i < rows; i++) {
                matrix[i] = new int[cols];
            }
        }
        ~Matrix() {
            for (int i = 0; i < rows; i++) {
                delete [] matrix[i];
            }
            delete [] matrix;
        }
};

void Matrix::init_matrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void Matrix::display() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}

Matrix * multiply_matrix(const Matrix& m1, const Matrix& m2) {
    Matrix * result = new Matrix(m1.rows, m2.cols);
    
    for (int i = 0; i < m1.rows; i++) {
        for (int j = 0; j < m2.cols; j++) {
            result->matrix[i][j] = 0;
            for (int k = 0; k < m1.cols; k++) {
                result->matrix[i][j] += m1.matrix[i][k] * m2.matrix[k][j];
            }
        }
    }
    return result;
}


int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows in matrix 1: ";
    cin >> rows1;
    cout << "Enter cols in matrix 1: ";
    cin >> cols1;
    cout << "Enter rows in matrix 2: ";
    cin >> rows2;
    cout << "Enter cols in matrix 2: ";
    cin >> cols2;

    Matrix m1(rows1, cols1), m2(rows2, cols2);
    Matrix result(m1.rows, m2.cols);
    
    cout << "Enter values for matrix 1: " << endl;
    m1.init_matrix();
    cout << "Enter values for matrix 2: " << endl;
    m2.init_matrix();

    cout << "MATRIX 1: " <<endl;
    m1.display();
    cout << endl;

    cout << "MATRIX 2: " << endl;
    m2.display();
    cout << endl;

    result = *(multiply_matrix(m1, m2));
    cout << "Product of matrix 1 and matrix 2: " << endl;
    result.display();
    
    return 0;
}