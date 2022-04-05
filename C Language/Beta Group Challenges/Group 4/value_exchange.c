/**
 * @file value_exchange.c
 * @brief Swap the values of two numbers
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Swap between the addresses
 *
 * @param first_num - address of integer
 * @param second_num - address of integer
 *
 * @return void
 */
void swap(int* first_num, int* second_num)
{
    int temp = 0;

    temp = *first_num;

    *first_num = *second_num;

    *second_num = temp;
}


int main()
{
    int a = 0;
    int b = 0;

    printf("\nEnter number in variable a: ");
    scanf("%d", &a);

    printf("\nEnter number in variable b: ");
    scanf("%d", &b);

    printf("\nBefore: a = %d, b = %d\n", a, b);

    printf("\nDo some magic in the air...\n");

    swap(&a, &b);

    printf("\nAfter: a = %d, b = %d\n", a, b);

    printf("\nTada!\n\n");

    return 0;
}