#include <stdio.h>

int mat_display(int rows, int cols, int matrix[rows][cols]);

int main()
{
    int i, j, k1, k2, rows1 = 4, cols1 = 4, rows2 = 4, cols2 = 4, size1 = 0, size2 = 0;
    int mat1[4][4] = {
        {0, 0, 3, 0},
        {0, 5, 0, 7},
        {1, 0, 0, 0},
        {3, 0, 0, 2}};
    int mat2[4][4] = {
        {0, 2, 0, 0},
        {0, 9, 0, 0},
        {3, 0, 3, 0},
        {5, 0, 0, 0}};

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            if (mat1[i][j] != 0)
            {
                size1++;
            }
        }
    }

    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            if (mat2[i][j] != 0)
            {
                size2++;
            }
        }
    }

    int sp1[size1][3];
    int sp2[size2][3];

    sp1[0][0] = rows1;
    sp1[0][1] = cols1;
    sp1[0][2] = size1;

    k1 = 1;
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            if (mat1[i][j] != 0)
            {
                sp1[k1][0] = i;
                sp1[k1][1] = j;
                sp1[k1][2] = mat1[i][j];
                k1++;
            }
        }
    }
    mat_display(size1 + 1, 3, sp1);
    printf("\n");

    sp2[0][0] = rows2;
    sp2[0][1] = cols2;
    sp2[0][2] = size2;

    k2 = 1;
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            if (mat2[i][j] != 0)
            {
                sp2[k2][0] = i;
                sp2[k2][1] = j;
                sp2[k2][2] = mat2[i][j];
                k2++;
            }
        }
    }

    mat_display(size2 + 1, 3, sp2);

    int sp3[size1 + size2][3], k3;

    k1 = k2 = k3 = 1;

    while (k1 <= size1 && k2 <= size2)
    {
        if (sp1[k1][0] < sp2[k2][0])
        {
            sp3[k3][0] = sp1[k1][0];
            sp3[k3][1] = sp1[k1][1];
            sp3[k3][2] = sp1[k1][2];
            k1++;
            k3++;
        }
        else if (sp1[k1][0] > sp2[k2][0])
        {
            sp3[k3][0] = sp2[k2][0];
            sp3[k3][1] = sp2[k2][1];
            sp3[k3][2] = sp2[k2][2];
            k3++;
            k2++;
        }
        else if (sp1[k1][0] == sp2[k2][0])
        {
            if (sp1[k1][1] < sp2[k2][1])
            {
                sp3[k3][0] = sp1[k1][0];
                sp3[k3][1] = sp1[k1][1];
                sp3[k3][2] = sp1[k1][2];
                k3++;
                k1++;
            }
            else if (sp1[k1][1] > sp2[k2][1])
            {
                sp3[k3][0] = sp2[k2][0];
                sp3[k3][1] = sp2[k2][1];
                sp3[k3][2] = sp2[k2][2];
                k3++;
                k2++;
            }
            else
            {
                sp3[k3][0] = sp2[k2][0];
                sp3[k3][1] = sp2[k2][1];
                sp3[k3][2] = sp1[k1][2] - sp2[k2][2];
                k1++;
                k2++;
                k3++;
            }
        }
    }
    while (k1 <= size1)
    {
        sp3[k3][0] = sp1[k1][0];
        sp3[k3][1] = sp1[k1][1];
        sp3[k3][2] = sp1[k1][2];
        k3++;
        k1++;
    }

    while (k2 <= size2)
    {
        sp3[k3][0] = sp2[k2][0];
        sp3[k3][1] = sp2[k2][1];
        sp3[k3][2] = sp2[k2][2];
        k3++;
        k2++;
    }

    sp3[0][0] = sp1[0][0];
    sp3[0][1] = sp1[0][1];
    sp3[0][2] = k3 - 1;
    
    printf("\n---------------------\n");
    mat_display(k3, 3, sp3);

    return 0;
}

int mat_display(int rows, int cols, int matrix[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}