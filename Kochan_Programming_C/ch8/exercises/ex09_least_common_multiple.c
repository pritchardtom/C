/*
 *      Exercise  8.9 from Kochan's "Programming in C"
 *
 *      Write a function lcm that takes two ints and returns lcm.
 *
 *      The lcm function should calculate the least common multiple by
 *      calling the gcd function from 8.6 in accordance with the following:
 *              lcm(u, v) = uv / gcd(u, v) u,v >= 0
 *
 */

#include <stdio.h>

int gcd (int u, int v)
{
        int temp;

        while ( v != 0 ) {
                temp = u % v;
                u = v;
                v = temp;
        }

        return u;
}

int lcm (int u, int v)
{
        int temp;

        if ( u < 0  || v < 0 )
                return -1;

        temp = u * v / gcd(u,v);

        return temp;
}

int main (void)
{
        int result;

        result = lcm(15, 10);
        printf ("The lcm of 15 and 10 is %i\n", result);

        result = lcm(3, 5);
        printf ("The lcm of 15 and 10 is %i\n", result);

        return 0;
}
