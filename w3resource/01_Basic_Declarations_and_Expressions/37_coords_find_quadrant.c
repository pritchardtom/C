/*
 *      Exercise 37: Write a C program to read Cartesian coordinates(x, y)
 *      and find the quadrant to which it belongs:
 *
 *      Quadrant   I: (+,+)
 *      Quadrant  II: (-,+)
 *      Quadrant III: (-,-)
 *      Quadrant  IV: (+,-)
 *
 */

#include <stdio.h>

struct cord
{
        int x;
        int y;
};

int main (void)
{
        struct cord c;

        printf ("Enter co-ordinate (x,y): ");
        scanf ("%i,%i", &c.x, &c.y);

        if ( c.x >= 0  &&  c.y >= 0 )
                printf ("\nQuadrant I\n");
        else if ( c.x < 0  &&  c.y >= 0 )
                printf ("\nQuadrant II\n");
        else if ( c.x < 0  &&  c.y < 0 )
                printf ("\nQuadrant III\n");
        else
                printf ("\nQuadrant IV\n");

        return 0;
}
