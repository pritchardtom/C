#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 32):
 *      - reads a set of text lines and prints the longest.
 *      - changed main() to int main (void)
 *      - added return 0;
 *      - tweaked printf formatting in main
 *      - renamed function getline to my_getline
 */

#define MAXLINE 1000

/* External vars declarations */

int max;
char line[MAXLINE];
char longest[MAXLINE];

int my_getline (void);
void copy (void);

int main (void)
{
        int len;
        extern int max;
        extern char longest[];
        max = 0;

        while ((len = my_getline()) > 0 )
                if ( len > max ) {
                        max = len;
                        copy();
                }
        if ( max > 0 )
                printf ("%s", longest);
        return 0;
}

/*
 * getline: read a line into s, return length
 */

int my_getline (void)
{
        int c, i;
        extern char line[];

        for ( i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i )
                line[i] = c;
        if ( c == '\n' ) {
                line[i] = c;
                ++i;
        }
        line[i] = '\0';
        return i;
}

/*
 * copy: fairly obvious
 */

void copy (void)
{
        int i;
        extern char line[], longest[];

        i = 0;
        while ((longest[i] = line[i]) != '\0')
                ++i;
}
