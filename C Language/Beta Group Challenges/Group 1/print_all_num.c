/**
 * @file print_all_num.c
 * @brief print all numbers from 1 to requested number
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Print all numbers from 1 to num
 *
 * @param num - integer positive number from user
 *
 * @return void
 */

void print_all_numbers(unsigned num)
{
    int i = 0;

    for(i = 1; i <= num; i++) {
        printf("%d ", i);
    }
}

/**********************************/

int main()
{
    unsigned num = 0;

    printf("Please enter number: ");
    scanf("%d", &num);

    print_all_numbers(num);

    return 0;
}