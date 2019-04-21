/*
 *      Program 12.1 from Kochan's "Programming in C"
 *
 *      The Bitwise AND operator.
 */

#include <stdio.h>

int main (void)
{
        // Using octals:
        unsigned int word1 = 077u;
        unsigned int word2 = 0150u;
        unsigned int word3 = 0210u;

        printf ("%o\n", word1 & word2);
        printf ("%o\n", word1 & word1);
        printf ("%o\n", word1 & word2 & word3);

        /*
         *      This has effect of extracting rightmost bit of word1.
         *      And can be used to test if int is even or odd:
         *              - if rightmost bit is 1, number is odd.
         *              - if rightmost bit is 0, number is even.
         */
         
        printf ("%o\n", word1 & 1);

        return 0;
}
