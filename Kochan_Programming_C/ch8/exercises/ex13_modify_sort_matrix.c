/*
 *      Exercise  8.13 from Kochan's "Programming in C"
 *
 *      Modify the sort function from example 8.12 to take a third
 *      argument indicating whether the array is to be sorted in
 *      ascending/descending order.
 *
 *      Adjust the returned result accordingly.
 */

#include <stdio.h>

void sort (int a[], int n, char sort_opt)
{
        int i, j, temp;

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
        int i;
        int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                          44, -3, -9, 12, 17, 22, 6, 11};

        printf ("\n\nThe array before the sort:  \n\t");
        for ( i = 0; i < 16; ++i )
                printf ("%i ", array[i]);
        printf ("\n");

        sort(array, 16, 'd');

        printf ("\nThe array after descending sort:  \n\t");
        for ( i = 0; i < 16; ++i )
                printf ("%i ", array[i]);
        printf ("\n");

        sort(array, 16, 'a');

        printf ("\nThe array after ascending sort:  \n\t");
        for ( i = 0; i < 16; ++i )
                printf ("%i ", array[i]);

        printf ("\n\n");
        return 0;
}
