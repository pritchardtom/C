/*
 *      Exercise 31: Write a C program to check a given integer is positive
 *      even, negative even, positive odd or negative odd.
 *
 *      Print even if the number is 0.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter number: ");
        scanf ("%i", &num);

        if ( num == 0 )
                printf ("Even\n");
        else if ( num > 0  &&  num % 2 == 0 )
                printf ("Postive even\n");
        else if ( num < 0  &&  num % 2 == 0 )
                printf ("Negative even\n");
        else if ( num > 0  &&  num % 2 != 0 )
                printf ("Postive odd\n");
        else if ( num < 0  &&  num % 2 != 0 )
                printf ("Negative odd\n");
        else
                printf ("ERROR\n");

        return 0;
}
