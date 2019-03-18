#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 15):
 *      - changed main() to int main (void)
 *      - tweaked loop_exp from fahr = fahr + 20
 *      - added return 0;
 */

#define LOWER 0
#define UPPER 300
#define STEP  20

int main (void)
{
        int fahr;

        for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
                printf ("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
        return 0;
}
