/**
 * @file basic_calc_float.c
 * @brief Calculate sum and divine of two input float numbers
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    float first_num = 0;
    float second_num = 0;

    float sum = 0;
    float divide = 0;

    printf("\nEnter first number: ");
    scanf("%f", &first_num);

    printf("\nEnter second number: ");
    scanf("%f", &second_num);

    sum = first_num + second_num;

    divide = first_num - second_num;

    printf("\n%.2f + %.2f = %.2f", first_num, second_num, sum);

    printf("\n%.2f - %.2f = %.2f\n\n", first_num, second_num, divide);

    return 0;
}