/*
 *      Exercise 5.9 from Kochan's "Programming in C"
 *
 *      Rewrite 5.2 - 5.5. replacing with while loops.
 *      Original code (5.3):
 *              #include <stdio.h>
 *              int main (void){
 *              int n, triangularNumber;
 *              triangularNumber = 0;
 *              printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
 *              printf ("  n      Sum from 1 to n\n");
 *              printf ("----     ---------------\n");
 *              for ( n = 1; n <= 10; ++n ) {
 *                      triangularNumber += n;
 *                      printf (" %2i            %i\n", n, triangularNumber);}
 *              return 0; }
 */

#include <stdio.h>

int main (void)
{
        int n, triangularNumber;
        triangularNumber = 0;
        n = 1;

        printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
        printf ("  n      Sum from 1 to n\n");
        printf ("----     ---------------\n");

        while ( n <= 10 ) {
                triangularNumber += n;
                printf (" %2i            %i\n", n, triangularNumber);
                ++n;
        }
        return 0;
}
