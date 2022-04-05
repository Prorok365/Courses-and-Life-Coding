/**
 * @file my_function_is_prime.c
 * @brief Get number and return 1 if prime number or 0 if not.
 */


#include <stdio.h>
#include <math.h>


int is_prime(int n)
{
    int i = 0;

    if(n == 2)
	{
        return 1;
    }

    if(n < 2 || n % 2 == 0) {
        return 0;
    }

    i = 3;
    while(i < sqrt(n) + 1) {
        if(n%i == 0) {
            return 0;
        }
        i += 2;
    }
    return 1;
}


int main()
{
    printf("%d\n", is_prime(2));
    printf("%d\n", is_prime(3));
    printf("%d\n", is_prime(4));
    printf("%d\n", is_prime(5));
    printf("%d\n", is_prime(6));
    printf("%d\n", is_prime(7));
	
    return 0;
}

