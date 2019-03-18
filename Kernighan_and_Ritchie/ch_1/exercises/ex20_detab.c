#include <stdio.h>

/*
 * Exercise 1-20 from K&R pg. 34:
 *      - Write a program detab to replace tabs in input with
 *      - n spaces instead.
 *
 *      - Original solution (wihout additional while) was buggy.
 */

#define MAXLINE 1000
#define TAB_SPACE 2

int main (void)
{
        int c;
        int blanks = 0;
        int pos = 1;

        while ((c = getchar()) != EOF) {
                if ( c == '\t' ) {
                        blanks = TAB_SPACE - ((pos - 1) % TAB_SPACE);
                        while ( blanks > 0 ) {
                                putchar(' ');
                                ++pos;
                                --blanks;
                        }
                } else if ( c == '\n' ) {
                        putchar(c);
                        pos = 1;
                } else {
                        putchar(c);
                        ++pos;
                }
        }
        return 0;
}
