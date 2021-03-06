/*
 *      Program 6.8 from Kochan's "Programming in C"
 *
 *      Program to evaluate simple expression of the form:
 *              number operator number
 */

#include <stdio.h>

int main (void)
{
        float value1, value2;
        char operator;

        printf ("Type in your expression: \n");
        scanf ("%f %c %f", &value1, &operator, &value2);

        if ( operator == '+' )
                printf ("%.2f\n", value1 + value2);
        else if ( operator == '-' )
                printf ("%.2f\n", value1 - value2);
        else if ( operator == '*' )
                printf ("%.2f\n", value1 * value2);
        else if ( operator == '/' )
                printf ("%.2f\n", value1 / value2);
        
        return 0;
}
