/**
 * @file histograma.c
 * @brief count how much 0-9 numbers appear in array.
 */

/********************/
#include <stdio.h>

/********************/


int main()
{
    int num_arr[20] = {1, 7, 6, 2, 8, 4, 1, 9, 7, 5, 3, 1, 5, 4, 8, 7, 6, 3, 5, 4};
    int* num_count = (int*)calloc(10, sizeof(int));
    int i = 0;

    for(i = 0; i < 20; i++) {
        num_count[num_arr[i]]++;
    }

    for(i = 0; i < 10; i++) {
        printf("\nNumber %d appears %d times\n", i, num_count[i]);
    }
    printf("\n");

    free(num_count);

    return 0;
}
