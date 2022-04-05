/**
 * @file multi_table.c
 * @brief print the multiplication table from 1 to 10
 */

/********************/
#include <stdio.h>

/********************/


int main()
{
    int i = 0;
    int j = 0;

    for(i = 1; i < 11; i++) {
        for(j = 1; j < 11; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}