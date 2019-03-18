#include <stdio.h>

/*
 * Exercise 1-13 from K&R pg. 24:
 *   - Write program to print histogram of length of words input.
 *   - "It's easy to draw histogram horizontally; vertical more challenging."
 * Assumptions:
 *   - English language only;
 *   - OED longest word = pseudopseudohypoparathyroidism [30 letters]
 *
 * The idea is to have an array [1..30], which is updated
 * each time a word of certain length calculated.
 *
 * So an array of size 3, reading following words: cat, my, at
 * would return a result of [0, 2, 1].
 *
 * Would then use a for loop to iterate through, and print * for
 * each value found in array.  Again, for above example, this would
 * appear like:
 *
 * 1:
 * 2: **
 * 3: *
 */

#define ARRAY_SIZE 31

int main (void)
{
        int char_count, c;
        int histogram[ARRAY_SIZE];
        char_count = 0;

        for ( int i = 1; i < ARRAY_SIZE; ++i )
                histogram[i] = 0;

        while (( c = getchar()) != EOF ) {
                if ( c == ' ' || c == '\n' || c == '\t' ) {
                        histogram[char_count] += 1;
                        char_count = 0;
                }
                else {
                        ++char_count;
                }
        }
        printf ("\n*************************************\n");
        printf ("Histogram of Words from Input (1 - 30)\n");
        printf ("*************************************\n\n");
        for ( int i = 1; i < ARRAY_SIZE; ++i ) {
                printf ("\tWords of [%2d] length:  ", i);
                for ( int j = histogram[i]; j > 0; --j ) {
                        printf ("*");
                }
                printf ("\n");
        }
        printf ("\n*************************************\n");
        return 0;
}
