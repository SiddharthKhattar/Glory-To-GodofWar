#include <stdio.h>

int mat_display(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int i, j, k, rows, cols, size = 0;

    printf("\nEnter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int sparsematrix[rows][cols];

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Row %d column %d: ", i, j);
            scanf("%d", &sparsematrix[i][j]);
        }
    }

    printf("Given sparse matrix: \n\n");
    mat_display(rows, cols, sparsematrix);
    printf("\n");

    // Converting sparse matrix to tuple form:
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (sparsematrix[i][j] != 0) {
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
            if (sparsematrix[i][j] != 0) {
                tupleform[k][0] = i;
                tupleform[k][1] = j;
                tupleform[k][2] = sparsematrix[i][j];
                k++;
            }
        }
    }

    printf("Tuple form of given sparse matrix: \n\n");
    mat_display(size + 1, 3, tupleform);

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