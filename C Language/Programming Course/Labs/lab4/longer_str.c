/**
 * @file longer_str.c
 * @brief Print the longest string between two arrays
 */

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 32


/**
 * Return the longest string array between two arrays
 * while using only ternary operator. if same size Return first array
 *
 * @param arr1 - string array
 * @param arr2 - string array
 *
 * @return char - return the longest array
 */

char* longer_str(char *arr1, char *arr2)
{
    if(strlen(arr1) == strlen(arr2)) {
        return "Nobody! Both string's are same length";
    }

    return (strlen(arr1) >= strlen(arr2)) ? arr1 : arr2;
}

/*********************************************************/

int main()
{
    char arr1[MAX_SIZE] = "\0";
    char arr2[MAX_SIZE] = "\0";

    printf("\nEnter first string(max 32): ");
    scanf("%s", &arr1);
    printf("\nEnter second string(max 32): ");
    scanf("%s", &arr2);

    printf("\nThe longest string is: %s\n\n", longer_str(arr1, arr2));

    return 0;
}