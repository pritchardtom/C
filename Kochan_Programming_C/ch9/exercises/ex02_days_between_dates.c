/*
 *      Exercise 9.2 from Kochan's "Programming in C"
 *
 *      Write a program that permits the user to type in two dates
 *      and calculates the number of elapsed days between the two dates.
 *
 *      So, the book provides a formula to follow, but I prefer to try a different
 *      method:
 *              - get the two dates from input
 *              - convert these dates into Julian Day Number form
 *              - Subtract these two numbers, and return the result.
 *
 */


#include <stdio.h>

struct date
{
        int day;
        int month;
        int year;
};

struct date getDate (void)
{
        struct date d;
        printf ("Enter a date (d/m/yyyy): \n");
        scanf ("%i/%i/%i", &d.day, &d.month, &d.year);

        return d;
}

long int calcJDN (struct date d)
{
        long int jdn;

        jdn = (1461 * (d.year + 4800 + (d.month - 14) / 12)) / 4 + (367 * (d.month - 2 - 12 * ((d.month - 14) / 12))) / 12 - \
              (3 * ((d.year + 4900 + (d.month - 14) / 12) / 100)) / 4 + d.day - 32075;

        return jdn;
}

int main (void)
{
        struct date date1 = getDate();
        struct date date2 = getDate();

        long int d1 = calcJDN(date1);
        long int d2 = calcJDN(date2);

        printf ("Days: %li\n", d2 - d1);

        return 0;
}
