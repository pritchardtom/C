/*
 *      Exercise 65: Write a C program that prints out the prime numbers
 *      between 1 and 200.
 *
 *      The output should be such that each row contains a maximum of
 *      20 prime numbers.
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
        bool isPrime;
        int col = 0;

        for ( int i = 2; i <= 200; ++i ) {
                if ( i > 2  &&  i % 2 == 0 )
                        isPrime = false;
                else
                        isPrime = true;

                for ( int j = 2; j < i  &&  isPrime != false; ++j )
                        if ( i % j == 0 )
                                isPrime = false;
                        if ( isPrime != false ) {
                                printf ("%i ", i);
                                ++col;
                                if ( col == 20 )
                                        printf ("\n");
                        }
        }

        printf ("\n");
        return 0;
}
