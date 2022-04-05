//Name: maxSeries.c
//Input: num - series of integer numbers, stops when input 0.
//Output: min, max, average, mindex, maxdex (minimum index, maximum index)
//Purpose:search for minimum, maximum and calculate average after print all with the index of min max nums.
/**********************************************************************************************************/

#include<stdio.h>
int main()
{
	float average; 
	int num;	// input user
	int sum=0;		// sum for average calculate
	int max=0, min=0, mindex=0 ,maxdex=0;	//minimum,maximum and index of the min max numbers
	
	printf("Please enter series of numbers (end by entering 0): "); 
	scanf("%d", &num);	//user's input
	
	min=max=num;
	int index = 0;
	while(num != 0)	//loop search of minimum and maximum. end when 0 was input
	{
		if(num > max)
		{
			max = num;	//enter the biggest number in max
			maxdex = index;		//cell num of maximum num
		}
		if(num < min)
		{
			min = num;		//enter the smallest number in min
			mindex = index;		//celll number of minimum number	
		}
		
		sum += num;		//sum of all numbers that input (without 0)
		
		scanf("%d",&num); //The next number of the user
		
		index++;	//cell number
	}
	
	if(index == 0)		//check if user enter 0 first
		average = 0;
	else
		average = sum / (float)index;		//calculate average of all numbers in the input
	
	printf("\nThe maximum value is: %d (Cell number %d)\n", max, maxdex);	//output max number and his cell number
	printf("The minimum value is: %d (Cell number %d)\n", min, mindex); 	//output min number and his cell number
	printf("The average of all numbers is:%.2f\n", average);	//average of all numbers
	
	return 0;
}