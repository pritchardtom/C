/*
 *      Project  3.5 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user to enter the numbers
 *      1 to 16 in any order.  Display these numbers back in a
 *      4x4 arrangement, followed by the sums of the rows, cols,
 *      and diagonals.
 *
 *      Obviously this solution is very clumsy, but follows what has
 *      been learned so far in this book.  I.e., no arrays/loops yet.
 *
 */

#include <stdio.h>

int main (void)
{
        int n1,  n2,  n3,  n4,  n5,  n6,  n7,  n8;
        int n9, n10, n11, n12, n13, n14, n15, n16;
        int col1, col2, col3, col4;
        int row1, row2, row3, row4;
        int dia1, dia2;

        printf ("Enter nums 1-16 in any order: ");
        scanf ("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
                &n1,  &n2,  &n3,  &n4,  &n5,  &n6,  &n7,  &n8,
                &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

        printf ("\n");
        printf ("%2d %2d %2d %2d\n",  n1,  n2,  n3,  n4);
        printf ("%2d %2d %2d %2d\n",  n5,  n6,  n7,  n8);
        printf ("%2d %2d %2d %2d\n",  n9, n10, n11, n12);
        printf ("%2d %2d %2d %2d\n", n13, n14, n15, n16);

        // calculate sum of rows:
        row1 =  n1 +  n2 +  n3 +  n4;
        row2 =  n5 +  n6 +  n7 +  n8;
        row3 =  n9 + n10 + n11 + n12;
        row4 = n13 + n14 + n15 + n16;

        // calculate sum of cols:
        col1 = n1 + n5 +  n9 + n13;
        col2 = n2 + n6 + n10 + n14;
        col3 = n3 + n7 + n11 + n15;
        col4 = n4 + n8 + n12 + n16;

        // calculate sum of diagonals:
        dia1 =  n1 +  n6 + n11 + n16;
        dia2 = n13 + n10 +  n7 +  n4;

        printf ("Row sums: %2d %2d %2d %2d\n", row1, row2, row3, row4);
        printf ("Col sums: %2d %2d %2d %2d\n", col1, col2, col3, col4);
        printf ("Dia sums: %2d %2d\n", dia1, dia2);

        return 0;
}
