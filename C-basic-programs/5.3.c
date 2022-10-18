/* A set of two linear equations with two unknowns x1 and x2 is given below:
ax + bx = m
cx + dx = n
*/

#include <stdio.h>

int main() {
    float a, b, c, d, m, n;
    printf("Formula is of the form: \n");
    printf("ax + by = m \n");
    printf("cx + dy = n \n");
    printf("\n Enter value of a, b, c, d, m, n separated by spaces: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    float denominator;
    denominator = a*d - c*b;
    if (denominator == 0) {
        printf("Denominator is zero, solution is undefined.\n");
        return 1;
    }
    else {
        float solutionx, solutiony;
        solutionx = (m*d - b*n)/(a*d - c*b);
        solutiony = (n*a - m*c)/(a*d - c*b);
        printf("Solution is: \n x = %f\n y = %f\n", solutionx, solutiony);
    }
    return 0;
}
