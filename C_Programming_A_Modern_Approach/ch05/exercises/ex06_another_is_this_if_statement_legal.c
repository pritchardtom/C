/*
 *      Exercise 5.6 from King's C Programming: A Modern Approach
 *
 *      Is the below if statement legal?  If so, what does it do
 *      when n = 5?
 *
 */

#include <stdio.h>

int main (void)
{
        int n = 5;

        if ( n == 1-10 )
                printf ("n is between 1 and 10\n");

        return 0;
}
