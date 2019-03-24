/*
 *      Program 10.5 from Kochan's "Programming in C"
 *
 *      Reading strings with scanf
 */

#include <stdio.h>

int main (void)
{
        char s1[81];
        char s2[81];
        char s3[81];

        printf ("Enter text: \n");

        /*
         *      N.B. Qhen using %s you do not need & in front of s1 etc.
         *      scanf used like this can cause an overflow if s > 80 chars:
         *      To prevent, use this instead:
         *              scanf ("%80s%80s%80s", s1, s2, s3);              
         */
        scanf ("%s%s%s", s1, s2, s3);



        printf ("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);



        return 0;
}
