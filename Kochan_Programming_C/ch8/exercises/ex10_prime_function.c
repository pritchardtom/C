/*
 *      Exercise  8.10 from Kochan's "Programming in C"
 *
 *      Write a function prime that return 1 if arg is prime; 0 otherwise.
 *
 *      This is very inefficient solution, which will be slow with large
 *      values for p.  When brain_function() > .3 I'll jazz this up.
 */

#include <stdio.h>

int prime (int p)
{
        int d;
        int temp;
        int modulo_count = 0;
        int isPrime = 0;

        for ( d = 2; d < p; ++d ) {
                temp = p % d;
                if ( temp == 0 )
                        ++modulo_count;
        }

        if ( modulo_count == 0 )
                isPrime = 1;

        return isPrime;
}

int main (void)
{
        int result;

        for ( int i = 2; i <= 100; ++i )
                printf ("i: %2i prime: %i\n", i, prime(i));

        return 0;
}
