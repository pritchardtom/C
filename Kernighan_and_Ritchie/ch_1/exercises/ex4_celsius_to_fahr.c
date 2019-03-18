#include <stdio.h>

/*
 * Exercise 1-4 from K&R pg. 13:
 *   - Write a program to print Celsius to Fahrenheit
 */

int main (void)
{
        float fahr, celsius;
        int lower, upper, step;
        char f, c;

        lower = 0;
        upper = 300;
        step = 20;

        f = 'F';
        c = 'C';

        celsius = lower;
        printf ("\nCelsius to Fahrenheit Table (0 - 300)\n");
        printf ("-------------------------------------\n");
        printf ("\t%3c\t %5c\n", c, f);
        while (celsius <= upper) {
                fahr  = (celsius * 9.0/5.0) + 32.0;
                printf ("\t%3.0f\t %6.1f\n", celsius, fahr);
                celsius = celsius + step;
        }
        return 0;
}
