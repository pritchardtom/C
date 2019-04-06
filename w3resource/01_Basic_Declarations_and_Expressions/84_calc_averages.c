/*
 *      Exercise 84: Write a C program to calculate and print the average of
 *      some integers. Accept all the values preceding 888.
 *
 *      Need to address fact 888 is added to total when loaded.
 */

#include <stdio.h>

int main (void)
{
        int num = 0;
        int total = 0;
        int count = 0;

        while ( num != 888 ) {
                printf ("Enter number: ");
                scanf ("%i", &num);
                total += num;
                ++count;
                printf ("\n");
        }

        printf ("Average of inputted nums: %i\n", total / count);

        return 0;
}
