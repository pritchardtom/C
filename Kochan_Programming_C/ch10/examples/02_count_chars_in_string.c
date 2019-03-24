/*
 *      Program 10.2 from Kochan's "Programming in C"
 *
 *      Count num of chars in string.
 */

#include <stdio.h>

/*
 *      function to count chars in string.
 *      set to const because it will not make any changes to string.
 */

int stringLength (const char string[])
{
        int count = 0;

        while ( string[count] != '\0' )
                ++count;

        return count;
}

int main (void)
{
        const char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
        const char word2[] = { 'a', 't', '\0' };
        const char word3[] = { 'a', 'w', 'e', '\0' };

        printf ("%i   %i   %i\n", stringLength(word1), stringLength(word2), stringLength(word3));

        return 0;
}
