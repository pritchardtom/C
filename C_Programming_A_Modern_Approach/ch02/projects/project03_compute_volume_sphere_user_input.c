/*
 *      Project 2.3 from King's C Programming: A Modern Approach
 *
 *      Modify project 2.2 so the radius is obtained by user
 *      input.
 *
 */

#include <stdio.h>

#define FRACTION (4.0f / 3.0f)

int main (void)
{
        float radius;

        printf ("Enter radius: ");
        scanf ("%f", &radius);

        printf ("volume = %.2f\n", FRACTION * 3.14 * (radius * radius * radius));
        return 0;
}
