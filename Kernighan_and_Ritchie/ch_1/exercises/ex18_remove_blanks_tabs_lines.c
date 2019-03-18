#include <stdio.h>

/*
 * Exercise 1-18 from K&R pg. 31:
 *   - Write a program to remove trailing blanks/tabs from each line
 *     of input, and to delete entirely blank lines.
 *
 *   - First attempt involved storing all new code in main.
 *   - This seemed messy, so rewrote and dumped in function clean_line.
 */

#define MAXLINE 1000

int my_getline (char line[], int maxline);
int clean_line (char s[]);

int main (void)
{
        int len, reverse_index;
        char line[MAXLINE];

        while (( len = my_getline(line, MAXLINE)) > 0 ) {
                clean_line(line);
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
  * clean_line: removes trailing blanks/tabs from char array.
  *
  * So: start at s[0] until find "\n".
  * Then take a step back (--i;), and remove everything else?
  * Not sure this is 100% working.  Will leave for now.
  */

int clean_line (char s[])
{
        int i = 0;
        while ( s[i] != '\n' )
                ++i;
        --i;

        for ( i > -1; ((s[i] == ' ') || (s[i] == '\t')); --i )
                ;
        return i;
}
