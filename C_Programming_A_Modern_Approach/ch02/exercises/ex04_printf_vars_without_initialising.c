/*
 *      Exercise  2.4 from King's C Programming: A Modern Approach
 *
 *      Write a program that declares several int and float vars,
 *      without initialising them, and print their values.
 *
 *      Is there any pattern to the values (usually there isn't)
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y, z;
        float a, b, c;

        printf ("  Ints: %d  %d  %d\n", x, y, z);
        printf ("Floats: %f  %f  %f\n", a, b, c);

        return 0;
}
