/*
 *      Exercise 11.11 from Kochan's "Programming in C"
 *
 *      Given definition of 'date' structure defined in this chapter,
 *      write a function dateUpdate that takes a pointer to a date
 *      structure as its arg, and which updates struct to
 *      following day (see example 9.4 for original function).
 *
 *      My solution is very basic.  I should come back and add checks
 *      for leap year and end of month (see exercises/examples in Ch 9).
 *
 */

#include <stdio.h>

struct date
{
        int day;
        int month;
        int year;
};

/*
 *      function to update date to tomorrow (using pointer)
 */

void dateUpdate (struct date *ptr)
{
        ptr->day += 1;
}

int main (void)
{
        struct date today, *datePtr;

        datePtr = &today;
        datePtr->day   = 21;
        datePtr->month = 12;
        datePtr->year  = 2020;

        printf ("Today's date is: %i/%i/%.2i\n", datePtr->day, datePtr->month, datePtr->year);
        dateUpdate(datePtr);
        printf ("Today's date is: %i/%i/%.2i\n", datePtr->day, datePtr->month, datePtr->year);

        return 0;
}
