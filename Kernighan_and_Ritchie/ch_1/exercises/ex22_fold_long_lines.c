#include <stdio.h>

/*
 * Exercise 1-22 from K&R pg. 34:
 *      - Write a program to fold long input lines into 2+ shorter lines
 */

#define MAXLINE 1000
#define LINE_WRAP 80



// I think for this one, write a function which gets the line length (until come to)
// \n or \0?  If the line is under a certain size, do nothing.
// Pass line back to get_length() and continue?
//
// Otherwise, find the next space before or afterwards, and break the line there?

// #define MAXLINE 1000
// #define TAB_SPACE 8
//
// int main (void)
// {
//         int c, pos;
//         int blanks = 0;
//         int tabs = 0;
//
//         for ( pos = 1; (c = getchar()) != EOF; ++pos ) {
//                 if ( c == ' ' ) {
//                         if ( pos % TAB_SPACE != 0 )
//                                 ++blanks;
//                         else {
//                                 blanks = 0;
//                                 ++ tabs;
//                         }
//                 } else {
//                         for ( ; tabs > 0; --tabs )
//                                 putchar('\t');
//                         if ( c == '\t' )
//                                 blanks = 0;
//                         else
//                                 for ( ; blanks > 0; --blanks )
//                                         putchar(' ');
//                         putchar(c);
//                         if ( c == '\n' )
//                                 pos = 0;
//                         else if ( c == '\t' )
//                                 pos = pos + (TAB_SPACE - (pos - 1) % TAB_SPACE);
//                 }
//         }
//         return 0;
// }
