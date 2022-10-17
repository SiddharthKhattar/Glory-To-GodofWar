#include <stdio.h>

int mat_display(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int i, j, k1, k2, rows, cols, size1 = 0, size2 = 0, size3;

    printf("Enter number of rows in matrices: ");
    scanf("%d", &rows);
    printf("Enter number of cols in matrices: ");
    scanf("%d", &cols);

    int mat1[rows][cols];
    int mat2[rows][cols];

    printf("Enter elements: \n");
    printf("MATRIX 1\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nMATRIX 2\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nEntered matrices: \n");
    printf("MATRIX 1\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIX 2\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat1[i][j] != 0) {
                size1++;
            }
            if (mat2[i][j] != 0) {
                size2++;
            }
        }
    }

    int sp1[size1 + 1][3];
    int sp2[size2 + 1][3];

    sp1[0][0] = rows;
    sp1[0][1] = cols;
    sp1[0][2] = size1;

    sp2[0][0] = rows;
    sp2[0][1] = cols;
    sp2[0][2] = size2;

    k1 = 1;
    k2 = 1;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat1[i][j] != 0) {
                sp1[k1][0] = i;
                sp1[k1][1] = j;
                sp1[k1][2] = mat1[i][j];
                k1++;
            }
            if (mat2[i][j] != 0) {
                sp2[k2][0] = i;
                sp2[k2][1] = j;
                sp2[k2][2] = mat2[i][j];
                k2++;
            }
        }
    }

    int sp3[size1 + size2][3], k3;

    k1 = k2 = k3 = 1;

    while (k1 <= size1 && k2 <= size2) {
        if (sp1[k1][0] < sp2[k2][0]) {
            sp3[k3][0] = sp1[k1][0];
            sp3[k3][1] = sp1[k1][1];
            sp3[k3][2] = sp1[k1][2];
            k1++;
            k3++;
        } else if (sp1[k1][0] > sp2[k2][0]) {
            sp3[k3][0] = sp2[k2][0];
            sp3[k3][1] = sp2[k2][1];
            sp3[k3][2] = sp2[k2][2];
            k3++;
            k2++;
        } else if (sp1[k1][0] == sp2[k2][0]) {
            if (sp1[k1][1] < sp2[k2][1]) {
                sp3[k3][0] = sp1[k1][0];
                sp3[k3][1] = sp1[k1][1];
                sp3[k3][2] = sp1[k1][2];
                k3++;
                k1++;
            } else if (sp1[k1][1] > sp2[k2][1]) {
                sp3[k3][0] = sp2[k2][0];
                sp3[k3][1] = sp2[k2][1];
                sp3[k3][2] = sp2[k2][2];
                k3++;
                k2++;
            } else {
                sp3[k3][0] = sp2[k2][0];
                sp3[k3][1] = sp2[k2][1];
                sp3[k3][2] = sp1[k1][2] - sp2[k2][2];
                k1++;
                k2++;
                k3++;
            }
        }
    }
    while (k1 <= size1) {
        sp3[k3][0] = sp1[k1][0];
        sp3[k3][1] = sp1[k1][1];
        sp3[k3][2] = sp1[k1][2];
        k3++;
        k1++;
    }

    while (k2 <= size2) {
        sp3[k3][0] = sp2[k2][0];
        sp3[k3][1] = sp2[k2][1];
        sp3[k3][2] = sp2[k2][2];
        k3++;
        k2++;
    }

    sp3[0][0] = sp1[0][0];
    sp3[0][1] = sp1[0][1];
    sp3[0][2] = k3 - 1;
    size3 = k3 - 1;

    printf("\nDifference in tuple form: \n");
    mat_display(k3, 3, sp3);

    printf("\nDifference in matrix form: \n");

    k3 = 1;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {

            if (k3 <= size3 && sp3[k3][0] == i && sp3[k3][1] == j) {
                printf("%d\t", sp3[k3][2]);
                k3++;
            } else {
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