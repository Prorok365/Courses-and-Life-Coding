/**
 * @file start_with.c
 * @brief Check if both strings start with same char
 */

/********************/
#include <stdio.h>
#include <stdbool.h>
/********************/
#define MAX_SIZE 32
/********************/

/**
 * Check if first char of both string's is equal
 *
 * @param a - String array
 * @param b - String array
 *
 * @return bool - Return true if equal of false if not
 */
bool starts_with(char* a, char* b)
{
    if(a[0] == b[0]) {
        return true;
    }

    return false;
}


int main()
{
    char str1[MAX_SIZE] = "\0";
    char str2[MAX_SIZE] = "\0";

    printf("\nEnter first word(max 32): ");
    scanf("%s", str1);
    printf("\nEnter second word(max 32): ");
    scanf("%s", str2);

    if(starts_with(str1, str2)) {
        printf("\nFirst char from '%s' equal to first char from '%s'\n\n", str1, str2);
    } else {
        printf("\nFirst char from '%s' NOT equal to first char from '%s'\n\n", str1, str2);
    }

    return 0;
}