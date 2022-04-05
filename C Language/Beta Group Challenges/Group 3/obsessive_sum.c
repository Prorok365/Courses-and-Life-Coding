/**
 * @file obsessive_sum.c
 * @brief summarize all digits of number until get only one digit.
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Summarize all the digits of number
 *
 * @param num - integer number
 *
 * @return int - return sum of digits
 */
int digit_sum(int num)
{
    if(num < 10) {
        return num;
    }

    return num % 10 + digit_sum(num / 10);
}


int main()
{
    int input_num = 0;

    printf("\nEnter a number: ");
    scanf("%d", &input_num);

    while(input_num > 10) {
        input_num = digit_sum(input_num);
    }

    printf("\nThe sum is: %d\n\n", input_num);

    return 0;
}