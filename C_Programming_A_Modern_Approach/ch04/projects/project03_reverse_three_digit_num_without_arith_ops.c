/*
 *      Project 4.3 from King's C Programming: A Modern Approach
 *
 *      Rewrite the program in Project 4.2 so it prints the reversal
 *      of a three-digit number, without using arithmetic to split
 *      the number into digits.
 *
 *      Hint: See the barcode program.
 *
 */

#include <stdio.h>

int main (void)
{
        int digit1, digit2, digit3;

        printf ("Enter a three-digit number: ");
        scanf ("%1d%1d%1d", &digit1, &digit2, &digit3);

        printf ("Number reversed = %d%d%d\n", digit3, digit2, digit1);

        return 0;
}
