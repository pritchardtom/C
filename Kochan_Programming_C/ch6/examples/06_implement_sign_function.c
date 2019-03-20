/*
 *      Program 6.6 from Kochan's "Programming in C"
 *
 *      Implement the sign function.
 */

#include <stdio.h>

int main (void)
{
        int number, sign;

        printf ("Please enter number: \n");
        scanf ("%i", &number);

        if ( number < 0 )
                sign = -1;
        else if ( number == 0 )
                sign = 0;
        else
                sign = 1;

        printf ("Sign = %i\n", sign);
        
        return 0;
}
