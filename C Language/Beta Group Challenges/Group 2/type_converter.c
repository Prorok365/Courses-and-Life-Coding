/**
 * @file type_converter.c
 * @brief Get integer number and print the value in unsigned int, 
		  char and float types
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    int num = 0;

    printf("\nPlease enter number: ");
    scanf("%d", &num);

    printf("\n%d converted to unsigned int is %u\n", num, (unsigned int)num);

    printf("\n%d converted to char is %c\n", num, (char)num);

    printf("\n%d converted to float int is %f\n\n", num, (float)num);

    return 0;
}