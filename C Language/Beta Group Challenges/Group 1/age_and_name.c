/**
 * @file age_and_name.c
 * @brief Print input age and first character of name(even if user write full name)
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    unsigned int age = 0;

    char name = 0;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("\nEnter your name: ");
    scanf(" %c", &name);

    printf("\nYour age is %d and first character of your name is %c\n", age, name);

    return 0;
}
