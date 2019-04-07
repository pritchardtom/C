/*
 *      Exercise  10.7 from Kochan's "Programming in C"
 *
 *      Write a function called insertString to insert one
 *      character string into another character string.
 *
 *      The function should take three args:
 *              1. source string;
 *              2. string to be inserted; and
 *              3. position in source string where new string will start.
 *
 */

#include <stdio.h>

char s3[50];

/*
 *      function to insert s2 into s1 at position idx.
 *         - Solution involves using a third char array.
 *         - Should probably get function to return the
 *         - new array.
 */

void insertString (char s1[], char s2[], int idx)
{
        int i = 0;
        int j = 0;
        int k = 0;

        // until i = idx, copy s1[] into new global string:
        for ( ; i < idx; ++i, ++j )
                s3[j] = s1[i];

        // now copy s2 into the global string at position idx:
        for ( ; s2[k] != '\0'; ++k, ++j )
                s3[j] = s2[k];

        // resume copying s1[] into global string, from position i:
        for ( ; s1[i] != '\0'; ++i, ++j)
                s3[j] = s1[i];
}

int main (void)
{
        char text[30] = "the wrong son";
        char new[3] = "per";
        int pos = 10;

        insertString(text, new, pos);

        for ( int i = 0; s3[i] != '\0'; ++i )
                printf ("%c", s3[i]);

        printf ("\n");
        return 0;
}
