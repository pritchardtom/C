/*
 *      Exercise 82: Write a C program that reads in an integer
 *      and determines whether or not it’s a palindrome.
 *
 *      Use Exercise 75 as basis.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, tmp;
        int reverse = 0;

        printf ("Enter a number: ");
        scanf ("%i", &num);

        // create a copy of num:
        tmp = num;

        // reverse tmp:
        while ( tmp != 0 ) {
                reverse *= 10;
                reverse += (tmp % 10);
                tmp /= 10;
        }

        // compare num with its reverse (tmp):

        if ( num == reverse)
                printf ("Palindrome!\n");
        else
                printf ("Not a Palindome!\n");

        return 0;
}
