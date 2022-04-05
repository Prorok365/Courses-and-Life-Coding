/**
 * @file palindrome_rec.c
 * @brief Check if a input string is palindrome, recursively
 */

/********************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/********************/
#define MAX_SIZE 32
/********************/


/**
 * Check string is palindrome, recursively
 *
 * @param str_arr - string array
 * @param start_arr_elem - first element of array
 *
 * @return bool - true if palindrome, false if not.
 */
bool palindrome_rec(char* str_arr, int start_index, int end_index)
{
    //Empty string is palindrome
    if(strlen(str_arr) == 0) {
        return true;
    }
    //One character string is palindrome
    if(start_index == end_index) {
        return true;
    }
    if(str_arr[start_index] != str_arr[end_index]) {
        return false;
    }
    //Check the substring if string bigger then two characters.
    if(start_index < end_index + 1) {
        return palindrome_rec(str_arr, start_index + 1, end_index - 1);
    }
    return true;
}


int main()
{
    char str_arr[MAX_SIZE] = {0};

    printf("\nPlease enter your string(max %d): ", MAX_SIZE);
    scanf("%[^\n]s", str_arr);

    printf("\nAre this string is palindrome? %s\n\n", palindrome_rec(str_arr, 0, strlen(str_arr) - 1) ? "Yes" : "No");

    return 0;
}