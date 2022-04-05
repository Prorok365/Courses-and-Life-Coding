/**
 * @file binary_search.c
 * @brief Search number in array by binary algorithm.
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_SIZE 10

/********************/

/**
 * Search the place of requested number with benary algorithm
 *
 * @param num_arr - number array
 * @param req_num - requested number for search
 * @param left - start location of array
 * @param right - end location of array
 *
 * @return int - index of requested number
 */
int binary_search_rec(int *num_arr, int req_num, int left, int right)
{
    int middle = 0;

    if(left > right) {
        return -1;
    }

    middle = (left + right) / 2;

    if(num_arr[middle] == req_num) {
        return middle;
    }

    if(req_num < num_arr[middle]) {
        return binary_search_rec(num_arr, req_num, left, (middle - 1));
    }

    return binary_search_rec(num_arr, req_num, (middle + 1), right);
}


int main()
{
    int i = 0;
    int input_num = 0;
    int arr_num[MAX_SIZE] = {0};
    int search_num = 0;
    int search_result = 0;

    printf("\nEnter %d numbers in ascending sort(if not, the algorithm doesn't work):", MAX_SIZE);

    for(i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &input_num);
        arr_num[i] = input_num;
    }

    printf("\nEnter the number you want to find: ");
    scanf("%d", &search_num);

    search_result = binary_search_rec(arr_num, search_num, 0, MAX_SIZE - 1);

    if(search_result == -1) {
        printf("\nThe number not found.\n\n");
    } else {
        printf("\nYour number found in place number %d\n\n", (search_result + 1));
    }

    return 0;
}

/*  Explanation of the BinarySearch: 
    This is an algorithm that works on an array sorted as an ascending series. 
    Checks if the middle number in the array is the number, 
    if not then it checks with the number smaller or larger than the middle. 
    Accordingly, the algorithm shortens the search in the irrelevant elements and 
    thus repeats the algorithm until it finds the number. If not found, prints -1*/