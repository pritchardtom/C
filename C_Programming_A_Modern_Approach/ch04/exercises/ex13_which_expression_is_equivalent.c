/*
 *      Exercise 4.13 from King's C Programming: A Modern Approach
 *
 *      Only one of the expression ++i and i++ is exactly the same
 *      as i += 1.  Which is it?
 *
 */

#include <stdio.h>

int main (void)
{
        int i = 0;

        printf ("   ++i: %d\n", ++i);
        i = 0;
        printf ("   i++: %d\n", i++);
        i = 0;
        printf ("i += 1: %d\n", i += 1);

        return 0;
}
