/*
 *      Program 11.5 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

struct intPtrs
{
        int *p1;
        int *p2;
};

int main (void)
{
        struct intPtrs pointers;
        int num1 = 100, num2;

        pointers.p1 = &num1;
        pointers.p2 = &num2;

        *pointers.p2 = -97;

        printf ("Num1: %i, *pointers.p1: %i\n", num1, *pointers.p1);
        printf ("Num2: %i, *pointers.p2: %i\n", num2, *pointers.p2);

        return 0;
}
