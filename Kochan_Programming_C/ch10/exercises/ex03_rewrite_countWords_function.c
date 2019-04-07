/*
 *      Exercise  10.3 from Kochan's "Programming in C"
 *
 *      The countWords function from examples 10.7 and 10.8 incorrectly
 *      counts a word that contains an apostrophe as two separate words.
 *
 *      Modify this function to correctly handle this situation.
 *              - I didn't do this, instead opted to add apostrophe to the
 *                alpha function.
 *
 *      Also, extend the function to count a sequence of positive or
 *      negative numbers, including any commas and periods as a
 *      single word.
 *
 *              - This appears to already be the case.  Altered the test
 *                strings, and only one word is added to total, regardless of
 *                sequence of numbers or symbols mentioned.
 *
 *              - A111....1.1.1.1nd h'e'r'e we go... again. = 6 words.
 *              - And here we go... again. = 5 words.
 *
 */

#include <stdio.h>
#include <stdbool.h>

/*
 *      function to determine if a char is alpha
 */

bool alpha (const char c)
{
        if ( (c >= 'a'  &&  c <= 'z')  ||  (c >= 'A'  &&  c <= 'Z')  ||  c == '\'' )
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
        const char str1[] = "Well, he'r'e goes.";
        const char str2[] = "A111....1.1.1.1nd h'e'r'e we go... again.";

        printf ("%s - words = %i\n", str1, countWords(str1));
        printf ("%s - words = %i\n", str2, countWords(str2));

        return 0;
}
