//Name: dice3.c
//Input: n - the amount of games from the user, k - goal of succsesful roll when all three dice have equal number 
//Output: success - counting the amount of times the dice brings the same number 
//		  success_index - save the last game if reached the goal

/****************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DICE_ROLL ((rand() % 6) + 1)	//random number between 1 to 6

int main()
{
	srand(time(NULL));		//make different random sequences
	
	int n , k;		//users inputs
	int i;		//loop counter
	int success_index;		//calculates the location of equal series
	int dice1, dice2, dice3;		//the three dice
	
	printf("\nPlease enter how many time you want to play: ");
	scanf("%d", &n);
	printf("\nPlease enter your goal: ");
	scanf("%d", &k);
	
	int success=0;
	/****************************Start of Loop*********************************/
	for(i = 1 ;i <= n ;++i)		
	{
			dice1 = DICE_ROLL;
			printf("%d,", dice1);
			dice2 = DICE_ROLL;
			printf("%d,", dice2);
			dice3 = DICE_ROLL;
			printf("%d  \n", dice3);
			//printf("***%d***\n\n", i);		//shows the row of each dice rolling
			
			if(dice1 == dice2 && dice2 == dice3)	//when equal series
			{
				success++;		//count when 3 dice give equal series
				success_index = i;		//count index of a roll
			}
			if(success == k)	
			{
				printf("\nSuccess! Reached %d equal series after %d games\n", success, success_index);
				break;		//break the loop after reaching the goal
			}
				
	}
	/****************************End of Loop***********************************/
	
	if(i >= n)
		printf("\nFailed! Reached %d equal series\n", success);		//print the equal series that happend but not reached the goal
	
	return 0;
}