/*
 *      Exercise 9.3 from Kochan's "Programming in C"
 *
 *      Write a function elapsed_time that takes two time structures
 *      and returns a time structure that represents the elapsed time
 *      (in hours, minutes, and seconds) between the two times.
 *
 *      So the call: elapsed_time (time1, time2), where time1
 *      represents 3:45:15 and time2 represents 9:44:03, should return
 *      a time structure of: 5 hours, 58 minutes, and 48 seconds.
 */

#include <stdio.h>

struct time
{
        int hour;
        int minutes;
        int seconds;
};

struct time getTime (void)
{
        struct time t;
        printf ("Enter time (h:m:s): ");
        scanf ("%i:%i:%i", &t.hour, &t.minutes, &t.seconds);

        return t;
}

/*
 *      function to calculate elapsed time between t1 and t2.
 */


struct time elapsed_time (struct time t1, struct time t2)
{
        struct time result;

        result.hour = t2.hour - t1.hour;

        if ( t1.minutes > t2.minutes ) {
                --result.hour;
                result.minutes = (t2.minutes + 60) - t1.minutes;
        }
        else
                result.minutes = t2.minutes - t1.minutes;

        if ( t1.seconds > t2.seconds ) {
                --result.minutes;
                result.seconds = (t2.seconds + 60) - t1.seconds;
        }
        else
                result.seconds = t2.seconds - t1.seconds;

        return result;
}

int main (void)
{
        struct time start, end, ans;

        start = getTime();
        end = getTime();
        ans = elapsed_time(start, end);

        printf ("%2i:%2i:%2i\n", ans.hour, ans.minutes, ans.seconds);

        return 0;
}
