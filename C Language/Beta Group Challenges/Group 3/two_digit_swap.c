/**
 * @file two_digit_swap.c
 * @brief Swap between the digits of double digit number
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/


int main()
{
    int input_2digit = 0;

    printf("\nEnter number between 10 to 99: ");
    scanf("%d", &input_2digit);

    if(input_2digit > 99 || input_2digit < 10) {
        printf("\nInvalid input. Valid number only between 10 to 99.\n\n");
        exit(EXIT_FAILURE);
    }

    printf("\nThis is how the number look like when swap the digits: %d%d\n\n", (input_2digit % 10), (input_2digit / 10));

    return 0;
}