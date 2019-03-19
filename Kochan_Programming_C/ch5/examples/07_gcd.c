/*
 *      Program 5.7 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

int main (void)
{
        int u, v, temp;

        printf ("Please type two non-negative integers:\n");
        scanf ("%i%i", &u, &v);

        while ( v != 0 ) {
                temp = u % v;
                u = v;
                v = temp;
        }

        printf ("GCD is: %i\n", u);
        return 0;
}
