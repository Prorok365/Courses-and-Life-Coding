/**
 * @file str_len.c
 * @brief Count how much characters have in a string
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 32

/**
 * Count length of string
 *
 * @param user_str - string
 *
 * @return unsigned int - return length of string
 */
unsigned int my_strlen(const char *str_arr)
{
    unsigned int i = 0;

    for(i = 0; *(str_arr + i) != '\0'; i++);
    
    return i;
}

int main()
{
    char input_str[MAX_SIZE] = {0};

    printf("\nPlease enter a string(max %d characters): ", MAX_SIZE);
    scanf("%[^\n]s", input_str);

    printf("\nLength of your string is: %u\n\n", my_strlen(input_str));

    return 0;
}
