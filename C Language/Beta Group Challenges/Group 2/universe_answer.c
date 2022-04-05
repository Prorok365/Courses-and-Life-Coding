/**
 * @file universe_answer.c
 * @brief Get from user numbers until get number 42.
 */

/********************/
#include <stdio.h>

/********************/
#define THE_ANSWER 42

/********************/

int main()
{
    int num = 0;

    printf("\nWhat The Answer to the Ultimate Question of Life, the Universe, and Everything? ");

    scanf("%d", &num);

    while(num != THE_ANSWER) {
        printf("\nSorry, Wrong number, Try again: ");
        scanf("%d", &num);
    }

    printf("\nYes! The Answer to the Ultimate Question of Life, the Universe, and Everything is 42!\n\n");

    return 0;
}