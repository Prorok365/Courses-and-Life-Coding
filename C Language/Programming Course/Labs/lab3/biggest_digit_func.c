/**
 * @file biggest_digit_func.c
 * @brief Get integer and return the biggest digit in the number.
 */


#include <stdio.h>


/* returns the given number with the opposite sign */
int flip_sign(int n)
{
    return -n;
}


/* returns the biggest digit of the given number */
int biggest_digit(int n)
{
    int biggest = 0;
    int negetive = n < 0;

    /* if number is negetive, make it positive */
    if(negetive) {
        n = flip_sign(n);
    }

    for (biggest = 0; n > 0; n /= 10 /* trim right most digit*/) {
        if (n % 10 > biggest) { // if rightmost digit of n is bigger than current biggest number
            biggest = n % 10;
        }
    }

    return biggest;
}

int main()
{
    int input = 0;

    printf("Enter number:\n");
    scanf("%d", &input);

    printf("Biggest digit is %d\n", biggest_digit(input));
	
    return 0;
}

