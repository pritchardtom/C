/*
 *      Program 7.3 from Kochan's "Programming in C"
 *
 *      Generate first 15 Fibonacci nums
 */

#include <stdio.h>

int main (void)
{
        int Fibonacci[15], i;

        Fibonacci[0] = 0;       // be definition
        Fibonacci[1] = 1;       // ditto

        for ( i = 2; i < 15; ++i )
                Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

        for ( i = 0; i < 15; ++i )
                printf ("%i ", Fibonacci[i]);

        printf ("\n");
        return 0;
}
