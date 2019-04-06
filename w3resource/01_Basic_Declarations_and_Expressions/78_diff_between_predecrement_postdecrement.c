/*
 *      Exercise 78: Write a C program to demonstrates the difference
 *      between predecrementing (--i) and postdecrementing (++i).
 *
 */

#include <stdio.h>

int main (void)
{
        int x = 0;
        int y = 0;

        printf ("\n");

        for ( int i = 0; i <= 100; ++i ) {
                printf ("i: %3i  \t ++x: %3i \t y++: %3i\n", i, ++x, y++);
        }
        
        printf ("\n");
        return 0;
}
