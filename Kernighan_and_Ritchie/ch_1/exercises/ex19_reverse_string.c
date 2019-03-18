#include <stdio.h>

/*
 * Exercise 1-19 from K&R pg. 31:
 *      - Write a function reverse(s) that reverses s[].
 *      - Use this in program to reverse every input line.
 */

#define MAXLINE 1000

int my_getline (char line[], int maxline);
void reverse (char s[]);

int main (void)
{
        int len;
        char line[MAXLINE];

        while (( len = my_getline(line, MAXLINE)) > 0 ) {
                reverse(line);
                printf ("%s", line);
        }
        return 0;
}

/*
 * getline: read a line into s, return length
 */

int my_getline (char line[], int lim)
{
        int c, i;

        for ( i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i )
                line[i] = c;
        if ( c == '\n' ) {
                line[i] = c;
                ++i;
        }
        line[i] = '\0';
        return i;
}

/*
 * reverse: reverse s[];
 */

void reverse (char s[])
{
        int i = 0;
        int j = 0;
        char tmp;

        while ( s[i] != '\n' )
                ++i;
        --i;

        while ( j < i ) {
                tmp = s[j];
                s[j] = s[i];
                s[i] = tmp;
                --i;
                ++j;
        }
}
