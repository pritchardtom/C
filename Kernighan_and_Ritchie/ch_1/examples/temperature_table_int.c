#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 9):
 *      - changed main() to int main (void)
 *      - added return 0;
 */

int main (void)
{
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        while (fahr <= upper) {
                celsius = 5 * (fahr - 32) / 9;
                printf ("%d\t%d\n", fahr, celsius);
                fahr = fahr + step;
                /*
                 * Use this for prettier output:
                 * printf ("%3d %6d\n", fahr, celsius);
                 */
        }
        return 0;
}
