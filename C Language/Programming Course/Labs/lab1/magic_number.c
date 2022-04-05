/**
 * @file magic_number.c
 * @brief A magic number that the remainder it leaves in a 
 *	      division by 7 is the same for both the square
 *	      of the number and the root of the number
 * 		  E.g.: (X ^ 2) % 7 == floor(√X) % 7
 * 		  
 * 		  Grill numbers until reach the magic number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N (7)

int main()
{
    srand(time(0));
	
    int rand_val;

    do {
        rand_val = rand();
    } while(((int)pow(rand_val,2))%N != ((int)sqrt(rand_val))%N);

    printf("%d is a tel-hai number!\n", rand_val);

    return 0;
}
