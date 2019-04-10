/*
 *      Program 11.3 from Kochan's "Programming in C"
 *
 *      Using pointers in expressions.
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;
        int *p1, *p2;

        num1 = 5;
        p1 = &num1;

        num2 = *p1 / 2 + 10;
        p2 = p1;

        printf ("num1 = %i, num2 = %i, *p1 = %i, *p2 = %i\n", num1, num2, *p1, *p2);
        
        return 0;
}
