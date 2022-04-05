/**
 * @file array_swap.c
 * @brief Reverse the array
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 10

/********************/


int main()
{
    int i = 0;
    int input_num = 0;
    int arr_num[MAX_SIZE] = {0};
    int temp_num = 0;

    printf("\nPlease enter %d numbers:\n", MAX_SIZE);

    //Fill up the array with users input numbers
    for(i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &input_num);
        arr_num[i] = input_num;
    }
    printf("\nBefore:\n");

    //Print the array before change
    for(i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr_num[i]);
    }

    //Swap the element in the array
    for(i = 0; i < MAX_SIZE / 2; i++) {
        temp_num = arr_num[i];
        arr_num[i] = arr_num[(MAX_SIZE - 1) - i];
        arr_num[(MAX_SIZE - 1) - i] = temp_num;
    }
    printf("\nAfter:\n");

    //Print the array after change
    for(i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr_num[i]);
    }

    printf("\n\n");

    return 0;
}
