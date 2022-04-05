/**
 * @file end_with.c
 * @brief Check if last char of two strings are equal
 */

/********************/
#include <stdio.h>
#include <stdbool.h>
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
    int i = 0;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}

/**********************************/

/**
 * Check if last char of both string's is equal
 *
 * @param a - String array
 * @param b - String array
 *
 * @return bool - Return true if equal of false if not
 */

bool end_with(char* a, char* b)
{
    if(a[my_strlen(a) - 1] == b[my_strlen(b) - 1]) {
        return true;
    }

    return false;
}

/**********************************/

int main()
{
    char str1[MAX_SIZE] = "\0";
    char str2[MAX_SIZE] = "\0";

    printf("\nEnter first word(max 32): ");
    scanf("%s", &str1);
    printf("\nEnter second word(max 32): ");
    scanf("%s", &str2);

    if(end_with(str1, str2)) {
        printf("\nLast char of '%s' equal to last char of '%s'\n\n", str1, str2);
    } else {
        printf("\nLast char of '%s' NOT equal to last char of '%s'\n\n", str1, str2);
    }

    return 0;
}