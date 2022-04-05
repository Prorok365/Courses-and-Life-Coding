/**
 * @file print_odd.c
 * @brief Print all odd numbers from 1 to MAX_CAP
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_CAP 255

/********************/

/**
 * Print all numbers from 1 to MAX_CAP
 *
 * @param None
 *
 * @return void
 */
void print_odd()
{
    int i = 0;

    for(i = 1; i <= MAX_CAP; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");    //Note Number 1 by revolution
}


int main()
{
    print_odd();

    return 0;
}