#include <stdio.h>

/*
 * Exercise 1-8 from K&R pg. 20:
 *   - Write program to count blanks, tabs, and new lines.
 */

int main (void)
{
        int c, num_blanks, num_tabs, num_lines;
        num_blanks = num_lines = num_tabs = 0;

        while (( c = getchar()) != EOF ) {
                if ( c == '\n' )
                        ++num_lines;
                if ( c == ' ' )
                        ++num_blanks;
                if ( c == '\t' )
                        ++num_tabs;
        }

        printf ("Total blanks: %d\n", num_blanks);
        printf ("Total tabs: %d\n", num_tabs);
        printf ("Total lines: %d\n", num_lines);

        return 0;
}
