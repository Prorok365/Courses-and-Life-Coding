//Name: decSeries.c
//Input: num - series of integer numbers, stops when input EOF(Ctrl-D)
//Output: count, long_count, the longest descending series from the input
/************************************************************************/

#include<stdio.h>

int main()
{
	int num;		//users input
	int temp;		//temporal number
	int count, long_count;		//counters of the series, long for the longest descending series if user input random numbers
	int flag;		//flag for input scanf
	
	printf("\nPlease enter the numbers (end with EOF): "); 
	flag = scanf("%d", &num);		//first input of the user
	
	count = 1;		//minimum series long must be 1
	long_count = 1;		//minimum series long must be 1
	temp = num;		//temporal number of if 
	
	/***************************Start of Loop*******************************/
	while(flag != EOF)		//start loop (Ctrl-D stop the loop)
	{
		if(num < temp)		//if the next number is smaller than the previous one
		{
			count++;		//count size of a longest series
		}
		else	//if next number bigger then the previous one (break the counter)
		{
			if(count>long_count)	//if the size is bigger then the longest 
			{
				long_count = count;		//getting the new variable
				count = 1;		//resetting the counter
			}
		}
		
		temp = num;		//getting the current variable of the loop
		
		flag = scanf("%d", &num);		//next input of the user
	}							
	/***************************End of Loop*********************************/
	
	if(count >= long_count)		//happen if the user input from start descending series 
		printf("\nThe longest series of descending series is: %d\n", count);	//print the longest series 
	else	
		printf("\nThe longest series of descending series is: %d\n", long_count);
	
	return 0;
}