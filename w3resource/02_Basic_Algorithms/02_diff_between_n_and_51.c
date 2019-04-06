/*
 *      Exercise 02:  Write a C program to get the absolute difference between
 *      n and 51. If n is greater than 51 return triple the absolute difference.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter a number: ");
        scanf ("%i", &num);

        if ( num > 51 ) {
                printf ("Number was > 51\n");
                printf ("The difference tripled = %i\n", (num - 51) * 3);
        }
        else
                printf ("The difference between %i and 51 = %i\n", num, 51 - num);


        return 0;
}
