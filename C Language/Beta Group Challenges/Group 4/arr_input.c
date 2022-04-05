/**
 * @file arr_input.c
 * @brief Input 10 variables in array of numbers
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 10

/********************/


int main()
{
    int i = 0;
    int num_arr[MAX_SIZE] = {0};
    int input_num = 0;

    printf("\nEnter %d numbers: ", MAX_SIZE);

    for(i = 0; i < MAX_SIZE; i++) {
        
        scanf("%d", &input_num);

        num_arr[i] = input_num;
    }
    printf("\n");

    for(i = 0; i < MAX_SIZE; i++) {
        printf("%d ", num_arr[i]);
    }
    printf("\n\n");

    return 0;
}
