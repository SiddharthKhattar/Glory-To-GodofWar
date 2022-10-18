#include <stdio.h>
#include <stdlib.h>

int mat_entry(int rows, int cols, int matrix[rows][cols]);
int mat_display(int rows, int cols, int matrix[rows][cols]);
int sparse_tuple(int rows, int cols, int matrix[rows][cols], int size, int tupleform[size][3]);

int main()
{
    int i, j, choice, rows, cols, size;

    printf("======================================\n");
    printf("========== Select an option ==========\n");
    printf("======================================\n");
    printf("1. Sparse matrix to tuple form.\n");
    printf("2. Transpose of sparse matrix.\n");
    printf("3. Add two sparse matrices.\n");
    printf("4. Subtract two sparse matrices.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nMATRIX I: ");
    printf("\nEnter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols];

    switch (choice) {
    case 1:
        mat_entry(rows, cols, mat1);
        mat_display(rows, cols, mat1);

        size = 0;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (mat1[i][j] != 0) {
                    size += 1;
                }
            }
        }

        int sparsetup[size][3];
        sparsetup[0][0] = rows;
        sparsetup[0][1] = cols;
        sparsetup[0][2] = size;

        sparse_tuple(rows, cols, mat1, size, sparsetup);

        printf("\n\nTuple form of sparse matrix is: \n");
        mat_display(size, 3, sparsetup);

        break;
    }
    return 0;
}

int mat_entry(int rows, int cols, int matrix[rows][cols])
{
    int i, j;

    printf("\nEnter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Row %d column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    return 0;
}

int mat_display(int rows, int cols, int matrix[rows][cols])
{
    int i, j;
    printf("\nGiven matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int sparse_tuple(int rows, int cols, int matrix[rows][cols], int size, int tupleform[size][3])
{
    int i, j, k = 1;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                tupleform[k][0] = i;
                tupleform[k][1] = j;
                tupleform[k][2] = matrix[i][j];
                k++;
            }
        }
    }
    return 0;
}