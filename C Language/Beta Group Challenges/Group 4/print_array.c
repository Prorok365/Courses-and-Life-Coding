/**
 * @file print_array.c
 * @brief print 5 elements of array.
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 5

/********************/


int main()
{
    int arr_num[MAX_SIZE] = {2, 0, 4, 9, 5};
    int i = 0;

    printf("\n");

    for(i = 0; i < MAX_SIZE; i++) {
        printf("%d ", *(arr_num + i));
    }

    printf("\n\n");

    return 0;
}
