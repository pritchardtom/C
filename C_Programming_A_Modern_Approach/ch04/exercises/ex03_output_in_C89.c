/*
 *      Exercise 4.3 from King's C Programming: A Modern Approach
 *
 *      What is the value of each of the below expressions in C89?
 *
 *      compiled with: gcc -std="c89" ex03_output_in_C89.c
 *
 */

#include <stdio.h>

int main (void)
{
        printf ("%d\n", 8 / 5);
        printf ("%d\n", -8 / 5);
        printf ("%d\n", 8 / -5);
        printf ("%d\n", -8 / -5);

        return 0;
}