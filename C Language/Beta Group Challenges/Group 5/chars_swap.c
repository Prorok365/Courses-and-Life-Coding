/**
 * @file chars_swap.c
 * @brief swap character 'g' and 'i' to 'b' in input string.
 */

/********************/
#include <stdio.h>
#include <string.h>

/********************/
#define MAX_SIZE 32

/********************/


int main()
{
    int i = 0;
    char input_str[MAX_SIZE] = {0};

    printf("\nPlease enter a string: ");
    scanf("%[^\n]s", input_str);

    for(i = 0; i < strlen(input_str); i++) {
        if(input_str[i] == 'g' || input_str[i] == 'i') {
            input_str[i] = 'b';
        }
    }

    printf("\nYour new string is: %s\n\n", input_str);

    return 0;
}
