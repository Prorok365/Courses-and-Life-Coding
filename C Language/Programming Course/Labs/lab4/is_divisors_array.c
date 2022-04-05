/**
 * @file is_divisors_array.c
 * @brief Return true if array of numbers contains divisors array
 */

/********************/
#include <stdio.h>
#include <stdbool.h>
/********************/

/**
 * Check if next number is a divide number by previous
 *
 * @param array - Array of numbers
 * @param size - Size of the array
 *
 * @return bool - true if all array is divisors array
 */
bool is_divisors_array(int array[], int size)
{
    int i = 0;
    for(i = 0; i < (size - 1); i++) {
        if(array[i + 1] % array[i] != 0) {
            return false;
        }
    }

    return true;
}

/**********************************/

int main()
{
    bool result = false;
    int array[7] = {2, 4, 16, 32, 64, 128, 131};

    result = is_divisors_array(array, 7);
    printf(result ? "\nThis array are all divisors array\n\n" : "\nThis array are NOT all divisors array\n\n");

    return 0;
}