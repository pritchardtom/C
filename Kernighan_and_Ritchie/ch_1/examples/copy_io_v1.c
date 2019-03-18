#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 16):
 *      - copies input to output version 1
 *      - changed main() to int main (void)
 *      - added return 0;
 */

int main (void)
{
        int c; // cannot use char - not big enough to hold EOF.

        c = getchar();
        while (c != EOF) {
                putchar(c);
                c = getchar();
        }
        return 0;
}
