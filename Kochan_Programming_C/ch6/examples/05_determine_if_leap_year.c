/*
 *      Program 6.5 from Kochan's "Programming in C"
 *
 *      Determine if year is a leap year.
 *              - makes use of relational tests in if.
 */

#include <stdio.h>

int main (void)
{
        int year, rem_4, rem_100, rem_400;

        printf ("Enter the year: \n");
        scanf ("%i", &year);

        rem_4 = year % 4;
        rem_100 = year % 100;
        rem_400 = year % 400;

        if ( ( rem_4 == 0  &&  rem_100 != 0 )  ||  rem_400 == 0 )
                printf ("It's a leap year.\n");
        else
                printf ("It's NOT a leap year.\n");

        return 0;
}
