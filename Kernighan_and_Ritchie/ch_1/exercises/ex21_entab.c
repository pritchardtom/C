#include <stdio.h>

/*
 * Exercise 1-21 from K&R pg. 34:
 *      - Write a program entab to replace blanks with min numb of
 *      - tabs and blanks to achieve same spacing.
 *
 *      - Tweaked code from ex20 to achieve this, though not happy with code.
 *
 */

#define MAXLINE 1000
#define TAB_SPACE 8

int main (void)
{
        int c, pos;
        int blanks = 0;
        int tabs = 0;

        for ( pos = 1; (c = getchar()) != EOF; ++pos ) {
                if ( c == ' ' ) {
                        if ( pos % TAB_SPACE != 0 )
                                ++blanks;
                        else {
                                blanks = 0;
                                ++ tabs;
                        }
                } else {
                        for ( ; tabs > 0; --tabs )
                                putchar('\t');
                        if ( c == '\t' )
                                blanks = 0;
                        else
                                for ( ; blanks > 0; --blanks )
                                        putchar(' ');
                        putchar(c);
                        if ( c == '\n' )
                                pos = 0;
                        else if ( c == '\t' )
                                pos = pos + (TAB_SPACE - (pos - 1) % TAB_SPACE);
                }
        }
        return 0;
}
