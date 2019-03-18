#include <stdio.h>

/*
 * Exercises 1-3 from K&R pg. 13:
 *   - Modify the temp conversion program to print a heading above the table.
 *   - Probably a better solution.
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

        fahr = lower;
        printf ("\nFahrenheit to Celsius Table (0 - 300)\n");
        printf ("-------------------------------------\n");
        printf ("\t%3c\t %5c\n", f, c);
        while (fahr <= upper) {
                celsius = (5.0/9.0) * (fahr - 32.0);
                printf ("\t%3.0f\t %6.1f\n", fahr, celsius);
                fahr = fahr + step;
        }
        return 0;
}
