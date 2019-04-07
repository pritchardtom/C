/*
 *      Exercise  10.6 from Kochan's "Programming in C"
 *
 *      Write a function called removeString to remove a specified
 *      num of chars from char string.
 *
 *      The function should take three args:
 *              1. source string;
 *              2. starting index number in source string;
 *              3. num of chars to remove.
 *
 */

#include <stdio.h>

void removeString(char s[], int idx, int del)
{
        int count = 1;

        for ( int i = idx; count < del; ++i ) {
                s[i] = '\a';
                ++count;
        }


        for ( int i = 0; i < 13; ++i ) {
                if ( s[i] != '\a' )
                        printf ("%c", s[i]);
        }
        printf ("\n");

}

int main (void)
{
        char text[] = "the wrong son";
        removeString(text, 4, 6);
        return 0;
}
