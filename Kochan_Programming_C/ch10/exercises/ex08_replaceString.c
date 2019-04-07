/*
 *      Exercise  10.8 from Kochan's "Programming in C"
 *
 *      Using findString, removeString, and insertString,
 *      write a new function called replaceString, which takes
 *      the following args:
 *              1. source string;
 *              2. string to locate inside of source; and
 *              3. the string to insert into source.
 *
 *      replaceString (source, s1, s2);
 *
 *      So, replaceString (text, "1", "one"), replaces the first
 *      occurence of the char string "1" inside char string text,
 *      with the string "one".
 *
 *      Solution was completed ad-hoc, making changes to previously
 *      written functions findString, removeString, and insertString.
 *
 *      As a result, it messily uses two global char arrays (waste),
 *      so I'll return to this and rewrite to reduce this requirement.
 *
 */

#include <stdio.h>

char s3[50];
char s4[50];


/*
 *      function to return length of char string.
 */

int stringLength (char s[])
{
        int len = 0;
        for ( ; s[len] != '\0'; ++len )
                ;
        return len;
}

/*
 *      function to find if search string is found within
 *      the source string.
 *
 *      Return the idx where the match is found, otherwise
 *      return 0.
 */

int findString (char source[], char search[])
{
        int i = 0, j = 0;
        int len = stringLength(search);

        // this is inefficient:
        for ( ; source[i] != '\0'  &&  search[j] != '\0'; ++i ) {
                if ( source[i] == search[j] )
                        ++j;
                else
                        j = 0;
        }

        if ( j == len )
                return i - j;
        else
                return 0;
}

/*
 *      function to remove 'total' number of chars from string.
 */

void removeString(char s[], int idx, int del)
{
        int i = 0, j = 0;
        int total = idx + del;

        // until i = idx, copy s1[] into new global string:
        for ( ; i < idx; ++i, ++j )
                s3[j] = s[i];

        // skip chars to be deleted and continue copying:
        for ( i = total; s[i] != '\0'; ++i, ++j )
                s3[j] = s[i];

        s3[j] = '\0';
}

/*
 *      function to insert s2 into s1 at position idx.
 *         - Solution involves using a third char array.
 *         - Should probably get function to return the
 *         - new array.
 */

void insertString (char s1[], char s2[], int idx)
{
        int i = 0, j = 0, k = 0;

        // until i = idx, copy s3[] into new global string:
        for ( ; i < idx; ++i, ++j )
                s4[j] = s3[i];

        // now copy s2 into the global string at position idx:
        for ( ; s2[k] != '\0'; ++k, ++j )
                s4[j] = s2[k];

        // resume copying s1[] into global string, from position i:
        for ( ; s3[i] != '\0'; ++i, ++j)
                s4[j] = s3[i];
}

int main (void)
{
        char text[30] = "the 1 wrong son";
        char find[] = "1";
        char replace[] = "one";

        // does find exists in text:
        int index = findString(text, find);

        if ( index != 0 ) {
                removeString(text, index, stringLength(find));
                insertString(s3, replace, index);
        } else
                printf ("The search found zero matches.\n");

        for ( int i = 0; s4[i] != '\0'; ++i )
                printf ("%c", s4[i]);

        printf ("\n");
        return 0;
}
