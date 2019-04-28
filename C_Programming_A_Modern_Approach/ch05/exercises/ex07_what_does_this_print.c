/*
 *      Exercise 5.7 from King's C Programming: A Modern Approach
 *
 *      What does the below statement print if i has value of 17?
 *      What does it print if i = -17?
 *
 */

#include <stdio.h>

int main (void)
{
        int i;

        i = 17;
        printf ("%d\n", i >= 0 ? i : -i);

        i = -17;
        printf ("%d\n", i >= 0 ? i : -i);

        return 0;
}
