/*
 *      Program 7.7 from Kochan's "Programming in C"
 *
 *      Not good due to allowing entering 0 and other unaccepted bases.
 */

#include <stdio.h>

int main (void)
{
        const char baseDigits[16] = {
                '0', '1', '2', '3', '4', '5', '6', '7',
                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

        int      convertedNumber[64];
        long int num_to_convert;
        int      nextDigit, base, index = 0;

        // get the number and the base

        printf ("Enter number: \n");
        scanf ("%ld", &num_to_convert);

        printf ("Base? \n");
        scanf ("%i", &base);

        // convert to the indicated base.

        do {
                convertedNumber[index] = num_to_convert % base;
                ++index;
                num_to_convert /= base;
        }
        while ( num_to_convert != 0 );

        // display results in reverse order

        printf ("Converted number = ");

        for ( --index; index >= 0; --index ) {
                nextDigit = convertedNumber[index];
                printf ("%c", baseDigits[nextDigit]);
        }

        printf ("\n");
        return 0;
}
