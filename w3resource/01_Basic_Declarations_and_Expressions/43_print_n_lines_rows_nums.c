/*
 *      Exercise 43: Write a C program that reads two integers p and q, and
 *      prints p number of lines in a sequence of 1 to n in a line.
 *
 *      Again, solution could be improved, but just playing around with
 *      ideas, bad or otherwise.
 */

#include <stdio.h>

int main (void)
{
        int rows, cols, nums_to_print, tmp;

        printf ("Enter number of rows: ");
        scanf ("%i", &rows);

        printf ("Enter number of columns: ");
        scanf ("%i", &cols);

        nums_to_print = rows * cols;
        tmp = 1;

        for ( int i = 1; i <= nums_to_print; ++i ) {
                if ( tmp == cols ) {
                        printf ("%i \n", i);
                        tmp = 1;
                }
                else {
                        printf ("%i ", i);
                        ++tmp;
                }

        }

        printf ("\n");

        return 0;
}
