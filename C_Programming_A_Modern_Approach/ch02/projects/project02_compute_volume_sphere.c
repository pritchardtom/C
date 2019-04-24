/*
 *      Project  2.2 from King's C Programming: A Modern Approach
 *
 *      Write a program that computes the volume of a sphere with
 *      a 10-meter radius, using the formula:
 *              - v = 4/3pir^3
 *
 */

#include <stdio.h>

#define RADIUS 10.0f
#define FRACTION (4.0f / 3.0f)

int main (void)
{
        printf ("volume = %.2f\n", FRACTION * 3.14 * (RADIUS * RADIUS * RADIUS));
        return 0;
}
