/*
 *      Exercise 9.5 from Kochan's "Programming in C"
 *
 *      Write a function clockKeeper that takes a dateTime struct as arg.
 *      clockKeeper should call the timeUpdate function and if the time
 *      reaches midnight, dateUpdate switches to the next day.
 *
 *      Have the function returned the updated dateTime struct.
 *
 */

#include <stdio.h>
#include <stdbool.h>

/******************* struct definitions *******************/

struct date
{
        int day;
        int month;
        int year;
};

struct time
{
        int hour;
        int minutes;
        int seconds;
};

struct dateTime
{
        struct date d;
        struct time t;
};

/******************* functions *******************/

/*
 *      function to check if today.d.year is a leap year.
 */

bool isLeapYear (struct dateTime dt)
{
        bool leap_year_flag;

        if ( (dt.d.year % 4 == 0  &&  dt.d.year % 100 !=0) || dt.d.year % 400 == 0 )
                leap_year_flag = true;
        else
                leap_year_flag = false;

        return leap_year_flag;
}


/*
 *      function to check today.d.day does not exceed the
 *      days in that particular month.
 */


int monthEnd (struct dateTime dt)
{
        int days;
        const int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ( isLeapYear(dt)  &&  dt.d.month == 2 )
                days = 29;
        else
                days = days_per_month[dt.d.month - 1];

        return days;
}

/*
 *      function to update the time by a second, adjusting
 *      hours and minutes accordingly, and returning new time.
 *
 *      if this new time value causes the hour to equal 24,
        we also require a call to dateUpdate.
 */

struct dateTime timeUpdate (struct dateTime dt)
{
        ++dt.t.seconds;

        if ( dt.t.seconds == 60 ) {
                dt.t.seconds = 0;
                ++dt.t.minutes;

                if ( dt.t.minutes == 60 ) {
                        dt.t.minutes = 0;
                        ++dt.t.hour;

                        if ( dt.t.hour == 24 ) {
                                dt.t.hour = 0;
                                if ( dt.d.day != monthEnd(dt) )
                                        ++dt.d.day;
                                else if ( dt.d.month == 12 ) {
                                        dt.d.day = 1;
                                        dt.d.month = 1;
                                        ++dt.d.year;
                                }
                                else {
                                        dt.d.day = 1;
                                        ++dt.d.month;
                                }

                        }

                }
        }
        return dt;
}

/*
 *      function to take a dateTime struct and call timeUpdate
 */

struct dateTime clockKeeper (struct dateTime dt)
{
        struct dateTime update = timeUpdate(dt);
        return update;
}

/******************* main *******************/

int main (void)
{
        struct dateTime today;
        today.d.day = 28;
        today.d.month = 2;
        today.d.year = 2008;
        today.t.hour = 23;
        today.t.minutes = 59;
        today.t.seconds = 59;

        printf ("%2i:%2i:%2i (%2i/%2i/%2i)\n", today.t.hour, today.t.minutes, today.t.seconds,
                                               today.d.day, today.d.month, today.d.year);

        struct dateTime test = clockKeeper(today);

        printf ("%2i:%2i:%2i (%2i/%2i/%2i)\n", test.t.hour, test.t.minutes, test.t.seconds,
                                               test.d.day, test.d.month, test.d.year);

        return 0;
}
