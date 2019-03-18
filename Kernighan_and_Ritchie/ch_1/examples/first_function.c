#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 24):
 *      - creates power function
 *      - changed main() to int main (void)
 *      - added return 0;
 *      - tweaked printf formatting in main
 */

int power (int m, int n);

int main (void)
{
        for (int i = 0; i < 10; ++i )
                printf ("%d\t %3d\t %5d\t\n", i, power(2,i), power(-3,i));
        return 0;
}

/*
 * power function: raise base to nth power
 */

 int power (int base, int n)
 {
         int p = 1;

         for ( int i = 1; i <= n; ++i )
                p *= base;
        return p;
 }
