#include <stdio.h>

/*
 * Exercise 1-16 from K&R pg. 30:
 *   - Revise main routine of longest-line program so it will correctly
 *     print the length of arbitrarily long input lines, and as much as
 *     possible: the text.
 *
 *   - I'm not entirely sure what this means, so will just solve what I
 *     think they're asking.
 *
 *   - I'm going to create a ARB_LINE point, which if exceeded, will
 *     print out those said lines and the number of chars in each s.
 *
 *   - Yeah, not going to do this as it's the next exercise (1-17).
 *   - Okay, I'm an idiot.  All I did was add a printf in while loop.
 */

#define MAXLINE 1000

int my_getline (char line[], int maxline);
void copy (char to[], char from[]);

int main (void)
{
        int len;
        int max = 0;
        char line[MAXLINE];
        char longest[MAXLINE];

        while (( len = my_getline(line, MAXLINE)) > 0 )
                printf ("\tLength: %d\n \tLine:   %s\n", (len - 1), line);
                if ( len > max ) {
                        max = len;
                        copy(longest, line);
                }
        if ( max > 0 )
                printf ("%s", longest);

        return 0;
}

/*
 * getline: read a line into s, return length
 */

int my_getline (char s[], int lim)
{
        int c, i;

        for ( i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i )
                s[i] = c;
        if ( c == '\n' ) {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;
}

/*
 * copy: copy 'from' into 'to' - assume 'to' is big enough
 */

void copy (char to[], char from[])
{
        int i = 0;
        while (( to[i] = from[i] ) != '\0' )
                ++i;
}
