/*
 *      Exercise  3.5 from King's C Programming: A Modern Approach
 *
 *      Suppose that we call scanf as follows:
 *
 *              scanf ("%f%d%f", &x, &i, &y)
 *
 *      If the user enters 12.3 45.6 789, what will the values of
 *      int i, and floats x and y be?
 *
 */

#include <stdio.h>

int main (void)
{
        int i;
        float x, y;

        printf ("Enter a value for x (float), i (int), y (float): ");
        scanf ("%f%d%f", &x, &i, &y);

        printf ("x: %f \t i: %d \t y: %f\n", x, i, y);

        return 0;
}
