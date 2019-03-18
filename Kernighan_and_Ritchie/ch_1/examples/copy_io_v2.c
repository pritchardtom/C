#include <stdio.h>

/*
 * Slightly modified version of K&R script (pg. 16):
 *      - copies input to output version 2
 *      - changed main() to int main (void)
 *      - added return 0;
 */

int main (void)
{
        int c; // cannot use char - not big enough to hold EOF.

        while (( c = getchar()) != EOF )
                putchar(c);
        return 0;
}

/*
 * Exercises 6 & 7 ask to:
 *      - verfiy getchar() != EOF is 0 or 1
 *      - write program to print value of EOF
 * Both are obtained via adding this to while loop:
 *      - printf ("%d", EOF)
 *      - printf ("%d", c != EOF);
 */
