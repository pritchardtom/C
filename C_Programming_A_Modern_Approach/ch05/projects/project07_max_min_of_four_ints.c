/*
 *      Project 5.7 from King's C Programming: A Modern Approach
 *
 *      Write a program that finds the largest and smallest of four
 *      ints entered by the user.
 *
 *      Use as few if statements as possible.  Four are sufficient.
 *
 *      My solution is to find the two largest and two smallest from
 *      the four, and then compare these four vars to find the absolute
 *      max, min.
 *
 */

#include <stdio.h>

int main (void)
{
        int a, b, c, d, max, min, min_x, max_x, min_y, max_y;

        printf ("Enter four numbers: ");
        scanf ("%d %d %d %d", &a, &b, &c, &d);

        if ( a > b ) {
                max_x = a;
                min_x = b;
        }
        else {
                max_x = b;
                min_x = a;
        }


        if ( c > d ) {
                max_y = c;
                min_y = d;
        }
        else {
                max_y = d;
                min_y = c;
        }


        if ( max_x > max_y )
                max = max_x;
        else
                max = max_y;


        if ( min_x < min_y )
                min = min_x;
        else
                min = min_y;


        printf ("Minimum value = %d\n", min);
        printf ("Maximum value = %d\n", max);

        return 0;
}
