#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 20):
 *      - counts lines, words, chars
 *      - changed main() to int main (void)
 *      - added return 0;
 *      - slightly tweaked printf 
 */

#define IN  1
#define OUT 0

int main (void)
{
        int c, nl, nw, nc, state;

        nl = nw = nc = 0;
        state = OUT;

        while (( c = getchar()) != EOF ) {
                ++nc;
                if ( c == '\n' )
                        ++nl;
                if ( c == ' ' || c == '\n' || c == '\t' )
                        state = OUT;
                else if ( state == OUT ) {
                        state = IN;
                        ++nw;
                }
        }
        printf ("L: %d\t C: %d\t W: %d\n", nl, nc, nw);
        return 0;
}
