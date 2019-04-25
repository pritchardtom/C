/*
 *      Exercise  3.6 from King's C Programming: A Modern Approach
 *
 *      Modify ../examples/02... so the user is allowed to enter
 *      fractions that contain spaces before and after each / char.
 *
 */

#include <stdio.h>

int main (void)
{
        int num1, denom1, num2, denom2, result_num, result_denom;

        printf ("Enter 1st fraction: ");
        scanf ("%d / %d", &num1, &denom1);

        printf ("Enter 2nd fraction: ");
        scanf ("%d / %d", &num2, &denom2);

        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;

        printf ("The sum is: %d/%d\n", result_num, result_denom);

        return 0;
}
