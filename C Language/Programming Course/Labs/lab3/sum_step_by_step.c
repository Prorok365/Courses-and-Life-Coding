/**
 * @file sum_step_by_step.c
 * @brief Get number from user that present the sum.
 * 		  Print message on screen when user input enough
 * 		  numbers to reach the sum.
 */


#include <stdio.h>


int main()
{
    int dest_sum = 0;
    int input = 0;
    int cur_sum = 0;

    printf("Enter sum:\n");
    scanf("%d", &dest_sum);

    while(cur_sum < dest_sum) {
        printf("Enter number:\n");
        scanf("%d", &input);

        cur_sum += input;

        printf("Current sum is: %d\n", cur_sum);
    }
    printf("You have reached the destination sum!");
    
	return 0;
}

