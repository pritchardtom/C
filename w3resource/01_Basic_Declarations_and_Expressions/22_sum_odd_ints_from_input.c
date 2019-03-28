/*
 *      Exercise 22: Write a C program that reads 5 numbers and sums
 *      of the odd values between them.
 *
 */

#include <stdio.h>

int main (void)
{
        int nums[5];
        int sum = 0;

        for ( int i = 0; i < 5; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &nums[i]);
        }

        for ( int i = 0; i < 5; ++i ) {
                if ( nums[i] % 2 != 0 )
                        sum += nums[i];
        }

        printf ("Sum of odd values: %i\n", sum);

        return 0;
}
