/**
 * @file user_struct.c
 * @brief create username and password from input data.
 */

/********************/
#include <stdio.h>

/********************/
#define MAX_NAME_SIZE 16
#define MAX_PASS_SIZE 32

/********************/
struct Account {
    char name[MAX_NAME_SIZE];
    char password[MAX_PASS_SIZE];
};

/********************/

int main()
{
    struct Account user1;

    printf("\nEnter your username(Max %d): ", MAX_NAME_SIZE);
    scanf("%s", user1.name);
    printf("\nEnter your password(Max %d): ", MAX_PASS_SIZE);
    scanf("%s", user1.password);

    printf("\nYour Username is: %s\n", user1.name);
    printf("\nYour Password is: %s\n\n", user1.password);

    return 0;
}