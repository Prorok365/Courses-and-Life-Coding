/**
 * @file triangle_print.c
 * @brief Receives from a user a positive integer and prints to a 
 * 	      triangular screen at the height of the number.
 */


#include <stdio.h>


int main()
{
    int n = 0; 
	cur_line=1;
    
	printf("Enter height:\n");
    scanf("%d", &n);

    while(n--) {
        printf("%d\n", cur_line);
        /* add a "1" on the right of current number */
        cur_line *= 10;
        cur_line += 1;
    }

    return 0;
}
