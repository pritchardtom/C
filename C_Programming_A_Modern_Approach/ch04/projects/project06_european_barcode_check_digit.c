/*
 *      Project 4.6 from King's C Programming: A Modern Approach
 *
 *      European barcodes are 13-digits long, and the technique for
 *      calculating the check digit is as follows:
 *              - add 2, 4, 6, 8, 10, 12 digits.
 *              - add 1, 3, 5, 7, 09, 11 digits.
 *              - multiply first sum by 3 and add it to second sum.
 *              - subtract 1 from the total
 *              - compute remainder when total is / 10.
 *              - subtract remainder from 9.
 *
 */

#include <stdio.h>

int main (void)
{
        int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12,
            first_sum, second_sum, rem, total;

        printf ("Enter the twelve digit barcode: ");
        scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
                &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8,
                &i9, &i10, &i11, &i12);

        first_sum = i2 + i4 + i6 + i8 + i10 + i12;
        second_sum = i1 + i3 + i5 + i7 + i9 + i11;

        total = ((3 * first_sum) + second_sum) - 1;
        rem = total %= 10;
        total = 9 - rem;

        printf ("Check digit: %d\n", total);

        return 0;
}
