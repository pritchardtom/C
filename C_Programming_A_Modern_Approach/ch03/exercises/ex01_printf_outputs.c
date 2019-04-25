/*
 *      Exercise  3.1 from King's C Programming: A Modern Approach
 *
 *      What output do the following calls of printf produce?
 *
 */

#include <stdio.h>

int main (void)
{
        printf ("%6d,%4d\n", 86, 1040);
        printf ("%12.5e\n", 30.253);
        printf ("%.4f\n", 83.162);
        printf ("%-6.2g\n", .0000009979);
        return 0;
}
