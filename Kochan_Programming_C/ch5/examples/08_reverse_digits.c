/*
 *      Program 5.8 from Kochan's "Programming in C"
 *
 *      You can extract the rightmost digit from an int by % 10.
 *      e.g. 1234 % 10 = 4, which is what we want.
 *
 *      We get the next digit by / 10 (e.g. 1234 / 10 = 123)
 *      and 123 % 10 gives 3, which will be the next number.
 *
 *      We know we've finished when number / 10 = 0
 *      i.e., there's nothing left to reverse.
 */

#include <stdio.h>

int main (void)
{
        int number, right_digit;

        printf ("Enter your number: \n");
        scanf ("%i", &number);

        while ( number != 0 ) {
                right_digit = number % 10;
                printf ("%i", right_digit);
                number = number / 10;
        }
        printf ("\n");
        return 0;
}
