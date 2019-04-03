/*
 *      Exercise 45: Write a C program to calculate the value of S,
 *      where S = 1 + 1/2 + 1/3 + … + 1/50.
 *
 */

#include <stdio.h>

int main (void)
{
        float sum_of_fracs = 0;

        for ( int i = 1; i <= 50; ++i )
                sum_of_fracs += (float) 1 / i;

        printf ("Result of 1 + 1/2 + 1/3 + ... + 1/50 = %.3f\n", sum_of_fracs);

        return 0;
}
