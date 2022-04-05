/**
 * @file reversed_arr_print_rec.c
 * @brief Print reversed array.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/

/**
 * Print reversed array, recursive function.
 *
 * @param num_arr - array of numbers
 * @param size - size of array
 *
 * @return void
 */
void reverse_array_rec(int* num_arr, int size)
{
    if(size == 0) {
        return;
    }

    printf("%d ", num_arr[size - 1]);
    reverse_array_rec(num_arr, size - 1);
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

    printf("\nBefore:\n");
    for(i = 0; i < arr_size; i++) {
        printf("%d ", num_arr[i]);
    }

    printf("\nAfter:\n");
    reverse_array_rec(num_arr, arr_size);
    printf("\n\n");

    free(num_arr);

    return 0;
}
