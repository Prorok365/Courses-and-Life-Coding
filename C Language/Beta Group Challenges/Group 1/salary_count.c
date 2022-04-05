/**
 * @file salary_count.c
 * @brief Get from user hours work and wage in hour Print the amount of salary, 
		  without bonus, amount bonus and salary after sum the bonus.
 */

/********************/
#include <stdio.h>

/********************/
#define BONUS 1.15

/********************/

int main()
{
    float hours = 0;
    float hourly_wage = 0;

    float salary_without_bonus = 0;
    float salary_bonus = 0;
    float salary_with_bonus = 0;

    printf("\nEnter how much hours you work: ");
    scanf("%f", &hours);

    printf("\nEnter your hourly wage: ");
    scanf("%f", &hourly_wage);

    printf("\n******************************************\n");

    salary_without_bonus = hours * hourly_wage;

    salary_bonus = (salary_without_bonus * BONUS) - salary_without_bonus;

    salary_with_bonus = salary_without_bonus + salary_bonus;

    printf("\nYour salary without bonus: %.2f\n", salary_without_bonus);

    printf("\nAmount wage you get from the bonus: %.2f\n", salary_bonus);

    printf("\nYour salary with the bonus: %.2f\n\n", salary_with_bonus);

    return 0;
}