/*
 *      Exercise 5.9 from King's C Programming: A Modern Approach
 *
 *      Are the following if statements equivalent?
 *
 */

#include <stdio.h>

int main (void)
{
        int score = 91;

        // a):

        if ( score >= 90 )
                printf ("A\n");
        else if ( score >= 80 )
                printf ("B\n");
        else if ( score >= 70 )
                printf ("C\n");
        else if ( score >= 60 )
                printf ("D\n");
        else
                printf ("F\n");

        // b):

        if ( score < 60 )
                printf ("f\n");
        else if ( score < 70 )
                printf ("d\n");
        else if ( score < 80 )
                printf ("c\n");
        else if ( score < 90 )
                printf ("b\n");
        else
                printf ("a\n");

        return 0;
}
