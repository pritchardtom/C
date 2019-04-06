/*
 *      Exercise 74: Write a C programming to display the integer equivalents of letters.
 *
 *      This ia a little repetition of exercise 70.  I've posted the same solution
 *      here, because it effectively does the same thing.
 */

#include <stdio.h>

int main (void)
{
        char c;

        for ( c = 65; c <= 122; c += 1 ) {
                if (c > 90  &&  c < 97)
                        continue;
                printf ("%d = %c\n", c, c);
        }

        return 0;
}
