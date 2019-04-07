/*
 *      Exercise  10.5 from Kochan's "Programming in C"
 *
 *      Write a function called findString to determine if one
 *      char string exists inside another string.
 *
 *      The first arg should be the string to be searched.
 *      The second arg should be string interested in finding.
 *
 *      If the function finds specified string, have it return
 *      the location in source string where it was found.
 *              If not found, return -1.
 *
 *      Example: index = findString("a chatterbox", "hat");
 *              Searches "a chatterbox" for "hat".
 *              This is found, so function returns 3 to indicate
 *              staring position of where hat was found.
 *
 *      This solution probably isn't the best, in terms of runtime.
 *      Might return to this and improve.
 */

#include <stdio.h>

int findString (char source[], char search[])
{
        int i = 0, j = 0, len = 0;

        for ( len = 0; search[len] != '\0'; ++len )
                ;

        for ( ; source[i] != '\0'  &&  search[j] != '\0'; ++i )
                if ( source[i] == search[j] )
                        ++j;
                else
                        j = 0;

        if ( j == len )
                printf ("Match found at index: %d\n", i - (j + 1));
        else
                printf ("No match!\n");

        return 0;
}

int main (void)
{
        int result = findString("a chatterbox", "hat");
        return 0;
}
