/*
 *      Exercise  3.3 from King's C Programming: A Modern Approach
 *
 *      For each of the following pairs of scanf format strings,
 *      indicate whether or not the two strings are equivalent.
 *      If they're not, show how they can be distinguished.
 *
 *      a) "%d"        " %d"
 *      b) "%d-%d-%d"  "%d -%d -%d"
 *      c) "%f"        "%f "
 *      d) "%f,%f"     "%f, %f"
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y, z;
        float f, g;

        // a):
        printf ("Enter value for x: ");
        scanf ("%d", &x);
        printf ("%d\n", x);
        printf ("Enter value for x: ");
        scanf (" %d", &x);
        printf ("%d\n", x);

        // b):
        printf ("Enter value for x-y-z: ");
        scanf ("%d-%d-%d", &x, &y, &z);
        printf ("%d %d %d\n", x, y, z);
        printf ("Enter value for x -y -z: ");
        scanf ("%d -%d -%d", &x, &y, &z);
        printf ("%d %d %d\n", x, y, z);

        // c):
        printf ("Enter value for f: ");
        scanf ("%f", &f);
        printf ("%f\n", f);
        printf ("Enter value for f: ");
        scanf ("%f ", &f);
        printf ("%f\n", f);

        // d):
        printf ("Enter value for f,g: ");
        scanf ("%f,%f", &f, &g);
        printf ("%f,%g\n", f, g);
        printf ("Enter value for f, g: ");
        scanf ("%f, %f", &f, &g);
        printf ("%f, %g\n", f, g);

        return 0;
}
