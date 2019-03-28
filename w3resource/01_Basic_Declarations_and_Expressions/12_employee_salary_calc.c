/*
 *      Exercise 12: Write a C program that accepts:
 *              - an employee's ID;
 *              - total worked hours of a month; and
 *              - and the amount he received per hour.
 *
 *      Then print the employee's ID and salary (with two decimal places) of a
 *      particular month
 *
 */

#include <stdio.h>

int main (void)
{
        char id[10];
        float hours_worked;
        float hourly_rate;
        float salary;

        printf ("\nEnter employee ID: ");
        scanf ("%s", &id);

        printf ("Enter hours worked: ");
        scanf ("%f", &hours_worked);

        printf ("Enter hourly rate: ");
        scanf ("%f", &hourly_rate);
        printf ("\n");

        salary = hours_worked * hourly_rate;

        printf ("Employee ID: %s\n", id);
        printf ("Employee ££: %.2f\n", salary);
        printf ("\n");

        return 0;
}
