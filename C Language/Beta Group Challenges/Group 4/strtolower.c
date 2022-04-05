/**
 * @file strtolower.c
 * @brief change all characters in string to lower case.
 */

/********************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/********************/
#define MAX_SIZE 32

/********************/

int main()
{
    char str_arr[MAX_SIZE] = {0};
    int i = 0;

    printf("\nEnter string(max %d characters): ", MAX_SIZE);
    scanf("%[^\n]s", str_arr);

    printf("\nBefore: %s", str_arr);

    for(i = 0; i < strlen(str_arr); i++) {
        str_arr[i] = tolower(str_arr[i]);
    }

    printf("\nAfter: %s\n\n", str_arr);

    return 0;
}
