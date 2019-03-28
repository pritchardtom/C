/*
 *      Exercise 29: Write a C program that read 5 numbers and
 *      sums of all odd values between them.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, sum = 0;

        for ( int i = 0; i < 5; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &num);
                if ( num > 0  &&  num % 2 != 0 )
                        sum += num;
        }

        printf("Sum of odd numbers: %i.\n\n", sum);

        return 0;
}
