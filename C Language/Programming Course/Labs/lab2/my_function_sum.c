/**
 * @file my_function_sum.c
 * @brief Own version of sum function
 *		  which gets two integers and returns their sum.
 */


#include <stdio.h>


int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 6;    //Example 
	int b = 9;    //Example 

    printf("%d + %d = %d", a, b, sum(a, b));
	
    return 0;
}

