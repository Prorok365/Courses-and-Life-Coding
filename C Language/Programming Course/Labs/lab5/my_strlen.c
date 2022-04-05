 /**
 * @file my_strlen.c
 * @brief Print the length of a string
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 32
/********************/

/**
 * Count the length of string
 *
 * @param str - String array
 *
 * @return unsigned int - Return length of string
 */
unsigned int my_strlen(char* str)
{
    unsigned int i = 0;
    for (i = 0; str[i] != '\0'; i++);

    return i;
}


int main()
{
    unsigned int length = 0;
    char input_str[MAX_SIZE] = "\0";

    printf("\nEnter string(max 32 characters): ");
    scanf("%[^\n]s%*c", input_str);

    length = my_strlen(input_str);
    printf("\nThe length of the string '%s' is %u\n\n", input_str, length);

    return 0;
}