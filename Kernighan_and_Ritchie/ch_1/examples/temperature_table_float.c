#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 12):
 *      - changed main() to int main (void)
 *      - added return 0;
 */

 int main (void)
 {
         float fahr, celsius;
         int lower, upper, step;

         lower = 0;
         upper = 300;
         step = 20;

         fahr = lower;
         while (fahr <= upper) {
                 celsius = (5.0/9.0) * (fahr - 32.0);
                 printf ("%3.0f %6.1f\n", fahr, celsius);
                 fahr = fahr + step;
         }
         return 0;
 }
