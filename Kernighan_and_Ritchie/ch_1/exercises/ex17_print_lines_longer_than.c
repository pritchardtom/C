#include <stdio.h>

/*
 * Exercise 1-17 from K&R pg. 31:
 *   - Write a program to print all input lines longer than ARB_LINE
 *
 *   - This seems to work at different ARB_LINE values, so done for now.
 */

#define MAXLINE 1000
#define ARB_LINE 80

int my_getline (char line[], int maxline);

int main (void)
{
        int len;
        int max = 0;
        char line[MAXLINE];

        while (( len = my_getline(line, MAXLINE)) > 0 )
                if ( len >= ARB_LINE )
                        printf ("%s", line);
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
