/*
 *      Program 10.11 from Kochan's "Programming in C"
 *
 *      Convert str to int equivalent
 *
 */

#include <stdio.h>

/*
 *      function to convert str to int
 */

int strToInt (const char string[])
{
        int i, intValue, result = 0;

        for ( i = 0; string[i] >= '0'  &&  string[i] <= '9'; ++i ) {
                intValue = string[i] - '0';
                result = result * 10 + intValue;
        }

        return result;
}

int main (void)
{
        printf ("%i\n", strToInt("245"));
        printf ("%i\n", strToInt("100") + 25);
        printf ("%i\n", strToInt("13x5"));

        return 0;
}
