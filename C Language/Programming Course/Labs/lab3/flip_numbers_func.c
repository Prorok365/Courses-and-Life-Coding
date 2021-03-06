/**
 * @file flip_numbers_func.c
 * @brief Get positive integer and return the number flipped
		  E.g: flip_numbers(12345) = 54321
 */


#include <stdio.h>
#include <stdlib.h>


/* returns the given number's "opposite"
 * the "opposite" of a number is defined as the same
 * number where the order of the digits is a mirror of the original */
int flip_numbers(int n)
{
    int res = 0;
    for(res=0; n > 0; n/=10 /*trim last digit*/) {
        res *= 10;   //make room for new digit
        res += n%10; //take last digit from n
    }

    return res;
}


/* returns 1 if argument is greater or equal to zero. 0 otherwise */
int is_valid_input(int n)
{
    return n >= 0;
}


int main()
{
    int input = 0;
    printf("Enter number:\n");
    scanf("%d", &input);

    if(!is_valid_input(input)) {
        printf("Invalid input. please enter positive numbers only\n");
        exit(1);
    }
    printf("%d flipped: %d\n", input,  flip_numbers(input));
	
    return 0;
}

