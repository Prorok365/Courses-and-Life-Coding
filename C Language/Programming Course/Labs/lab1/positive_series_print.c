/**
 * @file positive_series_print.c
 * @brief Receives from the user a positive integer n.
		  Prints to the screen the sum of a series of accounts with n members
		  Where a1 = 1 and d = 2.
 */
#include <stdio.h>
#define D  (2)
#define A1 (1)

int main() 
{
    int n = 0; 
	int a = A1;
	int sum = 0;

    printf("Enter n value:\n");
    scanf("%d", &n);

    while(n--) {
        sum += a;
        a += D;
    }
    printf("Sum of series: %d\n", sum);

    return 0;
}
