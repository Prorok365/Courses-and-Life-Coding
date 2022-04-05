//Name: pyraAND.c
//Input: Height of inverted pyramid, &'s and spaces in the pyramid
//Output: Prints inverted pyramid with user numbers of &'s and spaces in the pattern 
/***********************************************************************************/

//(height*2 - (2*i - 1)) size of row
//(height*2 - 1 - 2*i)	size of row between "*"

#include<stdio.h>


int main()
{
	int i, j;	//loop counters
	int height, and, spaces;		
	int counter = 1;	//counter for user input
	int column_counter;		//counter for every char in the pyramid
	
	printf("Please enter the wanted height (Can't be less then 2): ");
	scanf("%d", &height);
	
	printf("Please enter the number of &: ");
	scanf("%d", &and);
	
	printf("Please enter the number of spaces: ");
	scanf("%d", &spaces);
	
	for(i = 1; i <= height; i++)	//rows
	{
		column_counter=0;
		for(j = 1; j < i; j++)		//build spaces for every new row
		{
			printf(" ");
		}
		
		for( j = 1; j <= (height*2 - (2*i - 1)); j++)	//loop that count the size of the pyramid 
		{
			if(i == 1 || j == 1 || j == (height*2 - (2*i - 1)))		// print first row of stars and last row with one star 
			{
				printf("*");
			}
			else
			{
				while(column_counter < (height*2 - 1 - 2*i))	//count every char in the pyramid	
				{
					if(counter<=and)	//count &'s and count how much chars input if the row
					{
						printf("&");
						counter++;
						column_counter++;
					} else {	//count spaces and how much shars input in the row
						printf(" ");
						counter++;
						column_counter++;
						
						if(counter == and + spaces + 1)	// reset the counter when all input user was inputed in the pyramid
						{
							counter = 1;
						}	
					}
					
				}
			
			}
		}
		printf("\n");		//end row
	}

	printf("\nHeight: %d", height);
	printf("\nNumber of &: %d", and);
	printf("\nNumber of spaces: %d\n", spaces);
	
	return 0;
}






