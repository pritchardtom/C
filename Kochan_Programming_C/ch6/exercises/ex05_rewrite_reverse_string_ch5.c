/*
 *      Exercise 6.5 from Kochan's "Programming in C"
 *
 *      Reverse string program (5.9) does not function well if
 *      you type a negative number.  Fix this isue.
 *
 *      -8645 should print out: 5468-
 *
 *      This is an awful solution.
 */

#include <stdio.h>

int main (void)
{
        int number, right_digit;
        printf ("Enter your number: \n");
        scanf ("%i", &number);

        if ( number > 0 ) {
                while ( number != 0 ) {
                        right_digit = number % 10;
                        printf ("%i", right_digit);
                        number = number / 10;
                }
                printf ("\n");
        } else if ( number < 0 ) {
                number = -number;
                while ( number != 0 ) {
                        right_digit = number % 10;
                        printf ("%i", right_digit);
                        number = number / 10;
                }
                printf ("-");
        }
        printf ("\n");
        return 0;
}
