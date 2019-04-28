/*
 *      Exercise 4.8 from King's C Programming: A Modern Approach
 *
 *      Would the barcode program still work if the expression:
 *              9 - ((total - 1) % 10)
 *      was replaced with:
 *              (10 - (total % 10)) % 10
 *
 */

#include <stdio.h>

int main (void)
{
        // I've modified this, so it doesn't ask for user input:

        int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
            first_sum, second_sum, total, rem;

        d  = 0;
        i1 = 1;
        i2 = 3;
        i3 = 8;
        i4 = 0;
        i5 = 0;

        j1 = 1;
        j2 = 5;
        j3 = 1;
        j4 = 7;
        j5 = 3;

        first_sum = d + i2 + i4 + j1 + j3 + j5;
        second_sum = i1 + i3 + i5 + j2 + j4;
        total = 3 * first_sum + second_sum;

        printf ("Check digit: %d\n", 9 - ((total - 1) % 10));
        printf ("Check digit: %d\n", (10 - (total % 10)) % 10);

        return 0;
}
