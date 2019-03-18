#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 18):
 *      - counts chars in input - v1
 *      - changed main() to int main (void)
 *      - added return 0;
 * Changes from v1:
 *      - For loop instead
 *      - nc now double instead of long
 */

int main (void)
{
        double nc;
        for ( nc = 0; getchar() != EOF; ++nc )
                ;
        printf ("Total chars: %.0f\n", nc);
        return 0;
}
