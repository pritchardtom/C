/*
 *      Project  3.1 from King's C Programming: A Modern Approach
 *
 *      Write a program that accepts a date from the user in the
 *      form mm/dd/yyyy and then display it in the form:
 *              yyyymmdd
 *
 */

#include <stdio.h>

int main (void)
{
        int day, month, year;

        printf ("Enter a date (mm/dd/yyyy): ");
        scanf ("%d/%d/%d", &month, &day, &year);
        printf ("\nYou entered the date: %d%d%d\n", year, month, day);

        return 0;
}
