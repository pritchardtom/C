/*
 *      Exercise 33: Write a C program that accepts some integers from the
 *      user and find the highest value and the input position.
 *
 *      I ignored the input position part for this one.  
 *
 */

#include <stdio.h>

int main (void)
{
        int array[5];
        int highest = 0;

        for ( int i = 0; i < 5; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &array[i]);
                if ( array[i] > highest )
                        highest = array[i];
        }

        printf ("Highest: %i\n", highest);
        return 0;
}
