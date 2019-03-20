/*
 *      Exercise 6.7 from Kochan's "Programming in C"
 *
 *      Program to generate table of primes (Example 6.10)
 *      has inefficiencies:
 *      1.  Any even number > 2 != prime, so skip these as primes and divisors.
 *      2.  Inner for loop: because value of p is always / by all values of
 *          d from 2 through p - 1.
 *
 *          Could improve by adding test for value of isPrime in the condition
 *          of for loop.  for loop could be set up to continue as long as no
 *          divisor was found and the value of d < p.
 *
 *      Address these two issues.  I think I have.
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
        int   p, d;
        bool isPrime;

        for ( p = 2; p <= 50; ++p ) {
                if ( p > 2  &&  p % 2 == 0 )
                        isPrime = false;
                else
                        isPrime = true;

                for ( d = 2; d < p  && isPrime != false; ++d )
                        if ( p % d == 0 )
                                isPrime = false;
                        if ( isPrime != false )
                                printf ("%i  ", p);
        }

        printf ("\n");
        return 0;
}
