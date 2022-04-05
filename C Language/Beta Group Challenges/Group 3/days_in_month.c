/**
 * @file days_in_month.c
 * @brief Print name of month with amount his days by input number.
 *
 */

/********************/
#include <stdio.h>

/********************/
#define LONG_MONTH 31
#define SHORT_MONTH 30


int main()
{
    int month_num = 0;

    printf("\nEnter the number of month(1-12): ");
    scanf("%d", &month_num);

    switch(month_num)
    {
        case 1:
            printf("\nThis month is January and he have %d days\n\n", LONG_MONTH);
            break;
        case 2:
            printf("\nThis month is February and he have two options of days: 28 days in a common year and 29 days in leap year\n\n");
            break;
        case 3:
            printf("\nThis month is March and he have %d days\n\n", LONG_MONTH);
            break;
        case 4:
            printf("\nThis month is April and he have %d days\n\n", SHORT_MONTH);
            break;
        case 5:
            printf("\nThis month is May and he have %d days\n\n", LONG_MONTH);
            break;
        case 6:
            printf("\nThis month is June and he have %d days\n\n", SHORT_MONTH);
            break;
        case 7:
            printf("\nThis month is July and he have %d days\n\n", LONG_MONTH);
            break;
        case 8:
            printf("\nThis month is August and he have %d days\n\n", LONG_MONTH);
            break;
        case 9:
            printf("\nThis month is September and he have %d days\n\n", SHORT_MONTH);
            break;
        case 10:
            printf("\nThis month is October and he have %d days\n\n", LONG_MONTH);
            break;
        case 11:
            printf("\nThis month is November and he have %d days\n\n", SHORT_MONTH);
            break;
        case 12:
            printf("\nThis month is December and he have %d days\n\n", LONG_MONTH);
            break;
        default:
            printf("\nSorry, cant recognize this month. Enter number between 1 to 12\n\n");
    }

    return 0;
}