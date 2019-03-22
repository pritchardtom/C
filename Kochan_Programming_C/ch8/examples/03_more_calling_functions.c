/*
 *      Program 8.3 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

void printMessage (void)
{
        printf ("Programming is fun.\n");
}

int main (void)
{
        for ( int i = 1; i <= 5; ++i )
                printMessage();
        
        return 0;
}
