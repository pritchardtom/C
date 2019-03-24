/*
 *      Exercise 9.2 from Kochan's "Programming in C"
 *
 *      Formula for calculating num of days between two dates:
 *        - compute value of N for each date:
 *              N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
 *
 *      Where,
 *
 *        - f(year, month) = year - 1    if month <= 2
 *                           year        otherwise
 *
 *        - g(month) = month + 13        if month <= 2
 *                     month             otherwise
 *
 *      This appears to work for 21st C dates only (checked against online tools), otherwise the days
 *      are slightly out.  I'll return to improve this, and to handle misc input too.
 *
 *      ISSUES - input doesn't like 02 for Feb, prefers 2; ditto for other months.
 *              Also, why have two calcN functions - just pass struct to it, loser.
 *
 *      Write a program that permits the user to type in two dates
 *      and calculates the number of elapsed days between the two dates.
 *
 */

#include <stdio.h>

struct date
{
        int day;
        int month;
        int year;
};

struct date getDate (void);
long int calcN (struct date d);

int main (void)
{
        struct date date1 = getDate();
        struct date date2 = getDate();

        long int N1 = calcN(date1);
        long int N2 = calcN(date2);

        printf ("Days: %li\n", N2 - N1);

        printf ("\n\nDEBUG\n\n");
        printf ("date1: %.2i/%.2i/%.2i\n", date1.day, date1.month, date1.year);
        printf ("date2: %.2i/%.2i/%.2i\n", date2.day, date2.month, date2.year);
        printf ("N2: %li\n", N2);
        printf ("N1: %li\n", N1);

        return 0;
}

struct date getDate (void)
{
        struct date d;
        printf ("Enter DATE (d/m/yyyy): \n");
        scanf ("%i/%i/%i", &d.day, &d.month, &d.year);

        return d;
}

long int calcN (struct date d)
{
        long int N;

        if ( d.month <= 2 ) {
                N = (1461 * (d.year - 1)) / 4 + (153 * (d.month + 13)) / 5 + d.day;
                printf ("\nDEBUG: d.month <=2 exe\n\n");
        }
        else {
                N = (1461 * d.year) / 4 + (153 * d.month) / 5 + d.day;
                printf ("\nDEBUG: d.month normal exe\n\n");
        }



        return N;
}
