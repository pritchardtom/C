/*
 *      Exercise 81: Write a C program that reads the side of a square,
 *       and prints a hollow square using hash (#) character.
 *
 *      Decided to use 2x for loops.  See Exercise 80 for an approach without
 *      two loops.
 */

#include <stdio.h>

int main (void)
{
        int side;

        printf ("Enter side of square: ");
        scanf ("%i", &side);

        for ( int i = 0; i < side; ++i ) {
                for ( int j = 0; j < side; ++j ) {
                        if ( i == 0  ||  i == side - 1 )
                                printf ("#");
                        else if ( j == 0  || j == side - 1 )
                                printf ("#");
                        else
                                printf (" ");
                }
                printf ("\n");
        }

        return 0;
}
