/*
 *      Exercise  2.1 from King's C Programming: A Modern Approach
 *
 *      - Create and run K&R's famous "hello, world" program.
 *      - Do you get a warning message from compiler?  How to fix?
 *              - I didn't get an error, but "return 0;" is prob
 *                what the author was referring to.
 *
 */

#include <stdio.h>

int main (void)
{
        printf ("hello, world\n");

        // not part of K&R:
        return 0;
}
