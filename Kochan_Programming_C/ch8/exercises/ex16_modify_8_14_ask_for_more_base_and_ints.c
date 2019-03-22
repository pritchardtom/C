/*
 *      Exercise 8.16 from Kochan's "Programming in C"
 *
 *      Modify example 8.14 so user is can convert any number of ints.
 *      A zero entered will terminate program.
 *
 *      This solution could be improved upon.
 *
 */

#include <stdio.h>

/* global vars: all functions see them */

int      convertedNum[64];
long int numToCovert = -1;  // for while loop
int      base;
int      digit = 0;

void getNumAndBase (void)
{
        printf ("Number to convert: \n");
        scanf ("%li", &numToCovert);

        if ( numToCovert == 0 )
                exit(0); // this throws a warning

        printf ("Base? \n");
        scanf ("%i", &base);

        while ( base < 2  ||  base > 16 ) {
                printf ("Bad base - must be between 2 and 16\n");
                printf ("Base? \n");
                scanf ("%i", &base);
        }
}

void convertNum (void)
{
        do {
                convertedNum[digit] = numToCovert % base;
                ++digit;
                numToCovert /= base;
        }
        while ( numToCovert != 0 );
}

void displayConvertedNum (void)
{
        const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7',
                                      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

        int nextDigit;

        printf ("Converted Number =  ");

        for ( --digit; digit >= 0; --digit ) {
                nextDigit = convertedNum[digit];
                printf ("%c", baseDigits[nextDigit]);
        }

        printf ("\n");
}

int main (void)
{
        while ( numToCovert != 0 )
                getNumAndBase();
                convertNum();
                displayConvertedNum();


        return 0;
}
