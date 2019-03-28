/*
 *      Exercise 05: Write a C program to compute the perimeter and area
 *      of a rectangle with a height of 7 inches. and width of 5 inches.
 *
 */

#include <stdio.h>

int main (void)
{
        int height = 7;
        int width = 5;

        printf ("Area of rectangle: %i\n", width * height);
        printf ("Perimeter of rect: %i\n", 2 * (width + height));

        return 0;
}
