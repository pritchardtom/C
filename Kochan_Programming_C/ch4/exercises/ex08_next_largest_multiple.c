/*
 *      Exercise 4.8 from Kochan's "Programming in C"
 *
 *      - Round off an integer i to next largest even multiple of another int j.
 *      - Use following formula:
 *              - next_multiple = i + j - i % j.
 *
 *      - This would be more work without function, so... function it is.
 *      - Even though it's not been covered in text yet.
 */

#include <stdio.h>

int next_multiple (int i, int j);

int main (void)
{
        printf ("%i\n", next_multiple(365, 7));
        printf ("%i\n", next_multiple(12258, 23));
        printf ("%i\n", next_multiple(996, 4));
        return 0;
}

int next_multiple (int i, int j)
{
        int multiple = i + j - i % j;
        return multiple;
}
