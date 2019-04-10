/*
 *      Program 11.8 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

void test (int *int_pointer)
{
        *int_pointer = 100;
}

int main (void)
{
        int i = 50, *p = &i;

        printf ("Before test: i = %i\n", i);
        test(p);

        printf (" After test: i = %i\n", i);

        return 0;
}
