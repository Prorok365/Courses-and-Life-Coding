/**
 * @file celsius_to_fahrenheit.c
 * @brief Get from user celsius degree and convert them to fahrenheit degree
 */

/********************/
#include <stdio.h>

/********************/

/**
 * Convert celsius degree to fahrenheit degree
 *
 * @param num - float number from user
 *
 * @return float - Return fahrenheit degree
 */
float celsius_to_fahrenheit(float num)
{
    float converter = 0;

    float cels_num = num;

    //formula of convert from celsius to fahrenheit
    converter = (cels_num * 9 / 5) + 32;

    return converter;
}


int main()
{
    float num = 0;
    float fahrenheit = 0;

    printf("\nPlease enter how much degrees in celsius you want to convert: ");
    scanf("%f", &num);

    fahrenheit = celsius_to_fahrenheit(num);

    printf("\nIn fahrenheit is %.2f\n\n", fahrenheit);

    return 0;
}