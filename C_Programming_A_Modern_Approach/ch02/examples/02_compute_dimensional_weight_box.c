/*
 *      Program 2.2 from King's C Programming: A Modern Approach (2nd Ed)
 *
 *      Computes the dimensional weight of a box.
 *
 */

#include <stdio.h>

int main (void)
{
        int height, length, width, volume, weight;

        height = 8;
        length = 12;
        width  = 10;
        volume = height * length * width;
        weight = (volume + 165) / 166;

        printf ("Dimensions: %dx%dx%d\n", length, width, height);
        printf ("Volume (cubic inches): %d\n", volume);
        printf ("Dimensional weight (pounds): %d\n", weight);

        return 0;
}
