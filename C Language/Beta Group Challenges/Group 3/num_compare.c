/**
 * @file num_compare.c
 * @brief Compare between two numbers
 */

/********************/
#include <stdio.h>

/********************/


int main()
{
    int first_num = 0;
    int second_num = 0;

    printf("\nEnter first number: ");
    scanf("%d", &first_num);

    printf("\nEnter second number: ");
    scanf("%d", &second_num);

    if(first_num > second_num) {
        printf("\n%d bigger then %d\n\n", first_num, second_num);
    } else if(first_num == second_num) {
        printf("\nThe numbers are equal\n\n");
    } else {
        printf("\n%d bigger then %d\n\n", second_num, first_num);
    }

    return 0;
}