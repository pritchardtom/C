/*
 *      Program 2.4 from King's C Programming: A Modern Approach (2nd Ed)
 *
 *      Converts Fahrenheit temp to Celsius
 *
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main (void)
{
        float fahrenheit, celsius;

        printf ("Enter Fahrenheit temp: ");
        scanf ("%f", &fahrenheit);

        celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

        printf ("Celsius temp: %.1f\n", celsius);

        return 0;
}
