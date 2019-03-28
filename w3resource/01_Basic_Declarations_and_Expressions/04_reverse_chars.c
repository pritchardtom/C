/*
 *      Exercise 04: Write a C program to print the characters XML in a reverse way.
 *
 */

#include <stdio.h>

int main (void)
{
        char array[3] = { 'X', 'M', 'L' };

        printf ("The reverse of XML is: ");

        for ( int i = 2; i >= 0; --i )
                printf ("%c", array[i]);

        printf ("\n");
        return 0;
}
