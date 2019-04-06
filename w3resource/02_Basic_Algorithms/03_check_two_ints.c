/*
 *      Exercise 03:  Write a C program to check two given integers, and
 *      return true if one of them is 30 or if their sum is 30.
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

        if ( (num1 == 30  ||  num2 == 30)  ||  num1 + num2 == 30  )
                printf ("True\n");
        else
                printf ("False\n");

        return 0;
}
