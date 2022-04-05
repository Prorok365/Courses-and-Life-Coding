/**
 * @file even_sum.c
 * @brief Summarize all even numbers in array 
 * 		  up to 100 or up to the number the user enters
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/
#define DEFAULT_SIZE 100


int main()
{
    int i = 0;
    int user_choice = 0;
    int input_size = 0;
    int even_sum = 0;

    printf("\nPress '1' to enter your own number or '2' to set default(100): ");
    scanf("%d", &user_choice);

    switch(user_choice) {
        case 1:
            printf("\nPlease enter number: ");
            scanf("%d", &input_size);

            for(i = 0; i <= input_size; i += 2) {
                even_sum += i;
            }
            break;
        
        case 2:
            for(i = 0; i <= DEFAULT_SIZE; i += 2) {
                even_sum += i;
            }
            break;
        
        default:
            printf("\nInvalid input. Valid input is '1' or '2'\n\n");
            exit(-1);
    }
    printf("\nThe sum of all even numbers to the requested number is: %d\n\n", even_sum);

    return 0;
}
