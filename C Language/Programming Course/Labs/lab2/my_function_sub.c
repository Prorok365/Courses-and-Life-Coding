/**
 * @file my_function_sub.c
 * @brief Own version of subtraction function
 *		  which gets two integers and returns their the result
 * 		  of: "First number" - "Second number".
 */


#include <stdio.h>


int sum(int a, int b)
{
    return a + b;
}


int sub(int a, int b)
{
    return sum(a, -b);
}


int main()
{
    int a = 6;
	int b = 9;

    printf("%d - %d = %d", a, b, sub(a, b));
    
	return 0;
}

