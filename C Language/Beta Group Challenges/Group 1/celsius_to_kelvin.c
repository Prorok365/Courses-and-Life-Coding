/**
 * @file celsius_to_kelvin.c
 * @brief Get from user celsius degree and convert them to kelvin degree
 */

/********************/
#include <stdio.h>

/********************/
#define KELVIN 273.15

/********************/

/**
 * Convert celsius degree to fahrenheit degree
 *
 * @param num - float number from user
 *
 * @return float - Return kelvin degree
 */
float celsius_to_kelvin(float num)
{
    float converter = 0;

    //formula of convert from celsius to kelvin
    converter = num + KELVIN;

    return converter;
}


int main()
{
    float num = 0;
    float kelvin = 0;

    printf("\nPlease enter how much degrees in celsius you want to convert: ");
    scanf("%f", &num);

    kelvin = celsius_to_kelvin(num);

    printf("\nIn kelvin is %.2f\n\n", kelvin);

    return 0;
}