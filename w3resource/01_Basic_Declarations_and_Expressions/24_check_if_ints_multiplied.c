/*
 *      Exercise 24: Write a C program that reads two integers and checks
 *      if they are multiplied or not.
 *
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;

        printf ("Enter number: ");
        scanf ("%i", &num1);

        printf ("Enter number > previous number: ");
        scanf ("%i", &num2);

        if ( num2 % num1 == 0 )
                printf ("Yes.\n");
        else
                printf ("No.\n");
        
        return 0;
}
