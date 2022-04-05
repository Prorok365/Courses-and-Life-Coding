/**
 * @file print_A_rec.c
 * @brief Print character A multple times.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/

/**
 * print character A multple times
 *
 * @param num - integer number
 *
 * @return void
 */
void print_A_rec(int num)
{
    if(num == 0) {
        return;
    }
    print_A_rec(num - 1);
    printf("A");
}


int main()
{
    int num = 0;

    printf("\nPlease enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("\nInvalid input. Work only with positive numbers.\n\n");
        exit(-1);
    }

    print_A_rec(num);
    printf("\n\n");

    return 0;
}
