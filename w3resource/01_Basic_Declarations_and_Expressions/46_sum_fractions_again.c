/*
 *      Exercise 46: Write a C program to calculate the value of S,
 *      where S = 1 + 3/2 + 5/4 + 7/8.
 *
 */

#include <stdio.h>

int main (void)
{
        float sum_of_fracs = 0;
        int top = 3;
        int bottom = 2;

        for ( int i = 1; i <= 3; ++i ) {
                sum_of_fracs += (float) top / bottom;
                top += 2;
                bottom *= 2;
        }

        printf ("Result of 1 + 3/2 + 5/4 + 7/8 = %.3f\n", sum_of_fracs);

        return 0;
}
