// Program to multiply two 2x2 matrices using arrays

#include <stdio.h>

int main() {
    int row, col, elem;
    int matrix1[2][2], matrix2[2][2];
    
    // Getting first matrix elements
    for(row=0; row <2; row++) {
        for (col=0; col<2; col++) {
            printf("Enter 1st matrix element for %d row, %d col: ", row+1, col+1);
            scanf("%d", &elem);
            matrix1[row][col] = elem;
        }
    }
    printf("\n");
    
    // Getting second matrix elements
    for (row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            printf("Enter 2nd matrix element for %d row, %d col: ", row+1, col+1);
            scanf("%d", &elem);
            matrix2[row][col] = elem;
        }
    }
    printf("\n");

    //Printing both matrices 
    printf("MATRIX I\n");
    for (row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("MATRIX II\n");
    for (row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    //Multiplying matrix I by matrix II
    int i, sum=0;
    int matrix1x2[2][2];

    for(row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            for (i=0; i<2; i++) {
                sum += matrix1[row][i] * matrix2[i][col];
            }
            matrix1x2[row][col] = sum;
            sum=0;
        }
    }

    // Multiplying matrix II by matrix I
    int matrix2x1[2][2];
    sum=0;
    
    for(row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            for (i=0; i<2; i++) {
                sum += matrix2[row][i] * matrix1[i][col];
            }
            matrix2x1[row][col] = sum;
            sum=0;
        }
    }
    
    // Displaying the product
    printf("MATRIX I x MATRIX II\n");
    for (row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            printf("%d ", matrix1x2[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("MATRIX II x MATRIX I\n");
    for (row=0; row<2; row++) {
        for (col=0; col<2; col++) {
            printf("%d ", matrix2x1[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
