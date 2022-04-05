/**
 * @file power_func.c
 * @brief Calculate the number after a power calculation on it
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Calculate the number after a power calculation
 *
 * @param base - the base of power function
 * @param exponent - the exponent of power function
 *
 * @return int - return calculated number
 */
int power_func(int base, int exponent)
{
    int i = 0;
    int sum = 1;

    if(exponent == 0) {
        return 1;
    }

    for(i = 1; i <= exponent; i++) {
        sum *= base;
    }

    return sum;
}


int main()
{
    int base = 0;
    int exponent = 0;

    printf("\nEnter the base: ");
    scanf("%d", &base);

    printf("\nEnter the exponent: ");
    scanf("%d", &exponent);

    printf("\n%d ^ %d = %d\n\n", base, exponent, power_func(base, exponent));

    return 0;
}
