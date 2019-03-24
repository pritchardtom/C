/*
 *      Program 10.6 from Kochan's "Programming in C"
 *
 *      Reading lines of data
 */

#include <stdio.h>

/*
 *      function to read a line of text from terminal
 */

void readLine (char buffer[])
{
        char character;
        int i = 0;

        do {
                character = getchar();
                buffer[i] = character;
                ++i;
        }
        while ( character != '\n' );

        // replace newline at end of input with null char:
        buffer[i - 1] = '\0';
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
