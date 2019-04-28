/*
 *      Project 4.2 from King's C Programming: A Modern Approach
 *
 *      Extend the program in Project 4.1 to handle three-digit
 *      numbers.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, digit1, digit2, digit3;

        printf ("Enter a three-digit number: ");
        scanf ("%d", &num);

        digit1 = num % 10;
        num /= 10;
        digit2 = num % 10;
        digit3 = num / 10;

        printf ("Number reversed = %d%d%d\n", digit1, digit2, digit3);

        return 0;
}
