#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 19):
 *      - counts lines in input
 *      - changed main() to int main (void)
 *      - added return 0;
 */

int main (void)
{
        int c, num_lines;
        num_lines = 0;

        while (( c = getchar()) != EOF )
                if ( c == '\n')
                        ++num_lines;
        printf ("Total lines: %d\n", num_lines);
        return 0;
}
