/**
 * @file ascii_finder.c
 * @brief Get from user three characters and Print the ascii value of every character
 */

/********************/
#include <stdio.h>

/********************/

int main()
{
    char first_char = 0;
    char second_char = 0;
    char third_char = 0;

    printf("\nPlease enter three characters: ");
    scanf("%c%c%c", &first_char, &second_char, &third_char);
    
    printf("\nThe ACSII value of the characters is: %d, %d and %d\n\n", first_char, second_char, third_char);

    return 0;

}