/*
 *      Exercise 41: Write a C program to print 3 numbers in a line,
 *      starting from 1, printing n lines, with n set by user input.
 *
 *      I imagine the w3resource solution intends requires two loops.
 *      Due to laziness, I bypassed the need for extra loop with the
 *      i += 3 in for loop.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter a number: ");
        scanf ("%i", &num);

        for ( int i = 1; i <= num; i += 3 )
                printf ("%2i %2i %2i\n", i, i + 1, i + 2);

        return 0;
}
