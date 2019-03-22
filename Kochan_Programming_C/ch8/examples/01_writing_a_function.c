/*
 *      Program 8.1 from Kochan's "Programming in C"
 *      Writing a function.
 *
 *      The first line of a function definition tells the compiler (in order, l-r)
 *              1. Who can call it
 *              2. The type of value it returns
 *              3. Its name
 *              4. The arguments it takes
 */

#include <stdio.h>

void printMessage (void)
{
        printf ("Programming is fun.\n");
}

int main (void)
{
        printMessage();
        return 0;
}
