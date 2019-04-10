/*
 *      Exercise  10.13 from Kochan's "Programming in C"
 *
 *      If c is a lowercase character, the expression:
 *              c - 'a' + 'A'
 *      produces the uppercase equivalent of c (in ASCII).
 *
 */

#include <stdio.h>

void toUpper (char s[])
{
        for ( int i = 0; s[i] != '\0'; ++i ) {
                if ( s[i] >= 'a'  &&  s[i] <= 'z' )
                        s[i] = s[i] - 'a' + 'A';
        }

}

int main (void)
{
        char string[] = "what is going on";
        toUpper(string);

        printf ("%s\n", string);
        return 0;
}
