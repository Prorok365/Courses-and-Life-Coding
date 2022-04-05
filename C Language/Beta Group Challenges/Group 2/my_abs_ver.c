/**
 * @file my_abs_ver.c
 * @brief Print absolute input number
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int input_num = 0;

    printf("\nPlease enter your number: ");
    scanf("%d", &input_num);

    printf("\n|%d| = %d\n\n", input_num, (input_num >= 0) ? input_num : -(input_num)); // space requierd between binary operator

    return 0;
}