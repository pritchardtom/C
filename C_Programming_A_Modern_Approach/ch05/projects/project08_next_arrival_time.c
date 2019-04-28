/*
 *      Project 5.8 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks user to enter a time using the
 *      24-hour clock.  The program then displays the departure and
 *      arrival times for the flight closest to the entered time.
 *
 *      All the values in the if statements are obtained by
 *      multiplying the hour by 60 and adding any minutes.
 *      So, for example, 480 = 08:00 [ 8 * 60 = 480 + 0 mins = 480]
 *
 */

#include <stdio.h>

int main (void)
{
        int hour, mins, time;

        printf ("Enter a time (hh:mm): ");
        scanf ("%d:%d", &hour, &mins);

        // time since midnight (in mins):
        time = (hour * 60) + mins;

        if ( time >= 0  &&  time <= 480 )
                printf ("Closest departure: 08:00, arriving at: 10:16\n");
        else if ( time > 480  &&  time <= 583 )
                printf ("Closest departure: 09:43, arriving at: 11:52\n");
        else if ( time > 583  &&  time <= 679 )
                printf ("Closest departure: 11:19, arriving at: 13:31\n");
        else if ( time > 679  &&  time <= 767 )
                printf ("Closest departure: 12:47, arriving at: 15:00\n");
        else if ( time > 767  &&  time <= 840 )
                printf ("Closest departure: 14:00, arriving at: 16:08\n");
        else if ( time > 840  &&  time <= 945 )
                printf ("Closest departure: 15:45, arriving at: 17:55\n");
        else if ( time > 945  &&  time <= 1140 )
                printf ("Closest departure: 19:00, arriving at: 21:20\n");
        else if ( time > 1140  &&  time <= 1305 )
                printf ("Closest departure: 21:45, arriving at: 23:58\n");
        else if ( time > 1305  &&  time <= 1439 )
                printf ("No more departures scheduled to leave today.\n");
        else
                printf ("Error\n");

        return 0;
}
