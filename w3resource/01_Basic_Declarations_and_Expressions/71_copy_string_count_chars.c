/*
 *      Exercise 71: Write a C program to copy a given string into another,
 *      and count the number of characters copied.
 *
 */

#include <stdio.h>

int main (void)
{
        char s1[40];
        char s2[40];
        int chars_copied = 0;

        printf ("Enter string: ");
        scanf ("%s", s1);

        for ( int i = 0; s1[i] != '\0'; ++i ) {
                s2[i] = s1[i];
                ++chars_copied;
        }

        printf ("\nCharacters copied: %i\n", chars_copied);

        return 0;
}
