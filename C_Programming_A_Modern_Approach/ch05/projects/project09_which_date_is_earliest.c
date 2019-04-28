/*
 *      Project 5.9 from King's C Programming: A Modern Approach
 *
 *      Write a program that prompts the user to enter two
 *      dates, and reports which date comes earlier on
 *      the calendar.
 *
 */

#include <stdio.h>

int main (void)
{
        int day_1, month_1, year_1,
            day_2, month_2, year_2;

        printf ("Enter 1st date (dd/mm/yyyy): ");
        scanf ("%d/%d/%d", &day_1, &month_1, &year_1);
        printf ("Enter 2nd date (dd/mm/yyyy): ");
        scanf ("%d/%d/%d", &day_2, &month_2, &year_2);

        if ( year_1 > year_2 )
                printf ("Date 1 is earliest\n");
        else if ( year_2 > year_1 )
                printf ("Date 2 is earliest\n");

        else {
                if ( month_1 > month_2 )
                        printf ("Date 1 is earliest\n");
                else if ( month_2 > month_1 )
                        printf ("Date 2 is earliest\n");
                else {
                        if ( day_1 > day_2 )
                                printf ("Date 1 is earliest\n");
                        else if (day_2 > day_1 )
                                printf ("Date 2 is earliest\n");
                        else
                                printf ("Dates are the same\n");
                }
        }

        return 0;
}
