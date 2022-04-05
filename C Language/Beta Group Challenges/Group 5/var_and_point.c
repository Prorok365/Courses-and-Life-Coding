/**
 * @file var_and_point.c
 * @brief Proves that the address and value of a pointer by
 *		  using only a variable and also by using only a pointer.
 */

/********************/
#include <stdio.h>

/********************/


int main()
{
    int num = 24;
    int* p_num;
    p_num = &num;

    printf("\nValue of num variable: %d\n", num);
    printf("\nAddress of num valuable is: %x\n", &num);
    printf("\nAddress stored in p_num variable: %x\n", p_num);
    printf("\nValue of *p_num variable: %d\n\n", *p_num);

    return 0;
}
