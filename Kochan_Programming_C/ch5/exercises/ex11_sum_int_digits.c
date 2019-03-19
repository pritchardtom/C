/*
 *      Exercise 5.11 from Kochan's "Programming in C"
 *
 *      Write program to sum digits of integer.
 *      e.g. 2155 is 2 + 1 + 5 + 5 = 13.
 *
 *      Could use an array, but "haven't covered" in book yet.
 *      Will make use of reverese digit code and sum backwards.
 */

#include <stdio.h>

#include <stdio.h>

 int main (void)
 {
         int number, right_digit, sum;
         sum = 0;

         printf ("Enter your number: \n");
         scanf ("%i", &number);

         while ( number != 0 ) {
                 right_digit = number % 10;
                 number = number / 10;
                 sum += right_digit;
         }
         printf ("\nSum: %d\n", sum);
         return 0;
 }
