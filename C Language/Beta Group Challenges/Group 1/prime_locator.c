/**
 * @file prime_locator.c
 * @brief Get form user number and Print all prime numbers from 1 to num
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Locate all prime numbers and print them
 *
 * @param num - positive number
 *
 * @return void
 */
void prime_locator(unsigned num)
{
    int i = 0;
    int j = 0;

    int counter = 0;

    for(i = 2; i <= num; i++) {
        counter = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                counter++;
            }
        }

        if(counter == 2) {
            printf("%d ", i);
        }
    }
}


int main()
{
    unsigned num = 0;

    printf("Please enter positive number: ");
    scanf("%d", &num); // space between binary operators

    prime_locator(num);

    return 0;
}

