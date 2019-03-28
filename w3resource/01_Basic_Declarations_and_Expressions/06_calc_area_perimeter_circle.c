/*
 *      Exercise 06: Write a C program to compute the perimeter and area
 *      of a circle with a radius of 6 inches.
 *
 */

#include <stdio.h>

int main (void)
{
        int radius = 6;
        float pi = 3.14159;

        printf ("Area of circle: %f\n", pi * (radius * radius));
        printf ("Perimeter circ: %f\n", 2 * (pi * radius));

        return 0;
}
