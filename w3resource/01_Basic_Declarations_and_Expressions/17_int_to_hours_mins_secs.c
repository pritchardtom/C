/*
 *      Exercise 17: Write a C program to convert a given integer (in seconds)
 *      to hours, minutes and seconds.
 *
 */

#include <stdio.h>

int main (void)
{
        int input;
        int hours, minutes, seconds;

        printf ("Enter time in seconds: \n");
        scanf ("%i", &input);

        hours = input / 3600;
        input = input - (hours * 3600);

        minutes = input / 60;
        input = input - (minutes * 60);

        seconds = input;

        printf ("Time in hh:mm:ss = %i:%i:%i \n", hours, minutes, seconds);

        return 0;
}
