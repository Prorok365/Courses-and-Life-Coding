/**
 * @file even_odd_array.c
 * @brief Print ODD or EVEN variables from 0 until the requested number
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int choice = 0;
    int max_num = 0;
    int i = 0;

    printf("\nWhat kind of numbers you want, press '1' if ODD or press '2' if EVEN: ");
    scanf("%d", &choice);

    if(choice != 1 && choice != 2) {
        printf("\nInvalid Input! Only '1' or '2'\n\n");
        exit(-1);
    }

    printf("\nEnter the biggest number you think about it: ");
    scanf("%d", &max_num);

    if(max_num < 0) {
        printf("\nInvalid Input! Only positive numbers\n\n");
        exit(-2);
    }

    if(choice == 1) {
        for(i = 1; i <= max_num; i += 2) {
            printf("%d ", i);
        }
    } else {
        for(i = 0; i <= max_num; i += 2) {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    return 0;
}