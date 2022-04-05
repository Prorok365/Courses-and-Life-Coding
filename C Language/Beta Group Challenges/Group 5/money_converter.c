/**
 * @file money_converter.c
 * @brief Convert dollar and euro to shekel
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/
#define DOLLAR_IN_SHEKEL_RATIO 3.4165    //last update: 20.09.2020
#define EURO_IN_SHEKEL_RATIO 4.045    //last update: 20.09.2020

/********************/


int main()
{
    int user_choice = 0;
    float amount_of_shekels = 0;
    float amount_of_money = 0;

    printf("\nWelcome to money converter 'its over 9000!'\n");

    printf("\nWant to transfer dollars or euros into shekels?\nPress '1' for dollars or '2' for euros: ");
    scanf("%d", &user_choice);

    switch(user_choice) {
        case 1:
            printf("\nHow much dollars you want to convert? ");
            scanf("%f", &amount_of_money);

            if(amount_of_money < 0) {
                printf("\nInvalid value. Cant calculate negative numbers..\n\n");
                exit(-2);
            }

            amount_of_shekels = DOLLAR_IN_SHEKEL_RATIO * amount_of_money;
            printf("\nYou get %.4f shekels from %.2f dollars.\n\n", amount_of_shekels, amount_of_money);
            break;

        case 2:
            printf("\nHow much euro you want to convert? ");
            scanf("%f", &amount_of_money);

            if(amount_of_money < 0) {
                printf("\nInvalid value. Cant calculate negative numbers..\n\n");
                exit(-3);
            }

            amount_of_shekels = EURO_IN_SHEKEL_RATIO * amount_of_money;
            printf("\nYou get %.4f shekels from %.2f euro.\n\n", amount_of_shekels, amount_of_money);
            break;

        default:
            printf("\nInvalid input. Valid numbers are '1' or '2'\n\n");
            exit(-1);
    }

    return 0;
}
