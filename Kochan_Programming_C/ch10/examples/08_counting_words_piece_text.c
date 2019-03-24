/*
 *      Program 10.8 from Kochan's "Programming in C"
 *
 *      Counting words in a piece of text.
 */

#include <stdio.h>
#include <stdbool.h>

/*
 *      function to determine if a char is alpha
 */

bool alpha (const char c)
{
        if ( (c >= 'a'  &&  c <= 'z')  ||  (c >= 'A'  &&  c <= 'Z') )
                return true;
        else
                return false;
}

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

/*
 *      function to count number of words in a string
 */

int countWords (const char string[])
{
        int i, wordCount = 0;
        bool lookingForWord = true;

        for ( i = 0; string[i] != '\0'; ++i )
                if ( alpha(string[i]) ) {
                        if ( lookingForWord ) {
                                ++wordCount;
                                lookingForWord = false;
                        }
                }
                else
                        lookingForWord = true;

        return wordCount;
}

int main (void)
{
        char text[81];
        int totalWords = 0;
        bool endOfText = false;

        printf ("Type in your text.\n");
        printf ("When done, press RETURN.\n\n");

        while ( ! endOfText ) {
                readLine(text);

                if ( text[0] == '\0' )
                        endOfText = true;
                else
                        totalWords += countWords(text);
        }

        printf ("\nThere are %i words in text.\n", totalWords);

        return 0;
}
