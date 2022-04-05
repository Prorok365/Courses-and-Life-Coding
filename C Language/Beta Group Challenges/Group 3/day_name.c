/**
 * @file day_name.c
 * @brief Print the day name by number
 */

/********************/
#include <stdio.h>

/********************/


int main()
{
    int weekday = 0;

    printf("\nEnter the number of day(1-7): ");
    scanf("%d", &weekday);

    switch (weekday)
    {
        case 1:
            printf("\nToday is Sunday\n\n");
            break;
        case 2:
            printf("\nToday is Monday\n\n");
            break;
        case 3:
            printf("\nToday is Tuesday\n\n");
            break;
        case 4:
            printf("\nToday is Wednesday\n\n");
            break;
        case 5:
            printf("\nToday is Thursday\n\n");
            break;
        case 6:
            printf("\nToday is Friday\n\n");
            break;
        case 7:
            printf("\nToday is Saturday\n\n");
            break;
        default:
            printf("\nSorry, cant recognize this day. Enter number between 1 to 7\n\n");
    }

    return 0;
}