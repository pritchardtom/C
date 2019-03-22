/*
 *      Exercise  8.2b from Kochan's "Programming in C"
 *
 *      Modify 5.5 so program calls new calculateTriNum function.
 *
 */

#include <stdio.h>

int calculateTriNum (int n)
{
        int i, triNum = 0;

        for ( i = 1; i <= n; ++i )
                triNum += i;
        return triNum;
}

int main (void)
{
        int number;
        int result;

        for ( int counter = 1; counter <= 5; ++counter ) {
                printf ("What triangular number do you want?\n");
                scanf ("%i", &number);

                result = calculateTriNum(number);
                printf ("Triangular number %i is: %i\n", number, result);
        }

        return 0;
}
