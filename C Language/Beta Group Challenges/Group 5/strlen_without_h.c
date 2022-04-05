/**
 * @file strlen_without_h.c
 * @brief Count how much characters have in a string without 'h'
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
 * @return unsigned int - return length of string without 'h'
 */
unsigned int my_strlen_no_h(const char *str_arr)
{
    unsigned int i = 0;
    unsigned int count_h = 0;

    for(i = 0; *(str_arr + i) != '\0'; i++) {
        if(str_arr[i] == 'h') {
            count_h++;
        }
    }
    return (i - count_h);
}

int main()
{
    char input_str[MAX_SIZE] = {0};
    printf("\nPlease enter a string(max %d characters): ", MAX_SIZE);
    scanf("%[^\n]s", input_str);

    printf("\nLength of your string without 'h' is: %u\n\n", my_strlen_no_h(input_str));

    return 0;
}