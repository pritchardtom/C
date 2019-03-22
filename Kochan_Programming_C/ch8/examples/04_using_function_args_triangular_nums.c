/*
 *      Program 8.4 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

void calculateTriNum (int n)
{
        int i, triNum = 0;

        for ( i = 1; i <= n; ++i )
                triNum += i;

        printf ("Triangular number %i = %i\n", n, triNum);
}

int main (void)
{
        calculateTriNum(10);
        calculateTriNum(20);
        calculateTriNum(50);

        return 0;
}
