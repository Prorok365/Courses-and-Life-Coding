/**
 * @file decreace_by_three.c
 * @brief Prints a series of numbers descending 
 * 		  from 1000 to 1 with jumps of 3
 */


#include <stdio.h>

#define MAX_NUMBER (1000)
#define MIN_NUMBER (1)
#define DIFFERENCE (3)


int main() 
{
    int cur_num = MAX_NUMBER;

    while(cur_num >= MIN_NUMBER) {
        printf("%d ", cur_num);
        cur_num -= DIFFERENCE;
    }

    return 0;
}

