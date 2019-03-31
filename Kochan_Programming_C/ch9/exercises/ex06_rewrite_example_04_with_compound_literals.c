/*
 *      Exercise 9.6 from Kochan's "Programming in C"
 *
 *      Modify example 9.4 to replace the dateUpdate function
 *      with the modified one that uses compound literals as
 *      as presented in the text.
 *
 *      Run program to verify its proper operation.
 *
 */

#include <stdio.h>
#include <stdbool.h>

struct date
{
        int month;
        int day;
        int year;
};

int num_of_days (struct date d);
bool leapYear (struct date d);
struct date dateUpdate (struct date today);

int main (void)
{
        struct date today, tomorrow;

        printf ("Enter today's date (dd mm yyyy):  ");
        scanf ("%i %i %i", &today.day, &today.month, &today.year);

        tomorrow = dateUpdate(today);

        printf ("Tomorrow's date: %i/%i/%.2i\n", tomorrow.day, tomorrow.month, tomorrow.year % 100);

        return 0;
}

/*
 *      function to find the number of days in a month.
 */

int num_of_days (struct date d)
{
        int days;
        const int days_in_month[12] = { 31, 28, 31, 30, 31, 30,
                                        31, 31, 30, 31, 30, 31 };

        if ( leapYear (d) == true  &&  d.month == 2 )
                days = 29;
        else
                days = days_in_month[d.month - 1];

        return days;
}

/*
 *      function to determine if it's a leap year
 */

bool leapYear (struct date d)
{
        bool leap_year_flag;

        if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  ||  d.year % 400 == 0 )
                leap_year_flag = true;
        else
                leap_year_flag = false;

        return leap_year_flag;
}

/*
 *      function to calculate tomorrow's date.
 */

struct date dateUpdate (struct date today)
{
        struct date tomorrow;

        if ( today.day != num_of_days(today) )
                tomorrow = (struct date) { today.month, today.day + 1, today.year };
        else if ( today.month == 12 )
                tomorrow = (struct date) { 1, 1, today.year + 1 };
        else
                tomorrow = (struct date) {today.month + 1, 1, today.year };

        return tomorrow;
}
