#include <stdio.h>

int mat_display(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int i, j, k, rows, cols, temp, flag, size = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    printf("Enter matrix elements: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nGiven matrix:\n\n");
    mat_display(rows, cols, mat);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] != 0) {
                size++;
            }
        }
    }

    int tupleform[size + 1][3];

    tupleform[0][0] = rows;
    tupleform[0][1] = cols;
    tupleform[0][2] = size;

    k = 1;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] != 0) {
                tupleform[k][0] = i;
                tupleform[k][1] = j;
                tupleform[k][2] = mat[i][j];
                k++;
            }
        }
    }

    printf("\nTuple form of given matrix: \n\n");
    mat_display(size + 1, 3, tupleform);

    // Transpose
    for (i = 1; i < size + 1; i++) {
        temp = tupleform[i][0];
        tupleform[i][0] = tupleform[i][1];
        tupleform[i][1] = temp;
    }

    printf("\nTranspose in tuple form: \n\n");
    mat_display(size + 1, 3, tupleform);

    printf("\nTranspose in matrix form: \n\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            flag = 0;
            for (k = 1; k <= size; k++) {
                if (tupleform[k][0] == i && tupleform[k][1] == j) {
                    flag = 1;
                    printf("%d\t", tupleform[k][2]);
                    k++;
                }
            }
            if (flag == 0) {
                printf("0\t");
            }
        }
        printf("\n");
    }

    return 0;
}

int mat_display(int rows, int cols, int matrix[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}