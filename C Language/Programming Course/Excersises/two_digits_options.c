// Module: two_digits_options.c
// Purpose: Receives a two-digit number and print in four options: 
//				1) With space between digits
//				2) Reversed
//				3) Vertically
//				4) Reverse and vertically
/****************************************************************/

#include <stdio.h>

int main()
{
	int num, left, right;
	
	printf("\nPlease enter a 2-digit number: ");
	scanf("%d", &num);	// Get(input) 2-digits number from the user
	
	left = num / 10; // Left digit
	right = num % 10; // Right digit
	
	printf("\nWhen split the number: %d %d\n", left, right);	// Print space between digits
	printf("\nWhen reverse the number: %d%d\n", right, left);	// Print reversed number
	printf("\nWhen the number vertical: \n%d\n%d\n", left, right);	// Print the number vertically
	printf("\nWhen the number vertical and reverse: \n%d\n%d\n", right, left);	// Print the number vertically and reversed
	
	return 0;
}