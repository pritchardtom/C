/*
 *      Program 11.9 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

void exchange (int * const pint1, int * const pint2)
{
        int tmp;

        tmp = *pint1;
        *pint1 = *pint2;
        *pint2 = tmp;
}

int main (void)
{
        int num1 = -5;
        int num2 = 66;
        int *p1  = &num1;
        int *p2  = &num2;

        printf ("Num1: %i\n", num1);
        printf ("Num2: %i\n", num2);

        exchange(p1, p2);
        printf ("\nNum1: %i\n", num1);
        printf ("Num2: %i\n", num2);

        exchange (&num1, &num2);
        printf ("\nNum1: %i\n", num1);
        printf ("Num2: %i\n", num2);
        
        return 0;
}
