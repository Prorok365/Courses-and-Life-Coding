/**
 * @file str_cmp.c
 * @brief Get two string's from user and check
 *        if they are same string or not
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 10

/********************/

/**
 * Check if two strings are same
 *
 * @param a - String array
 * @param b - String array
 *
 * @return int - Return 0 if they same
 *             - Return 1 if first not same char in first
 *                        string are bigger(ASCII) than first not same char in second string
 *             - Return -1 if first not same char in first
 *                        string are smaller(ASCII) than first not same char in second string
 */
int str_cmp(char *a, char *b)
{
    unsigned int i = 0;
    for(i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if(a[i] != b[i]) {
            if((int)a[i] > (int)b[i]) {
                return 1;
            } else if((int)a[i] < (int)b[i]) {
                return -1;
            }
        }
    }

    return 0;
}

/**********************************/

int main()
{
    int result = 0;

    char first_str[MAX_SIZE] = "\0";
    char second_str[MAX_SIZE] = "\0";

    printf("\nEnter first string(max 10 characters): ");
    scanf("%s", first_str);
    printf("\nEnter second string(max 10 characters): ");
    scanf("%s", second_str);

    result = str_cmp(first_str, second_str);

    if(result == 0) {
        printf("\nBoth string's are equal!\n\n");
    } else if(result == 1) {
        printf("\nBoth string's are NOT equal!");
        printf("\nFirst string char bigger than second string char\n\n");
    } else {
        printf("\nBoth string's are NOT equal!");
        printf("\nSecond string char bigger than first string char\n\n");
    }

    return 0;
}