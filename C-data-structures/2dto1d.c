#include <stdio.h>

int main()
{
    int i, j, k, rows, cols;

    printf("Enter rows in matrix: ");
    scanf("%d", &rows);

    printf("Enter columns in matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols], array[rows * cols];

    printf("Enter elements in matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nGiven matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    k = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            array[k] = matrix[i][j];
            k++;
        }
    }

    printf("\n1D array of matrix is: \n");
    for (i = 0; i < k; i++) {
        printf(i == k - 1 ? "%d" : "%d, ", array[i]);
    }
    printf("\n");

    return 0;
}