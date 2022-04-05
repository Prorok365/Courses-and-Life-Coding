/**
 * @file date_move.c
 * @brief - Get from user day, month, year and 
 *          number of days for move.
 *        - Return the date after moving the requested days.
 *        - Return Errors if requested days are negative number
 *          or the date isn't legal date.
 */


/********************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/********************/


/**
 * Check if current year is leap year
 *
 * @param year - number of year
 *
 * @return boolean - Return true if it is leap year or false if not
 */
bool is_leap_year(int year)
{
    static int special_year = 2000;

    if(year == special_year) {
        return true;
    } else if(year % 4 == 0 && (year % 100 != 0 || year % 400 != 0)) {
        return true;
    }

    return false;
}

/***********************************************************************/

/**
 * Sets the amount of days per month
 *
 * @param month - number of month
 * @param year - number of year
 *
 * @return int - Return days in current month and year(leap or not)
 */
int num_days_in_month(int month, int year)
{
    int days_in_month = 0;

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days_in_month = 31;
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            if(is_leap_year(year)) {
                days_in_month = 29;
            } else {
                days_in_month = 28;
            }
            break;
    }

    return days_in_month;
}

/***********************************************************************/

/**
 * Check if input date is legal
 *
 * @param day - number of days
 * @param month - number of month
 * @param year - number of year
 *
 * @return bool - Return true if the date is legal or false if not
 */
bool is_legal_date(int day, int month, int year)
{
    int days_in_month = 0;
    days_in_month = num_days_in_month(month, year);

    // if month is not between 1 to 12
    if(days_in_month == 0) {
        return false;
    } else if((day > days_in_month || day < 1) || (month > 12 || month < 1)) {
        return false;
    }

    return true;
}

/***********************************************************************/

int main()
{
    int day = 0;
    int month = 0;
    int year = 0;
    //Requested days that user want to add to a date
    int days_forward = 0;
    //temporal days for move in the date
    int temp_days = 0;
    //Maximum days that have in the current month
    int max_days_in_month = 0;
    //Maximum month's in year
    int max_months_in_year = 12;

    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    printf("\nEnter the number of days: ");
    //get days to move on a date
    scanf("%d", &days_forward);

    //if input days move on date are negative
    if(days_forward < 0) {
        printf("\nIllegal number of days: %d\n\n", days_forward);
        exit(EXIT_FAILURE);
    //if input date are illegal
    } else if(!is_legal_date(day, month, year)) {
        printf("\nIllegal date %d.%d.%d\n\n", day, month, year);
        exit(EXIT_FAILURE);
    //if date and requested days are legal
    } else {
        temp_days = days_forward + day;

        max_days_in_month = num_days_in_month(month, year);

        //Move the date until the legal day in month
        while(temp_days > max_days_in_month) {
            temp_days -= max_days_in_month;
            month++;

            //if the year are end start over from new year (12 -> 1)
            if(month > max_months_in_year) {
                month = 1;
                year++;
            }
            max_days_in_month = num_days_in_month(month, year);
        }
        //change the day to legal day in month
        day = temp_days;
		
        printf("\nThe new date is: %d.%d.%d\n\n", day, month, year);
    }

    return 0;
}