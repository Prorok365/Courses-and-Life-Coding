/**
 * @file print_dovidors_func.c
 * @brief Get positive integer and print all devidors of a number.
 */


#include <stdio.h>


void print_devidors(int n)
{
    int i = 1;

    printf("Devidors:\n");
    while(i < n) {
        if(n % i == 0) {
            printf("%d\t", i);
        }
        i++;
    }
}


int main()
{	
    int input = 0;
    printf("Enter number:\n");
    scanf("%d", &input);

    print_devidors(input);
    
	return 0;
}

