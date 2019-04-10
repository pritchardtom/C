/*
 *      Program 11.15 from Kochan's "Programming in C"
 */

#include <stdio.h>

int stringLength (const char *string)
{
        const char *cptr = string;

        while ( *cptr )
                ++cptr;

        return cptr - string;
}

int main (void)
{
        printf ("%i ", stringLength("stringLength test"));
        printf ("%i ", stringLength(""));
        printf ("%i\n", stringLength("complete"));

        return 0;
}
