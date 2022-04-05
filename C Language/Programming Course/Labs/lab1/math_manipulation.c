/**
 * @file math_manipulation.c
 * @brief Receives from the user a positive integer, 
 * 		  and prints on the screen the square of the number, 
 * 		  the root of the number and the remainder 
 * 		  of the division of the number by 7
 */


#include <stdio.h>
#include <math.h>

#define MOD_VAL (7)


int main() 
{
    int n = 0;

    printf("Enter number:\n");
    scanf("%d", &n);

    printf("%d^2=%g\n", n, pow(n, 2));
    printf("sqrt(%d)=%g\n", n, sqrt(n));
    printf("%d%%%d=%d\n", n, MOD_VAL, n % MOD_VAL);

    return 0;
}

