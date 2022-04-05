/**
 * @file assembly_rec.c
 * @brief Calculate assembly of a number.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/

/**
 * Calculate assembly of a number
 *
 * @param num - users number
 *
 * @return int - result of assembly
 */
int assembly_rec(int num)
{
    if(num == 1) {
        return 1;
    }
    return num* assembly_rec(num - 1);
}


int main()
{
    int num = 0;
    printf("\nPlease enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("\nInvalid Input. Only Positive numbers.\n\n");
        exit(-1);
    }
    printf("\n%d! = %d\n\n", num, assembly_rec(num));

    return 0;
}
