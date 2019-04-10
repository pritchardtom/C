/*
 *      Exercise  10.14 from Kochan's "Programming in C"
 *
 *      Write a function called intToStr that converts an int
 *      value into a character string.
 *
 *      Be certain to handle negative integers properly.
 *
 *      This isn't working at the moment.  Will return to it shortly.
 *      Have new idea for the approach.
 */

#include <stdio.h>

/*
 *      function to convert int to str
 *              - modified to handle - in string[0]
 */

void intToStr (int number)
{
        int i = 0, length = 0;
        int tmp;
        char string[100];

        if ( number < 0 ) {
                string[i] = '-';
                ++i;
        }

        tmp = number;

        while ( number != 0 ) {
                ++length;
                number /= 10;
        }

        for ( ; i < length; ++i ) {
                tmp = number % 10;
                number /= 10;
                string[i] = (char)tmp + '0';
        }

        string[i] = '\0';

        printf ("\n%s\n", string);
 }


int main (void)
{

        intToStr(-42);

        return 0;
}
