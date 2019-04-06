/*
 *      Exercise 07:  Write a C program to check if two given integers are
 *      in the range 100...200 inclusive.
 *
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;

        printf ("Enter number 1: ");
        scanf ("%i", &num1);
        printf ("Enter number 2: ");
        scanf ("%i", &num2);

        if ( num1 >= 100  &&  num1 <= 200 )
                printf ("num1 is in range.\n");

        if ( num2 >= 100  &&  num2 <= 200 )
                printf ("num2 is in range.\n");
                
        return 0;
}
