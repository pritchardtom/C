/*
 *      Exercise 07: Write a C program to display multiple variables.
 *
 */

#include <stdio.h>

int main (void)
{
        char c = 'W';
        int a = 125;
        int b = 12345;
        short s = 4043;
        long ax = 1234567890;
        float x = 2.13459;
        double dx = 1.1415927;
        unsigned long ux = 2541567890;

        printf ("a + c   =  %i\n", a + c);
        printf ("x + c   =  %f\n", x + c);
        printf ("dx + x  =  %f\n", dx + x);
        printf ("a + x   =  %f\n", a + x);
        printf ("s + b   =  %i\n", s + b);
        printf ("ax + b  =  %ld\n", ax + b);
        printf ("s + c   =  %i\n", s + c);
        printf ("ax + c  =  %ld\n", ax + c);
        printf ("ax + ux =  %lu\n", ax + ux);
        printf ("((int) dx) + ax =  %ld\n", ((int) dx) + ax);


        return 0;
}
