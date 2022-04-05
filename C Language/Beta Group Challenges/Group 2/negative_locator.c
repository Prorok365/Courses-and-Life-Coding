/**
 * @file negative_locator.c
 * @brief Print 1 if input number is positive, 0 if 0 and -1 if negative.
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int input_num = 0;

    printf("\nPlease enter your number: ");
    scanf("%d", &input_num);

    if(input_num > 0) {
        printf("\n1\n\n");

    } else if(input_num < 0) {
        printf("\n-1\n\n");

    } else {
        printf("\n0\n\n");
    }

    return 0;
}