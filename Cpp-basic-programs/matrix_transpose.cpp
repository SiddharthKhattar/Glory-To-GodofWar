/*Program to find transpose of a matrix */
#include <iostream>

using namespace std;

int ** allocate_matrix (int rows, int cols);
void display_matrix (int **matrix, int rows, int cols);

int ** allocate_matrix (int rows, int cols) {
    int **matrix = new int*[rows];
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
        for (int j = 0; j < rows; j++) {
            cout << matrix[i][j] << " \t";
        }
        cout << endl;
    }
}

int main() {
    int **matrix, **transpose;
    int rows, cols;

    cout << "Enter details of matrix: " << endl;
    cout << "Rows: ";
    cin >> rows;

    cout << "Columns: ";
    cin >> cols;

    matrix = allocate_matrix(rows, cols);
    transpose = allocate_matrix(rows, cols);

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            transpose[j][i] = matrix[i][j] ;
        }
    }

    cout << "Given matrix: " << endl;
    display_matrix(matrix, rows, cols);
    cout << endl;

    cout << "Transpose: " << endl;
    display_matrix(transpose, rows, cols);

    dealloc_matrix(matrix, rows);
    dealloc_matrix(transpose, rows);

    return 0;
}