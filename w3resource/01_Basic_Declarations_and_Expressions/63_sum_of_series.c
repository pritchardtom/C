/*
 *      Exercise 63: Write a C program that accepts a positive integer n (< 100)
 *      from the user, and prints out the sum:
 *               1^4 + 2^4 + 4^4 + 7^4 + 11^4 + ... + m^4,
 *      where m is less than or equal to n.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;
        int sum = 0;
        int m = 1;

        printf ("Enter number ( > 0 && < 100 ): ");
        scanf ("%i", &num);

        for ( int i = 1; m <= num; ++i ) {
                sum += (m * m * m * m);
                m += i;
        }

        printf ("Sum of series = %d\n", sum);

        return 0;
}
