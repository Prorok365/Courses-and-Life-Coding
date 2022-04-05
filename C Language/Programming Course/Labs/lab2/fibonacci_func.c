/**
 * @file fibonacci_func.c
 * @brief Get positive integer and return the number in fibonacci series
 */


#include <stdio.h>


int fibonnaci(int n)
{
    int prev = 0; 
	int cur = 1; 
	int temp = 0;

    if (n == 0) {
        return 0;
    }

    while(--n) {
        temp = cur;
        cur += prev;
        prev = temp;
    }
	
    return cur;
}


int main()
{
    int i = 0;
    while(i < 10) {
        printf("fibonnaci N%d = %d\n", i, fibonnaci(i));
        i++;
    }
	
    return 0;
}

