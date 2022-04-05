/**
 * @file even_arr_rec.c
 * @brief Check if array is have even elements without loop
 */

/********************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/********************/

/**
 * Check if every element in the array is even, recursively
 *
 * @param num_arr - array of numbers
 * @param arr_size - size of array
 *
 * @return bool - true if all element are even, false if not.
 */
bool even_arr_rec(int* num_arr, int arr_size)
{
    if(num_arr[arr_size] % 2) {
        return false;
    } else if(arr_size == 0) {
        return true;
    }
    return even_arr_rec(num_arr, arr_size - 1);
}


int main()
{
    int arr_size = 0;
    int input_num = 0;
    int i = 0;

    printf("\nHow much numbers you want to enter? ");
    scanf("%d", &arr_size);

    if(arr_size < 0) {
        printf("\nArray cant contain negative size.\n\n");
        exit(EXIT_FAILURE);
    }

    int *num_arr = (int*)malloc(arr_size * sizeof(int));

    if(!num_arr) {
        printf("\nAllocation Failure.\n\n");
        exit(EXIT_FAILURE);
    }

    printf("\nPlease enter numbers(max %d): ", arr_size);

    for(i = 0; i < arr_size; i++) {
        scanf("%d", &input_num);

        num_arr[i] = input_num;
    }

    printf("\nYour Array:\n");

    for(i = 0; i < arr_size; i++) {
        printf("%d ", num_arr[i]);
    }

    printf("\n\nAre this array contains only even numbers? %s\n\n", even_arr_rec(num_arr, arr_size) ? "Yes" : "No");
    free(num_arr);

    return 0;
}
