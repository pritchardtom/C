#include <stdio.h>

/*
 * Exercise 1-12 from K&R pg. 21:
 *   - Write a program that prints its input one word per line.
 */

int main (void)
{
        int c;

        while (( c = getchar()) != EOF ) {
                if ( c == ' ' )
                        putchar('\n');
                else
                        putchar(c);

        }
        return 0;
}
