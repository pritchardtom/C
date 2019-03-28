/*
 *      Exercise 15: Write a C program to calculate the distance between the two points.
 *
 */

#include <stdio.h>
#include <math.h>

struct point
{
        int x;
        int y;
};

int main (void)
{
        struct point p1, p2;
        float distance;

        printf ("Enter x1: ");
        scanf ("%i", &p1.x);
        printf ("Enter y1: ");
        scanf ("%i", &p1.y);

        printf ("\n");

        printf ("Enter x2: ");
        scanf ("%i", &p2.x);
        printf ("Enter y2: ");
        scanf ("%i", &p2.y);

        distance = ((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y));

	printf ("Distance between points: %.4f\n", sqrt(distance));


        return 0;
}
