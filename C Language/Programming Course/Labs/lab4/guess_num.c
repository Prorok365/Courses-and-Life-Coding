/**
 * @file guess_num.c
 * @brief The program create random number between 5 to 15 and
 *        let the user guess until it reaches the correct number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand((unsigned int)time(NULL)); // fix intendation here

    int i = 0;
    int rand_num = 0;
    int input_num = 0;
    int guesses = 10;

    rand_num = rand() % 11 + 5;

    for(i = 1; i <= guesses; i++) { //remove the space between the for and (

        printf("You have 10 guesses ,Please guess the number(between 5 to 15): ");
        scanf("%d", &input_num);
		
        if(input_num < rand_num) { //remove the space between the if and (
            printf("\nTry HIGHER\n");
        } else if(input_num > rand_num) { //remove the space between the if and (
            printf("\nTry LOWER\n");
        } else {
            printf("\nCongratulation! You guess the number!\n");
            break;
        }
    }

    if(i > guesses) {
        printf("\nSorry, you try your best...\n");
    }

    return 0;
}