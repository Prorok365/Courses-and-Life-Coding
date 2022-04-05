/**
 * @file remainder_calc.c
 * @brief Calculate and print the divide of first 
		  input number on second input number and the remainder.
 */

/********************/
#include <stdio.h>

/********************/


int main()
{
    int first_num = 0;
    int second_num = 0;

    int divide = 0;
    int remainder = 0;

    printf("\nEnter first number: ");
    scanf("%d", &first_num);
    printf("\nEnter second number: ");
    scanf("%d", &second_num);

    divide = (first_num / second_num);
    remainder = (first_num % second_num);

    printf("\n%d / %d = %d\n", first_num, second_num, divide);
    printf("\n%d %% %d = %d\n\n", first_num, second_num, remainder);

    return 0;
}