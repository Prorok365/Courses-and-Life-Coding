/**
 * @file change_capital.c
 * @brief Get string from user and return same string but changed with capital characters on even indexes and lower characters on odd indexes.
 *
 * -- sent to fix by revolution 9.4.2020 please fix intendation and array intialization
 *
 * version log
 * ------------
 * version 1.0 by Prorok, 01.04.2020
 * version 2.0 by Prorok, 03.04.2020
 * version 3.0 by Prorok, 12.09.2020
 */

#include <stdio.h>

#define MAX_SIZE 32


/**
 * Change the even indexes to capital character's
 * and odd indexes to lower characters
 *
 * @param str_arr - String array
 *
 * @return Void
 *
 */

void change_capital(char *str_arr)
{
    int i = 0;
    for(i = 0; str_arr[i]; i += 2) {
        // Odd indexes with capital characters
        if(str_arr[i] >= 'A' && str_arr[i] <= 'Z') {
            str_arr[i] += 32;
        }
    }

    for(i = 1; str_arr[i]; i += 2) {
        // Even indexes with low characters
        if(str_arr[i] >= 'a' && str_arr[i] <= 'z') {
            str_arr[i] -= 32;
        }
    }
}

/********************************************************/

int main()
{
    char sentence[MAX_SIZE] = "\0"; // wrong intialization

    printf("\nEnter a string(max 32): ");
    scanf("%s", &sentence);
	
    printf("\nBefore change: ");
    printf("%s\n", sentence);

    change_capital(sentence);

    printf("\nAfter change: ");
    printf("%s\n\n", sentence);

    return 0;
}