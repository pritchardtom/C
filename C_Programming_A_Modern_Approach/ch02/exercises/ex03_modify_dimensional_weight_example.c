/*
 *      Exercise  2.3 from King's C Programming: A Modern Approach
 *
 *      Condense the dimensional weight calc program (../examples/02)
 *      by:
 *
 *      1. replacing assignments to height, length, and width with
 *         initialisers.
 *
 *      2. remove the weight variable, instead calculating the volume
 *         within last printf
 *
 */

#include <stdio.h>

int main (void)
{

        int height = 8, length = 12, width = 10, volume, weight;
        volume = height * length * width;

        printf ("Dimensions: %dx%dx%d\n", length, width, height);
        printf ("Volume (cubic inches): %d\n", volume);
        printf ("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

        return 0;
}
