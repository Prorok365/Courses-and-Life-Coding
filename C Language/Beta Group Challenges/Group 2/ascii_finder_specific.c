/**
 * @file ascii_finder_specific.c
 * @brief Print the ASCII value of input English letter, 
		  print error if its not a English letter
 */

/********************/
#include <stdio.h>
#include <ctype.h>
/********************/

int main()
{
    char input_char = 0;

    printf("\nEnter a character: ");
    scanf("%c", &input_char);

    if(isalpha(input_char)) {
        printf("\nASCII value of a character %c is %d\n\n", input_char, input_char);

    } else {
        printf("\nSorry, not a English letter\n\n");
    }

    return 0;
}