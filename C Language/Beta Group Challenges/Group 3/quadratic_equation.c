/**
 * @file quadratic_equation.c
 * @brief Calculate the quadratic equation with input parameters of a,b and c.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/********************/


int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    float delta = 0;

    float x1 = 0;
    float x2 = 0;

    printf("\nPlease enter first parameter: ");
    scanf("%f", &a);
    printf("\nPlease enter second parameter: ");
    scanf("%f", &b);
    printf("\nPlease enter third parameter: ");
    scanf("%f", &c);

    if(a == 0) {
        printf("\nThere is no solution. Denominator equals 0\n\n");
        exit(EXIT_FAILURE);
    }

    delta = (b * b) - (4.0 * a * c);

    if(delta < 0) {
        printf("\nThere is no solution. Invalid root - less than 0\n\n");
        exit(EXIT_FAILURE);
    }

    x1 = (-b + sqrt(delta)) / (2.0 * a);
    x2 = (-b - sqrt(delta)) / (2.0 * a);

    printf("\nX1 = %.4f, X2 = %.4f\n\n", x1, x2);

    return 0;
}