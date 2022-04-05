// Module: devision.c
// Purpose:  Gets two positive integers and prints the results 
//			 of the division from first number include what left.
/****************************************************************/

#include <stdio.h>

int main()
{
	int positive1, positive2, division, rest;
	
	printf("\nPlease Insert first positive number: ");
	scanf("%d", &positive1);	// Get(input) the first positive number from the user
	printf("\nPlease Insert second positive number: ");
	scanf("%d", &positive2);	// Get(input) the second positive number from the user
	
	division = positive1 / positive2;	// Divide numbers
	rest = positive1 % positive2;	// The rest from the division
	
	printf("\n%d / %d = %d (%d)\n", positive1, positive2, division, rest);	// Prints the answer of the division with what left on the side
	printf("\n%d = %d * %d + %d\n", positive1, positive2, division, rest );	// Prints the multiplication of the first positive number plus is rest
	
	return 0;
}