#include <stdio.h>

void upper_triangular(int rows, int cols, int matrix[rows][cols]);
void lower_triangular(int rows, int cols, int matrix[rows][cols]);
void diagonal(int rows, int cols, int matrix[rows][cols]);
void tridiagonal(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int i, j, choice, rows, cols;

    printf("Enter no. of rows of matrix: ");
    scanf("%d", &rows);
    printf("Enter no. of columns of matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("\nEnter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nGiven matrix: \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n======================================\n");
    printf("========== Select an option ==========\n");
    printf("======================================\n");
    printf("1. Display upper triangular matrix.\n");
    printf("2. Display lower triangular matrix.\n");
    printf("3. Display diagonal matrix.\n");
    printf("4. Display tridiagonal matrix.\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        upper_triangular(4, 4, matrix);
        break;
    case 2:
        lower_triangular(4, 4, matrix);
        break;
    case 3:
        diagonal(4, 4, matrix);
        break;
    case 4:
        tridiagonal(4, 4, matrix);
        break;
    }
}

void upper_triangular(int rows, int cols, int matrix[rows][cols])
{
    int i, j, k;

    printf("\nUpper triangular matrix: \n");

    for (i = 0; i < 4; i++) {
        for (k = 0; k < i; k++) {
            printf("\t");
        }

        for (j = i; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void lower_triangular(int rows, int cols, int matrix[rows][cols])
{
    int i, j, k;

    printf("\nLower triangular matrix:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d\t", matrix[i][j]);
        }

        for (k = i; k < 3; k++) {
            printf("\t");
        }
        printf("\n");
    }
}

void diagonal(int rows, int cols, int matrix[rows][cols])
{
    int i, j;

    printf("\nDiagonal matrix: \n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
}

void tridiagonal(int rows, int cols, int matrix[rows][cols])
{
    int i, j;

    printf("\nTridiagonal matrix: \n");

    for (i = 0; i < rows; i++) {
        if (i == 0) {
            printf("%d\t%d\t", matrix[i][0], matrix[i][1]);
            for (j = 2; j < cols; j++) {
                printf("\t");
            }
        } else if (i == rows - 1) {
            for (j = 0; j < cols - 2; j++) {
                printf("\t");
            }
            printf("%d\t%d\t", matrix[i][cols - 2], matrix[i][cols - 1]);
        } else {
            for (j = 0; j < cols; j++) {
                if (j == i - 1) {
                    printf("%d\t%d\t%d\t", matrix[i][j], matrix[i][j + 1], matrix[i][j + 2]);
                    j += 3;
                }
                if (j < cols) {
                    printf("\t");
                }
            }
        }
        printf("\n");
    }
}