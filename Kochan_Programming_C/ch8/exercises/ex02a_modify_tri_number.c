/*
 *      Exercise  8.2a from Kochan's "Programming in C"
 *
 *      Modify 8.4 so value of triNum is returned by function.
 *
 */

#include <stdio.h>

int calculateTriNum (int n)
{
        int i, triNum = 0;

        for ( i = 1; i <= n; ++i )
                triNum += i;

        //printf ("Triangular number %i = %i\n", n, triNum);
        return triNum;
}

int main (void)
{
        int result;

        result = calculateTriNum(10);
        printf ("%i\n", result);
        result = calculateTriNum(20);
        printf ("%i\n", result);
        result = calculateTriNum(50);
        printf ("%i\n", result);

        return 0;
}
