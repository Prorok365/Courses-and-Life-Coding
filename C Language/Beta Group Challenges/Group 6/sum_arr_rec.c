/**
 * @file sum_arr_rec.c
 * @brief Summarize all elements in array
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/

/**
 * Summarize all elements in array, recursively
 *
 * @param arr - array of numbers
 * @param size - size of array
 *
 * @return int - sum of array
 */
int sum_arr_rec(int* arr, int size)
{
    if(size == 0) {
        return 1;
    }
    return sum_arr_rec(arr, size - 1) + arr[size];
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

    printf("\nSum of all elements in array: %d\n\n", sum_arr_rec(num_arr, arr_size));
    free(num_arr);

    return 0;
}
