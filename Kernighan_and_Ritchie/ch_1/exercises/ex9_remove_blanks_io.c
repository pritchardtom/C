#include <stdio.h>

/*
 * Exercise 1-9 from K&R pg. 20:
 *   - Write program to copy io, replace multi-blanks with just one blank.
 *   - This solution is ugly.  Track last char instead?
 *              - Would that be any better re: ifs?
 */

int main (void)
{
        int c;
        int blank_count = 0;

        while (( c = getchar()) != EOF ) {
                if ( c == ' ' && blank_count == 0 ) {
                        putchar(c);
                        ++blank_count;
                }
                if ( c == ' ' && blank_count > 0 )
                        ++blank_count;
                else {
                        putchar(c);
                        blank_count = 0;
                }
        }
        return 0;
}
