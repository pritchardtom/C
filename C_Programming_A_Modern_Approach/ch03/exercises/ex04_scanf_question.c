/*
 *      Exercise  3.4 from King's C Programming: A Modern Approach
 *
 *      Suppose that we call scanf as follows:
 *
 *              scanf ("%d%f%d", &i, &x, &j)
 *
 *      If the user enters 10.3 5 6, what will the values of
 *      ints i and j, and float x be?
 *
 */

#include <stdio.h>

int main (void)
{
        int i, j;
        float x;

        printf ("Enter a value for i (int), x (float), j (int): ");
        scanf ("%d%f%d", &i, &x, &j);

        printf ("i: %d \t x: %f \t j: %d\n", i, x, j);

        return 0;
}
