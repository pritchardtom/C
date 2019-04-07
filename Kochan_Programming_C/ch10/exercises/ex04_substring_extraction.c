/*
 *      Exercise  10.4 from Kochan's "Programming in C"
 *
 *      Write a function called substring to extract a portion of
 *      a character string.
 *
 *      The function should be called as follows:
 *              substring (source, start, count, result)
 *
 *      source = char string
 *      start  = index number into source indicating first char of substring
 *      count  = num of chars to extract from source
 *      result = array of chars that is to contain extracted substring.
 *
 *      For example: substring ("character", 4, 3, result)
 *      will return act.
 *
 *      Be certain the function inserts a null character at end of
 *      substring in result array.
 *
 *      Also, have function check that requested number of chars
 *      does in fact exist in string.  If not, have function end
 *      the substring when it reaches the end of source string.
 */

#include <stdio.h>

void substring (const char source[], int start, int count, char result[])
{
        int j = 0;

        for ( int i = start; i <= count; ++i ) {
                result[j] = source[i];
                result[j + 1] = '\0';
                ++j;
        }

        printf ("Original string: %s\n", source);
        printf ("      Substring: %s\n", result);

}

int main (void)
{
        const char s[] = "What to do with it all";
        int start = 1;
        int count = 3;
        char sub_s[count];

        substring(s, start, count, sub_s);

        return 0;
}
