#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 29):
 *      - reads a set of text lines and prints the longest.
 *      - changed main() to int main (void)
 *      - added return 0;
 *      - tweaked printf formatting in main
 *      - renamed function getline to my_getline
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
