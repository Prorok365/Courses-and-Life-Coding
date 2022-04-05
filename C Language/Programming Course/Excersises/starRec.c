//Name: starRec.c
//Input: rows - the number of rows from the user
//Output: Build pattern star with  mirrored right triangle in hollow square
/**************************************************************************/

#include<stdio.h>

int main()
{
	int i, j;	//loop counters 
	int rows;	//number of rows for current pattern
	
	printf("\nEnter the number of rows(Must be more than 2): ");	
	scanf("%d", &rows);		//user input
	
	/***************************Start of Loop*******************************/
	for(i = 1; i <= rows; i++)		//rows of a pattern
	{
		
		for(j = 1; j<= rows; j++)	//column of a pattern
		{
			if(i == 1 || i == rows  || j == 1 || j == rows )	//check if currect position is a boundary position
				printf("*");
			else
			{
				if(j <= (rows + 1) - i)		// build triangle in the square
					printf(" ");	
				else
					printf("*");
			}
		}
		
		printf("\n");	// move to next row 
		
	}
	/***************************End of Loop*********************************/
	
	return 0;
}