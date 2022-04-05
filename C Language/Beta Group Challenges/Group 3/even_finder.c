/**
 * @file even_finder.c
 * @brief Check if the input number is even or not.
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int input_number = 0;

    printf("\nPlease enter your number: ");
    scanf("%d", &input_number);

    printf((input_number % 2 == 0) ? "\nExcellent! Your number is EVEN\n\n" : "\nSorry, but your number is ODD\n\n");

    return 0;
}