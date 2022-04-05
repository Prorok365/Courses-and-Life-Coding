/**
 * @file my_puts.c
 * @brief Print string on the screen
 *        and first character of string in new line
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 32

/********************/


int main()
{
    char input_str[MAX_SIZE] = "\0";

    printf("\nEnter string(max 32 characters): ");
    scanf("%[^\n]s%*c", input_str);
    printf("\n%s\n%c\n\n", input_str, *input_str);

    return 0;
}