#include <stdio.h>

/*
 *      Program 3.6 from Kochan's "Programming in C"
 *      Identical to 3.5 but with comments added.
 */

 /* This program adds two integer values
    and displays the results */

 int main (void)
 {
         // declare variables
         int value1, value2, sum;

         // assign values and calculate sum
         value1 = 50;
         value2 = 25;
         sum = value1 + value2;

         // display result
         printf ("The sum of %i + %i is: %i\n", value1, value2, sum);

         return 0;
 }
