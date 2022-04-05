/**
 * @file string_breaker.c
 * @brief print all characters of input string every character in new line.
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

    printf("\nEnter string(max %d): ", MAX_SIZE);
    scanf("%[^\n]s", input_str);

    for(i = 0; i < strlen(input_str); i++) {
        printf("%c\n", *(input_str + i));
    }
    printf("\n");

    return 0;
}
