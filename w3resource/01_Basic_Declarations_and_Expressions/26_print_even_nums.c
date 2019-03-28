/*
 *      Exercise 26: Write a C program that prints all even numbers between
 *      1 and 50 (inclusive).
 *
 */

#include <stdio.h>

int main (void)
{
        int nums[51];

        for ( int i = 0; i < 51; ++i )
                nums[i] = i;

        printf ("Even numbers (1-50):  ");

        for ( int i = 0; i < 51; ++i ) {
                if ( nums[i] % 2 == 0 )
                        printf ("%i ", nums[i]);
                else
                        nums[i] = -1;
        }

        printf ("\n");

        return 0;
}
