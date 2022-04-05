/**
 * @file terminal_time.c
 * @brief Print time and update it every second, automatically.
 */

/********************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/********************/


int main()
{
    while(1) {
        time_t curr_secs = time(NULL);

        struct tm tm = *localtime(&curr_secs);

        printf("\n%02d:%02d:%02d (Press in terminal Ctrl+C to stop the program)\n\n",
        tm.tm_hour, tm.tm_min, tm.tm_sec);

        sleep(1);
    }

    return 0;
}
