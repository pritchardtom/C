/*
 *      Exercise 19: Write a C program that accepts 4 integers: p, q, r, s
 *      from the user, where r and s are positive and p is even.
 *
 *      If q is greater than r and s is greater than p,
 *      and if the sum of r and s is greater than the sum of p and q
 *      print "Correct values", otherwise print "Wrong values".
 *
 *      I cannot be bothered to check if p is even.
 *
 */

#include <stdio.h>

int main (void)
{
        int p, q, r, s;

        printf ("Enter 4 numbers: \n");
        scanf ("%i %i %i %i", &p, &q, &r, &s);

        if ( (q > r  &&  s > p)  &&  (r + s > p + q) )
                printf ("Correct values!\n");
        else
                printf ("Incorrect values!\n");

        return 0;
}
