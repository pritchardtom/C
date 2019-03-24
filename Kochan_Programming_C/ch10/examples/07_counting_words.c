/*
 *      Program 10.7 from Kochan's "Programming in C"
 *
 *      Counting words.
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
        const char str1[] = "Well, here goes.";
        const char str2[] = "And here we go... again.";

        printf ("%s - words = %i\n", str1, countWords(str1));
        printf ("%s - words = %i\n", str2, countWords(str2));

        return 0;
}
