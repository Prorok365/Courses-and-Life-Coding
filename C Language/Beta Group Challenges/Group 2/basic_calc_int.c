/**
 * @file basic_calc_int.c
 * @brief Calculate sum and divine of two input integer numbers
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int first_num = 0;
    int second_num = 0;

    int sum = 0;
    int divide = 0;

    printf("\nEnter first number: ");
    scanf("%d", &first_num);

    printf("\nEnter second number: ");
    scanf("%d", &second_num);

    sum = first_num + second_num;

    divide = first_num - second_num;

    printf("\n%d + %d = %d", first_num, second_num, sum);

    printf("\n%d - %d = %d\n\n", first_num, second_num, divide);

    return 0;
}