/*
 *      Exercise 11.10 from Kochan's "Programming in C"
 *
 *      Rewrite the compareStrings function from Ch 10,
 *      using a character pointer rather than an array.
 *
 *      Don't think this is great.
 */

#include <stdio.h>
#include <stdbool.h>

/*
 *      function to compareStrings using char pointer.
 */

bool compareStrings (char *s1, char *s2)
{
        bool areEqual;

        if (s1 == s2 )
                return true;
        else
                return false;
}

int main (void)
{
        const char str1[] = "string compare test";
        const char str2[] = "string";

        printf ("%i\n", compareStrings(str1, str2));
        printf ("%i\n", compareStrings(str1, str1));
        printf ("%i\n", compareStrings(str2, str2));

        return 0;
}
