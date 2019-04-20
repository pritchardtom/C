/*
 *      Exercise 11.9 from Kochan's "Programming in C"
 *
 *      Rewrite the readLine function from Ch 10, using a
 *      character pointer rather than an array.
 *
 */

#include <stdio.h>

/*
 *      function to read a line of data using char pointer.
 */

void readLine (char *buffer)
{
        char character;

        do {
                character = getchar();
                *buffer++ = character;
        }
        while ( character != '\n');

        *--buffer = '\0';
}

int main (void)
{
        int i;
        char line[81];

        for ( i = 0; i < 3; ++i ) {
                readLine(line);
                printf ("%s\n\n", line);
        }

        return 0;
}
