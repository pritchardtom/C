#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 18):
 *      - counts chars in input - v1
 *      - changed main() to int main (void)
 *      - added return 0;
 */

int main (void)
{
        long nc = 0;
        while ( getchar() != EOF )
                ++nc;
        printf ("Total chars: %ld\n", nc);
        return 0;
}
