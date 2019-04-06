/*
 *      Exercise 83: Write a C program which reads an integer,
 *      and count number of 3s in the given number.
 *
 */

#include <stdio.h>

int countThrees (int n)
{
        int count = 0;
        int remainder;

        while ( n > 0 ) {
                remainder = n % 10;
                n /= 10;

                if ( remainder == 3 )
                        ++count;
        }

        return count;
}

int main (void)
{
        int num;

        printf ("Enter a number: ");
        scanf ("%i", &num);

        printf ("Number of 3s in input: %i\n", countThrees(num));

        return 0;
}
