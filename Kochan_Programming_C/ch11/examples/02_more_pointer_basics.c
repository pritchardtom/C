/*
 *      Program 11.2 from Kochan's "Programming in C"
 *
 *      Further examples of pointers.
 */

#include <stdio.h>

int main (void)
{
        char c = 'Q';
        char *char_pointer = &c;

        printf ("%c  %c\n", c, *char_pointer);

        c = '/';
        printf ("%c  %c\n", c, *char_pointer);


        c = '(';
        printf ("%c  %c\n", c, *char_pointer);

        return 0;
}
