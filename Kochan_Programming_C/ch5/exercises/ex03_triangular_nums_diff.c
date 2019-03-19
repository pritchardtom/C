/*
 *      Exercise 5.3 from Kochan's "Programming in C"
 *
 *      Rewrite triangular number program (sort of), using
 *      this formula instead:
 *              tri_num = n (n + 1) / 2
 *      Do this for every fifth tri_num between 5 and 50;
 */

#include <stdio.h>

int main (void)
{
        int tri_num;

        for ( int n = 5; n <= 50; n += 5 )
                printf ("n: %2i tri_num: %i\n", n, n * (n + 1) /2 );

        return 0;
}
