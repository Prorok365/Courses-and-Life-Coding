/**
 * @file age_char_1line.c
 * @brief Print in one line input age and first char of name.
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    unsigned int age = 0;

    char charname = 0;

    printf("Please enter your age and after your name: ");
    scanf("%d %c", &age, &charname);

    printf("Your age is %d and your first character name is %c", age, charname);

    return 0;
}