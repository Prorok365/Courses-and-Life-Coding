/**
 * @file print_A_rec.c
 * @brief Print character A and B multple times.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/

/**
 * print character A and B multple times
 *
 * @param num - integer number
 *
 * @return void
 */
void print_AB_rec(int num)
{
    if(num == 0) {
        return;
    }

    printf("A");
    print_AB_rec(num - 1);
    printf("B");
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

    printf("\n");
    print_AB_rec(num);
    printf("\n\n");

    return 0;
}