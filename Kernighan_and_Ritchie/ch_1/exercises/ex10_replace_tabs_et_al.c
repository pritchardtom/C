#include <stdio.h>

/*
 * Exercise 1-10 from K&R pg. 20:
 *   - Write program to copy io.
 *   - Replace each tab with \t
 *   - Ditto for backspaces and backslashes (\\)
 */

int main (void)
{
        int c;

        while (( c = getchar()) != EOF ) {
                if ( c == '\t' ) {
                        putchar('\\');
                        putchar('t');
                }
                if ( c == '\b' ) {
                        putchar('\\');
                        putchar('b');
                }
                if ( c == '\\' )
                        putchar('\\');
                putchar(c);
        }
        return 0;
}
