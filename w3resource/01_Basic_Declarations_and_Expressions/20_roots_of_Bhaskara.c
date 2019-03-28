/*
 *      Exercise 20: Write a C program to print the roots of Bhaskara’s
 *      formula from the given three floating numbers.
 *      Display a message if it is not possible to find the roots
 *
 */

#include <stdio.h>
#include <math.h>

int main (void)
{
        float num1, num2, num3;
        float discriminant;

        printf ("Enter 1st number: \n");
        scanf ("%f", &num1);

        printf ("Enter 2nd number: \n");
        scanf ("%f", &num2);

        printf ("Enter 3rd number: \n");
        scanf ("%f", &num3);

        discriminant = (num2 * num2) - (4 * (num1) * (num3));

        if ( discriminant > 0  &&  num1 != 0 ) {
                float x, y;

                discriminant = sqrt(discriminant);
                x = (-num2 + discriminant) / (2 * num1);
                y = (-num2 - discriminant) / (2 * num1);

                printf ("Root x1: %f\n", x);
                printf ("Root x2: %f\n", y);
        }
        else
                printf ("Couldn't find roots\n");

        return 0;
}
