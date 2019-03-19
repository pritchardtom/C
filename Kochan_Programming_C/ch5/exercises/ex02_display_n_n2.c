/*
 *      Exercise 5.2 from Kochan's "Programming in C"
 *
 *      Write a program to generate and display a table of n,
 *      and n2 values of n ranging from 1 to 10.
 */

 #include <stdio.h>

 int main (void)
 {
         int n = 1;

         printf ("TABLE OF SQUARED NUMBERS\n\n");
         printf (" n\t      n2\n");
         printf ("---\t     ----\n");

         while ( n <= 10 ) {
                 printf ("%2i\t     %3i\n", n, n * n);
                 ++n;
         }
         printf ("\n");
         return 0;
 }
