/**
 * @file auto_guesser.c
 * @brief Gets a positive integer between 1 and 1000.
 *		  Create random numbers until the value is equal to the selected number.
 *		  Print to screen how many times it takes to reach the number.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE (1000)


int main()
{
    int n = 0;
    int num_of_tries = 0;

    srand(time(0));

    printf("Enter number between 1 and %d\n", MAX_VALUE);
    scanf("%d", &n);

    while ((rand()%MAX_VALUE + 1) != n) {
        num_of_tries++;
    }
    printf("It took %d random numbers to get to your choice!\n", num_of_tries);
	
    return 0;
}

