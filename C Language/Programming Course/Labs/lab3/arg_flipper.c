/**
 * @file arg_flipper.c
 * @brief Get two integer arguments and flip between them.
 */


#include <stdio.h>


void arg_flipper(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 4, b=9;

    printf("Before:\n");
    printf("a:%d b:%d\n", a, b);

    do_something(a, b);

    printf("After:\n");
    printf("a:%d b:%d\n", a, b);
	
    return 0;
}

