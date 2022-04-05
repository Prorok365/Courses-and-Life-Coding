/**
 * @file element_find.c
 * @brief Find number in input array.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/
#define MAX_SIZE 10

/********************/


int main()
{
    int i = 0;
    int input_num = 0;
    int num_search = 0;
    int arr_num[MAX_SIZE] = {0};

    printf("\nPlease enter 10 numbers: ");

    for(i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &input_num);
        arr_num[i] = input_num;
    }

    printf("\nPlease enter number for search: ");
    scanf("%d", &num_search);

    for(i = 0; i < MAX_SIZE; i++) {
        if(arr_num[i] == num_search) {
            printf("\nThe number is in the array, element number %d\n\n", (i + 1));
            exit(-1);
        }
    }

    printf("\nThe number you searched for not in the array.\n\n");

    return 0;
}
