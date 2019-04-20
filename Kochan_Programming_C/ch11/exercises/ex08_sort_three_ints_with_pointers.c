/*
 *      Exercise 11.8 from Kochan's "Programming in C"
 *
 *      Write a function called sort3, to sort three ints
 *      into ascending order.
 *
 *      This function is not to be implemented with arrays.
 *
 */

#include <stdio.h>

/*
 *      function to sort three ints
 */

void sort3 (int *x, int *y, int *z)
{
        int tmp;

        if ( *x > *y ) {
                tmp = *y;
                *y = *x;
                *x = tmp;
        }

        if ( *y > * z ) {
                tmp = *y;
                *y = *z;
                *z = tmp;
        }

        if ( *x > *y ) {
                tmp = *y;
                *y = *x;
                *x = tmp;
        }
}

int main (void)
{
        int num1 = 15, num2 = 6, num3 = 3;

        printf ("Before sort: %2i %2i %2i\n", num1, num2, num3);

        sort3(&num1, &num2, &num3);

        printf (" After sort: %2i %2i %2i\n", num1, num2, num3);

        return 0;
}
