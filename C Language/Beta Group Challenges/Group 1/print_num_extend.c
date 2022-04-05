/**
 * @file print_num_extend.c
 * @brief Print numbers from 1 to input number, 
 * 		  dont stop ask number until get input of negative number
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int num = 0;
    int i = 0;

    do {
        printf("\nPlease enter number: ");
        scanf("%d", &num);

        printf("\n");

        for(i = 1; i <= num; i++) {
            printf("%d ", i);
        }

        printf("\n");

    } while(num > 0);

    printf("Sorry, dont like negative numbers\n\n");

    return 0;
}
