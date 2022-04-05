/**
 * @file garden_calc.c
 * @brief Calculate the area and circumference of a circle
 */

/********************/
#include <stdio.h>

/********************/
#define PI 3.14159265359

/********************/

int main()
{
    float radius = 0;

    float area = 0;

    //Circumference
    float circ = 0;

    printf("\nPlease enter the distance between your house and garden fence: ");
    scanf("%f", &radius);

    area = PI * (radius * radius);

    circ = 2 * PI * radius;

    printf("\nYour garden area is %.4f and your garden length is %.4f\n\n", area, circ);

    return 0;
}
