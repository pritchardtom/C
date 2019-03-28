/*
 *      Exercise 14: Write a C program to calculate a bike’s average
 *      consumption from the given total distance traveled (int - km),
 *      and spent fuel (in liters, float).
 *
 */

#include <stdio.h>

int main (void)
{
        int km;
        float fuel;

        printf ("Enter distance travelled (km): \n");
        scanf ("%i", &km);

        printf ("Enter fuel used (ltrs): \n");
        scanf ("%f", &fuel);

        printf ("Average fuel consumption (km/ltr): %.2f\n", km / fuel);

        return 0;
}
