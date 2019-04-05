/*
 *      Exercise 60: Write a C program to create an enumerated data type
 *      for the seven days, and display their values in integer constants.
 *
 */

#include <stdio.h>

int main (void)
{
        enum days_of_week {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

        printf ("Sunday    = %i\n", Sun);
        printf ("Monday    = %i\n", Mon);
        printf ("Tuesday   = %i\n", Tue);
        printf ("Wednesday = %i\n", Wed);
        printf ("Thursday  = %i\n", Thur);
        printf ("Friday    = %i\n", Fri);
        printf ("Saturday  = %i\n", Sat);

        return 0;
}
