/*
 *      Exercise  3.2 from King's C Programming: A Modern Approach
 *
 *      Write calls of printf that display a float variable x in
 *      the following formats:
 *
 *      a) exponential notation; left-justified in a field of size 8,
 *         one digit after the decimal point.
 *
 *      b) exponential notation; right-justified in a field of size 10,
 *         six digits after decimal point.
 *
 *      c) fixed decimal notation; left-justified in a field of size 8,
 *         three digits after decimal point.
 *
 *      d) fixed decimal notation; right-justified in a field of size 6,
 *         no digits after decimal point.
 *
 */

#include <stdio.h>

int main (void)
{
        float x = 3.987654;

        // answer to a):
        printf ("%-8.1e\n", x);

        // answer to b):
        printf ("%10.6e\n", x);

        // answer to c):
        printf ("%-8.3f\n", x);

        // answer to d):
        printf ("%6.0f\n", x);

        return 0;
}
