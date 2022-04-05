 /**
 * @file print_binary_recursive.c
 * @brief print binary appearance of random integer number from 0 to 7.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * Print recursively, binary appearance of number
 *
 * @param num - positive number
 *
 * @return void
 */
void print_binary_recursive(unsigned num)
{
    unsigned pos_num = num;
    if(pos_num > 1) { // please remove the space between the if and ( and fix intendation
        print_binary_recursive(pos_num / 2);
    }
    printf("%d", pos_num % 2);
}


int main()
{
    srand((unsigned int)time(NULL));

    int rand_num = 0;
	
    rand_num = rand() % 8;
    printf("\nInteger appearance: %d\n", rand_num);
    printf("\nBinary appearance: ");

    print_binary_recursive(rand_num);
    printf("\n\n");

    return 0;
}