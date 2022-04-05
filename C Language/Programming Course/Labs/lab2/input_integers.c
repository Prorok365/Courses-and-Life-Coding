/**
 * @file input_integers.c
 * @brief Receives integers up to EOF.
 */


#include <stdio.h>


int main()
{
    int input = 0;
    int sum = 0;
    int num_numbers = 0;

    printf("Enter values (EOF/^D to quit):\n");

    while(scanf("%d", &input) == 1) {
        sum += input;
        num_numbers++;
    }
    printf("Average: %lf\n", (double)sum/num_numbers);
	
    return 0;
}

