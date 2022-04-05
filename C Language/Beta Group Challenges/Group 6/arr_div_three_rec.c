/**
 * @file arr_div_three_rec.c
 * @brief Return True if all elements in array divide by 3 or False if not.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/********************/

/**
 * Check if all elements in array are divide 3
 *
 * @param arr - array of numbers
 * @param size - size of array
 *
 * @return bool - True if elements divide 3 or False if not
 */
bool arr_div_three_rec(int* arr, int size)
{
    if(size == 0) {
        return true;
    }
    return (arr[size] % 3) ? false : arr_div_three_rec(arr, size-1);
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

    printf("\nAre all element in the array divide by 3? %s\n\n", arr_div_three_rec(num_arr, arr_size) ? "True" : "False");

    free(num_arr);
    return 0;
}