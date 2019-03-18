/*
 *      Exercise 4.5 from Kochan's "Programming in C"
 *
 *      - What output would you expect from the following:
 *              #include <stdio.h>
 *
 *              int main (void)
 *              {
 *                      char c, d;
 *                      c = 'd';
 *                      d = c;
 *                      printf ("d = %c\n", d);
 *
 *                      return 0;
 *              }
 *
 * Ans = "d = d"
 */

#include <stdio.h>

int main (void)
{
        char c, d;
        c = 'd';
        d = c;
        printf ("d = %c\n", d);

        return 0;
}
