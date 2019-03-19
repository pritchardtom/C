/*
 *      Exercise 5.9 from Kochan's "Programming in C"
 *
 *      Rewrite programs 5.2 - 5.5, using while statements.
 *      Original code:
 *
 *              #include <stdio.h>
 *              int main (void){
 *              int n, triangularNumber;
 *              triangularNumber = 0;
 *              for ( n = 1; n <= 200; n = n + 1 )
 *                      triangularNumber = triangularNumber + n;
 *              printf ("The 200th triangular number is: %i\n", triangularNumber);
 *              return 0; }
 */

#include <stdio.h>

int main (void)
{
        int n, triangularNumber;
        n = triangularNumber = 0;

        while ( n <= 200 ) {
                triangularNumber += n;
                ++n;
        }
        printf ("The 200th triangular number is: %i\n", triangularNumber);
        return 0;
}
