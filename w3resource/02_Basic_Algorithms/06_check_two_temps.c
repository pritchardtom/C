/*
 *      Exercise 06:  Write a C program to check if one given temperatures
 *      is less than 0 and the other is greater than 100.
 *
 */

#include <stdio.h>

int main (void)
{
        float temp1, temp2;

        printf ("Enter temperature 1: ");
        scanf ("%f", &temp1);
        printf ("Enter temperature 2: ");
        scanf ("%f", &temp2);

        if ( temp1 < 0  ||  temp2 > 100  || temp2 < 0  ||  temp1 > 100 )
                printf ("True\n");
        else
                printf ("False\n");

        return 0;
}
