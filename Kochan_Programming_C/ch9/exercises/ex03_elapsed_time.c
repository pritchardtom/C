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

// I THINK AN ARRAY MIGHT BE THE BEST IDEA?
// hours[24]
// minuntes[60]
// seconds[60]

#include <stdio.h>

struct time
{
        int hours;
        int minutes;
        int seconds;
};

struct time diff;

// where time1 = 3:45:15
// *     time2 = 9:44:03
//         ans = 5:58:48

// t1 = 00:01:00
// t2 = 00:30:00

// seconds:
//      if time1.seconds [15] > time2.seconds [03]
//              time2.seconds += 60 [03+60 = 63] - time1.seconds[15] = 48
//
// minutes:
//      if time1.minutes > time2.minutes --> diff = time1 - time2
//              else: subtract an hour from time2.

struct time elapsed_time (struct time time1, struct time time2)
{
        if ( time1.seconds > time2.seconds ) {
                time2.seconds += 60;
        }

        diff.seconds = time2.seconds - time1.seconds;

        if ( time2.minutes > time1.minutes ) {
                --time2.hours;
                time2.minutes += 60;
        }

        diff.minutes = time1.minutes - time2.minutes;
        diff.hours = time1.hours - time2.hours;


        return diff;
}

int main (void)
{
        struct time time1 = { 03, 45, 15 };
        struct time time2 = { 9, 44, 03 };
        // struct time time1 = { 0, 45, 15 };
        // struct time time2 = { 12, 46, 15 };

        elapsed_time(time1, time2);

        printf ("Diff: %i:%i:%i\n", diff.hours, diff.minutes, diff.seconds);

        return 0;
}
