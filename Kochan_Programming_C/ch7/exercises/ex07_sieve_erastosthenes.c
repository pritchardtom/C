/*
 *      Exercise 7.6 from Kochan's "Programming in C"
 *
 *      Write a program that implements the following algorithm.
 *      Have the program find all prime numbers up to n = ARRAY_SIZE.
 *
 *      Fixed abort trap 6.
 */

#include <stdio.h>

#define ARRAY_SIZE 151

int main (void)
{
        int primes[ARRAY_SIZE];
        int i;

        for ( i = 0; i < ARRAY_SIZE; ++i )
                primes[i] = i;

        for ( i = 2; (i * i) < ARRAY_SIZE; ++i ) {
                if ( primes[i] != -1 ) {
                        for ( int j = (2 * i); j < ARRAY_SIZE; j += i )
                                primes[j] = -1;
                }
        }

        for ( i = 2; i < ARRAY_SIZE; ++i )
                if ( primes[i] != -1 )
                        printf ("%i\n", primes[i]);

        return 0;
}
