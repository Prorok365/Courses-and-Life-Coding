/**
 * @file abc_print.c
 * @brief Print alphabet without list of abc characters
 */

/********************/
#include <stdio.h>

/********************/
#define LOWCASE_A 97
#define LOWCASE_Z 122

/********************/


int main()
{
    int i = 0;

    printf("\n");

    //Print a-z characters from ASCII table
    for(i = LOWCASE_A; i < LOWCASE_Z + 1; i++) {
        printf("%c\n", i);
    }

    printf("\n");

    return 0;
}
