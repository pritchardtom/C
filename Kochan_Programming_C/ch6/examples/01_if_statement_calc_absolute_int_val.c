/*
 *      Program 6.1 from Kochan's "Programming in C"
 *
 *      Calculate absolute value of integer
 */

#include <stdio.h>

int main (void)
{
        int number;

        printf ("Type in a number: \n");
        scanf ("%i", &number);

        if ( number < 0 )
                number = -number;

        printf ("The absolute value is: %i\n", number);
        return 0;
}
