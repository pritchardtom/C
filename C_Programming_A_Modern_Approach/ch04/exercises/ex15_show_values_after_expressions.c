/*
 *      Exercise 4.15 from King's C Programming: A Modern Approach
 *
 *      Give the values of i and j after each of following expressions:
 *
 */

#include <stdio.h>

int main (void)
{
        int i = 1, j = 2;

        // a) i += j
        printf ("%d\n", i += j);

        // b) i--
        printf ("%d\n", i--);

        // c) i * j / i
        printf ("%d\n", i * j / i);

        // d) i % ++j
        printf ("%d\n", i % ++j);
        
        return 0;
}
