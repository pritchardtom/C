/*
 *      Project  3.4 from King's C Programming: A Modern Approach
 *
 *      Write a program that prompts the user to enter a telephone
 *      number in form (xxxxx-xxxxxx), and display output in form
 *      xxxxx.xxxxxx
 *
 */

#include <stdio.h>

int main (void)
{
        int area_code, number;

        printf ("Enter telephone number [(xxxxx)-xxxxxx]: ");
        scanf ("(%d)-%d", &area_code, &number);
        printf ("\n%.5d.%d\n", area_code, number);

        return 0;
}
