/*
 *      Exercise 44: Write a C program to calculate the average marks of
 *      mathematics of some students. Input 0 (excluding to calculate the average)
 *      or negative value to terminate the input process.
 *
 */

#include <stdio.h>

int main (void)
{
        int ans, sum = 0, count = 0;

        while ( ans > 0 ) {
                printf ("Enter student mark: ");
                scanf ("%i", &ans);
                printf ("\n");

                sum += ans;
                ++count;
        }

        printf ("\nAverage Student Mark = %i\n", sum / count);

        return 0;
}
