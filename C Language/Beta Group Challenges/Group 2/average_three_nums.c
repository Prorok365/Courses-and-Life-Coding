/**
 * @file average_three_nums.c
 * @brief Calculate the average of three input numbers
 */


#include <stdio.h>


int main()
{
    float first_number = 0;
    float second_number = 0;
    float third_number = 0;

    float average = 0;

    float divisor = 0;

    divisor = 3;

    printf("\nPlease enter three numbers: ");
    scanf("%f %f %f", &first_number, &second_number, &third_number);

    average = (first_number + second_number + third_number) / divisor;

    printf("\nThe average is: %.4f\n\n", average);

    return 0;
}