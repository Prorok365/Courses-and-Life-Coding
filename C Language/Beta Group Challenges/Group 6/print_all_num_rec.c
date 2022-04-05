/**
 * @file print_all_num_rec.c
 * @brief print all numbers from 1 to requested number
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Recursive function, print all numbers from 1 to num
 *
 * @param num - positive number from user
 *
 * @return void 
 */

void print_all_numbers(unsigned num)
{
    unsigned int pos_num = num;

    if(pos_num > 0) {
        print_all_numbers(pos_num - 1);
        printf("%d ", pos_num);
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