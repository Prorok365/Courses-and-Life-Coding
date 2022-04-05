/**
 * @file print_sum.c
 * @brief Get from user integer number and print 
		  the sum of number's between 1 to input number.
 */

#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    int i = 0;

    printf("\nPlease enter number: ");
    scanf("%d", &num);

    printf("\n");

    for(i = 1; i <= num; i++) // remove space between for and (
    {
        sum += i;
        if(i != num) { // remove space between if and (
            printf("%d + ", i);
        } else {
            printf("%d", i);
        }
    }
    printf("\n");
	
    printf("\nThe sum is: %d\n\n", sum);

    return 0;
}