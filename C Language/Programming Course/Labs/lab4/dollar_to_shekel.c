/**
 * @file dollar_to_shekel.c
 * @brief Get from user dollar rate and amount of dollar's 
	      and print on screen the converted amount of shekel's
 */

#include <stdio.h>


int main()
{
    float dollar_rate = 0;
    int amount = 0;
    float converted = 0;

    printf("\nPlease enter dollar rate to shekel: ");
    scanf("%f", &dollar_rate);
    printf("\nPlease enter amount of dollar you want to convert: ");
    scanf("%d", &amount);

    converted = amount * dollar_rate;

    printf("\nYour amount in shekels is: %.4f\n\n", converted);

    return 0;
}

