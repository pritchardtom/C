/*
 *      Program 9.5 from Kochan's "Programming in C"
 *
 *      Program to update the time by one second.
 *
 */

#include <stdio.h>

struct time
{
        int hour;
        int minutes;
        int seconds;
};

struct time timeUpdate (struct time now);

int main (void)
{
        struct time currentTime, nextTime;

        printf ("Enter the time (hh:mm:ss): ");
        scanf ("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

        nextTime = timeUpdate(currentTime);

        printf ("Updated time:  %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

        return 0;
}

/*
 *      function to update the time by one second
 */

struct time timeUpdate (struct time now)
{
        ++now.seconds;

        if ( now.seconds == 60 ) {
                now.seconds = 0;
                ++now.minutes;

                if ( now.minutes == 60 ) {
                        now.minutes = 0;
                        ++now.hour;

                        if ( now.hour == 24 )
                                now.hour = 0;
                }
        }

        return now;
}
