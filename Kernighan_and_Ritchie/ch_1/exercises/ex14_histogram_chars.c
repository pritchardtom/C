#include <stdio.h>

/*
 * Exercise 1-14 from K&R pg. 24:
 *   - Write program to print histogram of freq of chars.
 * Assumptions:
 *   - Lowercase English language only;
 *
 * The idea is to have an array [1..26], which is updated
 * each time a certain char appears.  Similar to ex 1-13.
 *
 * Not sure why I've restricted this to a-z.  Easy to expand.
 *
 */

#define ARRAY_SIZE 27
#define LOWER_A    97
#define LOWER_Z    122

int main (void)
{
        int c, char_index;
        int histogram[ARRAY_SIZE];
        char_index = 0;

        for ( int i = 1; i < ARRAY_SIZE; ++i )
                histogram[i] = 0;

        /*
         * This is ugly!
         * The "c - (98 - 2)" converts ASCII a-z codes to [1..26] index of my
         * array, histogram.
         * e.g. 'm' in ascii is 109.
         *      'm' in alpha is in 13th position.
         *
         *      So, if I find an 'm' in input (109), I want to record this in
         *      histogram[13].
         *
         *      In code below, using m as example char:
         *      char_index = 109 - (98 - 2) which = 13.
         */

        while (( c = getchar()) != EOF ) {
                if ( c >= LOWER_A && c <= LOWER_Z ) {
                        char_index = c - (98 - 2);
                        histogram[char_index] += 1;
                }
        }

        printf ("\n*************************************\n");
        printf ("Histogram of Chars from Input (a - z)\n");
        printf ("*************************************\n\n");

        /*
         * Again, making use of the ASCII to alpha [1..26] location.
         * Probably shouldn't make a habit of coding like this, but it is more
         * compact as a result.
         *
         * Use it here to access each array element and print relevant * number.
         *
         */

        for ( int x = LOWER_A; x <= LOWER_Z; ++x ) {
                printf ("\tLetter [%c]: ", (char) x);
                char_index = x - (98 - 2);

                for ( int j = histogram[char_index]; j > 0; --j ) {
                        printf ("*");
                }
                printf ("\n");
        }
        printf ("\n*************************************\n\n");
        return 0;
}
