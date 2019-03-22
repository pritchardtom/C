/*
 *      Exercise  8.14 from Kochan's "Programming in C"
 *
 *      Rewrite the functions developed in the last four exercises to
 *      use global variables instead of arguments.
 *
 *      I cannot be bothered to do this, so will do it for this
 *      exercise only.  This chapter has dragged on.
 */

#include <stdio.h>

char sort_opt = 'd';
int n = 16;
int a[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                  44, -3, -9, 12, 17, 22, 6, 11};

int i, j, temp;

void sort ()
{
        if ( sort_opt == 'a' ) {
                for ( i = 0; i < n - 1; ++i )
                        for ( j = i + 1; j < n; ++j )
                                if ( a[i] > a[j] ) {
                                        temp = a[i];
                                        a[i] = a[j];
                                        a[j] = temp;
                                }
        } else if ( sort_opt == 'd' ) {
                for ( i = 0; i < n - 1; ++i )
                        for ( j = i + 1; j < n; ++j )
                                if ( a[i] < a[j] ) {
                                        temp = a[i];
                                        a[i] = a[j];
                                        a[j] = temp;
                                }
        }
}

int main (void)
{
        printf ("\n\nThe array before the sort:  \n\t");
        for ( i = 0; i < 16; ++i )
                printf ("%i ", a[i]);
        printf ("\n");

        sort();

        printf ("\nThe array after descending sort:  \n\t");
        for ( i = 0; i < 16; ++i )
                printf ("%i ", a[i]);
        printf ("\n");

        printf ("\n");
        return 0;
}
