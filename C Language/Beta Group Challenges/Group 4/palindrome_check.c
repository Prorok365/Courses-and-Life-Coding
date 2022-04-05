/**
 * @file palindrome_check.c
 * @brief Check if string is palindrome.
 */

/********************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/********************/
#define MAX_SIZE 32

/********************/


int main()
{
    char str_arr[MAX_SIZE] = {0};
    int i = 0;
    int str_length = 0;

    printf("\nPlease enter string(max %d characters): ", MAX_SIZE);
    scanf("%[^\n]s", str_arr);

    str_length = strlen(str_arr);

    for(i = 0; i < (str_length / 2); i++) {
        if(str_arr[i] != str_arr[(str_length - 1) - i]) {
            printf("\nYour string is not palindrome.\n\n");
            exit(-1);
        }
    }

    printf("\nYour string is palindrome.\n\n");

    return 0;
}
