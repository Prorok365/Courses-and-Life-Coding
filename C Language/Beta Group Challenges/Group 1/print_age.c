/**
 * @file print_age.c
 * @brief Get users age and print it
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    unsigned int age = 0;

    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    printf("\nYour age is %d\n", age);

    return 0;
}
