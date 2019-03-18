#include <stdio.h>

/*
 * Exercise 1-15 from K&R pg. 27:
 *   - Rewrite the temp conversion program to use function for conversion.
 */

float fahr_to_celsius (float fahr);

int main (void)
{
        float fahr;

        for ( fahr = 0.0; fahr <= 300.0; fahr += 20.0 )
                printf ("%3.0f %6.1f\n", fahr, fahr_to_celsius(fahr));
        return 0;
}

/*
 * fahr_to_celsius function: convert fahr to celsius
 */

float fahr_to_celsius (float fahr)
{
        float celsius;
        celsius = (5.0 / 9.0) * (fahr-32.0);
        return celsius;
}
