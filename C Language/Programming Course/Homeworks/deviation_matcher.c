/**
 * @file deviation_matcher.c
 * @brief Function which generates a number according to the normal distribution.
 */

/********************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/********************/
#define PI 3.14159265358979323846
/********************/


/**
 * Creates random doubles
 *
 * @param None
 *
 * @return double - Return number according to a standard normal distribution
 */
double rand_double()
{
    int U1 = 0;
    int U2 = 0;

    double D1 = 0;
    double D2 = 0;

    //makes sure that random numbers wont be 0
    while(U1 == 0 || U2 == 0) {
        U1 = rand();
        U2 = rand();
    }

    D1 = (double)((double)U1 / RAND_MAX);
    D2 = (double)((double)U2 / RAND_MAX);

    //Distribution formula to create a number according to a standard normal distribution
    return sqrt(-2 * (double)(log(D1))) * cos(2 * PI * D2);
}


/**
 * Create array with random double numbers
 *
 * @param arr - new array
 * @param n - size of array
 *
 * @return double - returns array of random doubles from the given array size
 */
double array_of_doubles(double arr[], int n)
{
    int i = 0;
    arr[n] = 0;

    for(i = 0; i < n; i++) {
        arr[i] = rand_double();
    }
    return *arr;
}


/**
 * Calculates the mean of all the numbers in the array
 *
 * @param arr - array of double variables
 * @param n - size of array
 *
 * @return double - returns the mean of all arrays doubles
 */
double mean_doubles_array(double arr[], int n)
{
    int i = 0;
    double result = 0;

    for(i = 0; i < n; i++) {
        result += arr[i];
    }
	
    return (result / n);
}


/**
 * Calculate the standard deviation of n variables
 *
 * @param arr - array of double variables
 * @param arr_mean - mean of all variables in the array
 * @param size - size of array
 *
 * @return double - return standard deviation of array
 */
double standard_deviation_of_array_doubles(double arr[], double arr_mean, double size)
{
    double sd = 0;
    double top_sd = 0;
    int i = 0;

    //calculates the sum of top sd formula
    for(i = 0 ;i < size ;i++) {
        top_sd += pow((arr[i] - arr_mean), 2);
    }
    sd = sqrt(top_sd / size);
	
    return sd;
}


/**
 * count how many values in the array are in the range [-sd, sd]
 *
 * @param arr - array of double variables
 * @param sd - standard deviation of array
 * @param size - size of array
 * @param number - numbers between 3 to 1 (as a request)
 *
 * @return double - return standard deviation of array in certain range
 */
double standard_deviation_calculator(double arr[], double sd, double size, int number) 
{
    double counter = 0;
    int i = 0;

    //counts how many array numbers are in a certain range
    for(i = 0; i < size; i++) {
        if(arr[i] < number && arr[i] > -number) {
            counter++;
        }
    }

    return ((double)counter / size);
}


int main()
{
    //turns on random numbers
    srand((unsigned int)time(10));

    double array_mean = 0;
    int i = 0;
    double sd = 0;
    double *arr = 0;
    double size_of_array = 1000000;

    //dynamically allocating memory for array
    arr = malloc(size_of_array * sizeof(double));
    //get array
    array_of_doubles(arr, size_of_array);
    //get mean of array
    array_mean = mean_doubles_array(arr, size_of_array);
    //get standard deviation of array
    sd = standard_deviation_of_array_doubles(arr, array_mean, size_of_array);
    printf("\nmean = %f, sd = %f\n", array_mean, sd);

    //Get standard deviation in certain range of numbers
    for(i = 3; i > 0; i--) {
        printf("(-%d, %d): %f\n", i, i, standard_deviation_calculator(arr, sd, size_of_array, i));
    }
    printf("\n");
    
	free(arr);
    return 0;
}


