/*
 *      Program 6.3 from Kochan's "Programming in C"
 *
 *      Determine if number is even or odd (stupid way).
 */

#include <stdio.h>

int main (void)
{
        int num_to_test, remainder;

        printf ("Enter your number: \n");
        scanf ("%i", &num_to_test);

        remainder = num_to_test % 2;

        if ( remainder == 0 )
                printf ("The number is even.\n");

        if ( remainder != 0 )
                printf ("The number is odd.\n");

        return 0;
}
