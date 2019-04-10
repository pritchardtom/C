/*
 *      Program 11.1 from Kochan's "Programming in C"
 *
 *      Illustrating pointers
 */

#include <stdio.h>

int main (void)
{
        int count = 10, x;
        int *int_pointer;

        int_pointer = &count;
        x = *int_pointer;

        printf ("count: %i | x: %i \n", count, x);

        return 0;
}
