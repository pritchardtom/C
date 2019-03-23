/*
 *      Program 9.1 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

int main (void)
{
        struct date
        {
                int month;
                int day;
                int year;
        };

        struct date today;

        today.month = 3;
        today.day = 22;
        today.year = 2019;

        printf ("The date is: %i/%i/%.2i.\n", today.day, today.month, today.year % 100);

        return 0;
}
