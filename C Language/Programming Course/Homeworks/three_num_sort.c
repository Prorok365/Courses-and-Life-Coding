/**
 * @file three_num_sort.c
 * @brief Sort three address number's with pointers arithmetics
 */


#include <stdio.h>


/**
 * Swap between the addresses
 *
 * @param a - address of integer
 * @param b - address of integer
 *
 * @return void
 */
void swap(int* a, int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}


/**
 * Check which int is the biggest and swap its address with pa
 *
 * @param pa - address of first integer number
 * @param pb - address of second integer number
 * @param pc - address of third integer number
 *
 * @return void
 */
void max_a(int* pa, int* pb, int* pc)
{
    if(*pa < *pc) {
        swap(pa, pc);
    }
    if(*pa < *pb) {
        swap(pa, pb);
    }
}


/**
 * Check which int is the smallest and swap its address with pa
 *
 * @param pa - address of first integer number
 * @param pb - address of second integer number
 * @param pc - address of third integer number
 *
 * @return void
 */
void min_a(int* pa, int* pb, int* pc)
{
    if(*pa > *pc) {
        swap(pa, pc);
    }
    if(*pa > *pb) {
        swap(pa, pb);
    }
}


/**
 * Check which int is in the middle and swap its address with pa
 *
 * @param pa - address of first integer number
 * @param pb - address of second integer number
 * @param pc - address of third integer number
 *
 * @return void
 */
void mid_a(int* pa, int* pb, int* pc)
{
    int min_int = 0;
    int max_int = 0;
	
    //set min int
    min_a(pa, pb, pc);
    min_int = *pa;
    //set max int
    max_a(pa,pb,pc);
    max_int = *pa;

    if(*pb > min_int && *pb < max_int) {
        swap(pa, pb);
    }
    if(*pc > min_int && *pc < max_int) {
        swap(pa, pc);
    }
}


/**
 * Arrange int pointers in descending order
 *
 * @param pa - address of first integer number
 * @param pb - address of second integer number
 * @param pc - address of third integer number
 *
 * @return void
 */
void arrange3(int* pa, int* pb, int* pc)
{
    int min_int = 0;
    int mid_int = 0;
    int max_int = 0;

    //set max int
    max_a(pa, pb, pc);
    max_int = *pa;
    //set mid int
    mid_a(pa, pb, pc);
    mid_int = *pa;
    //set min int
    min_a(pa, pb, pc);
    min_int = *pa;

    *pa = max_int;
    *pb = mid_int;
    *pc = min_int;
}


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("\nEnter number in variable a: ");
    scanf("%d", &a);
    printf("\nEnter number in variable b: ");
    scanf("%d", &b);
    printf("\nEnter number in variable c: ");
    scanf("%d", &c);
    printf("\nOriginal: a = %d, b = %d, c = %d", a, b, c);

    swap(&a, &b);
    printf("\nswap: a = %d, b = %d", a, b);
    // swap(&a, &b);  //Swap back for testing
    max_a(&a, &b, &c);
    printf("\nmax:  a = %d, b = %d, c = %d", a, b, c);
    min_a(&a, &b, &c);
    printf("\nmin:  a = %d, b = %d, c = %d", a, b, c);
    mid_a(&a, &b, &c);
    printf("\nmid:  a = %d, b = %d, c = %d", a, b, c);
    arrange3(&a, &b, &c);
    printf("\nsort: a = %d, b = %d, c = %d\n\n", a, b, c);

    return 0;
}