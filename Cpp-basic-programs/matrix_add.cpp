/*PRogram to add two matrices using functions */
#include <iostream>

using namespace std;

int ** allocate_matrix (int rows, int cols) {
    int ** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

void dealloc_matrix (int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete [] matrix[i];
    }
    delete [] matrix;
}

void display_matrix (int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " \t";
        }
        cout << endl;
    }
}

int ** add_matrices (int ** m1, int ** m2, int rows, int cols) {
    int **result = allocate_matrix(rows, cols);
    for (int i = 0; i< rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return result;
}

void fill_values(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

int main() {
    int **m1, **m2, **result;
    int rows, cols;

    cout << "Enter rows of the matrices: ";
    cin >> rows;
    cout << "Enter cols of the matrices: ";
    cin >> cols;

    m1 = allocate_matrix(rows, cols);
    m2 = allocate_matrix(rows, cols);

    cout << "Fill matrix 1 values: \n";
    fill_values(m1, rows, cols);
    cout << "Fill matrix 2 values: \n";
    fill_values(m2, rows, cols);

    result = add_matrices(m1, m2, rows, cols);

    cout << "Given matrices: " << endl;
    cout << "MATRIX 1" << endl;
    display_matrix(m1 ,rows, cols);
    cout << endl;
    cout << "MATRIX 2" << endl;
    display_matrix(m2 ,rows, cols);
    cout << endl;
    cout << "SUM OF MATRICES: " << endl;
    display_matrix(result, rows, cols);

    dealloc_matrix(m1, rows);
    dealloc_matrix(m2, rows);
    dealloc_matrix(result, rows);

    return 0;
}