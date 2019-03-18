#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 13):
 *      - changed main() to int main (void)
 *      - tweaked loop_exp from fahr = fahr + 20
 *      - added return 0;
 */

int main (void)
{
        int fahr;

        for (fahr = 0; fahr <= 300; fahr += 20)
                printf ("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
        return 0;
}
