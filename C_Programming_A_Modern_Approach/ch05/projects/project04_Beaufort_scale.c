/*
 *      Project 5.4 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks user to enter a wind speed in knots,
 *      and display corresponding description of conditions.
 *
 */

#include <stdio.h>

int main (void)
{
        int wind_speed;

        printf ("Please enter a wind speed in knots: ");
        scanf ("%d", &wind_speed);

        if ( wind_speed >= 1  &&  wind_speed <= 3 )
                printf ("Wind conditions: Light air\n");
        else if ( wind_speed >= 4  &&  wind_speed <= 27 )
                printf ("Wind conditions: Breeze\n");
        else if ( wind_speed >= 28  &&  wind_speed <= 47 )
                printf ("Wind conditions: Gale\n");
        else if ( wind_speed >= 48  &&  wind_speed <= 63 )
                printf ("Wind conditions: Storm\n");
        else if ( wind_speed > 63 )
                printf ("Wind conditions: Hurricane\n");
        else
                printf ("Error\n");

        return 0;
}
