/*
 *      Exercise 70: Write a C program to print the alphabet in decimal,
 *      and character form.
 *
 *      Need to skip 91 - 96 as these are special chars: '[', ']', '/', etc...
 */

#include <stdio.h>

int main (void)
{
        char c;

        for ( c = 65; c <= 122; c += 1 ) {
                if (c > 90  &&  c < 97)
                        continue;
                printf ("%d = %c\n", c, c);
        }

        return 0;
}
