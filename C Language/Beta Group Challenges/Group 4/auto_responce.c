/**
 * @file auto_responce.c
 * @brief Checks the age of the user and gives 
 *		  permission according to the appropriate age
 */

/********************/
#include <stdio.h>
#include <stdlib.h>

/********************/


int main()
{
    int age = 0;
    int pass_choice = 0;
    int user_pass = 0;
    int choice_with_pass = 0;
    int choice_without_pass = 0;

    printf("\nWelcome to Beta's autoresponder.\n");

    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    if(age < 18) {
        printf("\nSorry, the site is classified for people aged 18 and over.\n\nPermission denied.\n\n");
        exit(-1);
    }

    printf("\nPermission Granted.\n");

    printf("\nChoose your option:");
    printf("\n1) With password.");
    printf("\n2) Without password(Caution, this option gives limited permissions).\n");

    printf("\nWhat your choice? ");
    scanf("%d", &pass_choice);

    switch(pass_choice) {
        case 1:
            printf("\nEnter your password: ");
            scanf("%d", &user_pass);

            printf("\nPermission Granted.\n");

            printf("\nWhat do you want to do?");
            printf("\n1) Call your favorite contact.");
            printf("\n2) Send an SMS to your favorite contact.");
            printf("\n3) Talk to a beta friend for advice down the road.\n");

            printf("\nWhat your choice? ");
            scanf("%d", &choice_with_pass);

            switch(choice_with_pass) {
                case 1:
                    printf("\nYou choose call your favorite contact.\n\n");
                    break;

                case 2:
                    printf("\nYou choose send an SMS to your favorite contact.\n\n");
                    break;

                case 3:
                    printf("\nYou choose talk to a beta friend for advice down the road.\n\n");
                    break;

                default:
                    printf("\nSorry, invalid input. please enter 1, 2 or 3\n\n");
                    exit(-2);
            }

            break;

        case 2:
            printf("\nWhat do you want to do?");
            printf("\n1) Call your favorite contact.");
            printf("\n2) Send an SMS to your favorite contact.");

            printf("\nWhat your choice? ");
            scanf("%d", &choice_without_pass);

            switch(choice_without_pass) {
                case 1:
                    printf("\nYou choose call your favorite contact.\n\n");
                    break;

                case 2:
                    printf("\nYou choose send an SMS to your favorite contact.\n\n");
                    break;

                default:
                    printf("\nSorry, invalid input. please enter 1 or 2\n\n");
                    exit(-2);

            break;
            }

        default:
            printf("\nSorry, invalid input. please enter 1 or 2\n\n");
            exit(-3);
    }

    return 0;
}
