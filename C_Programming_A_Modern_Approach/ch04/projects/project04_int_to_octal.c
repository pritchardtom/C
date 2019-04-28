/*
 *      Project 4.4 from King's C Programming: A Modern Approach
 *
 *      Write a program that reads an int and displays it in octal.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter a number: ");
        scanf ("%d", &num);

        printf ("%d as an octal = %o\n", num, num);

        return 0;
}
