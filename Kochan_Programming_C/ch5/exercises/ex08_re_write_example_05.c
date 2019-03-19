/*
 *      Exercise 5.8 from Kochan's "Programming in C"
 *
 *      Example 5.05 only allows five diff numbers.
 *      Modify so user can choose how many tri_nums to calc.
 */

#include <stdio.h>

int main (void)
{
        int n, number, triangularNumber, counter;
        int choice = 0;

        printf ("How many triangular numbers do you want? \n");
        scanf ("%d", &choice);

        for ( counter = 1; counter <= choice; ++counter ) {
                printf ("What triangular number do you want? \n");
                scanf ("%i", &number);

                triangularNumber = 0;

                for ( n = 1; n <= number; ++n )
                        triangularNumber += n;
                printf ("Triangular number %i is: %i\n", number, triangularNumber);
        }

        return 0;
}
