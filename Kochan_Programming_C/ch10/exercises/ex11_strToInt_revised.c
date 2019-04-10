/*
 *      Exercise  10.11 from Kochan's "Programming in C"
 *
 *      Extend the strToInt function from 10.11 (../examples)
 *      so that if the first character of the string is a minus
 *      sign, the value that follows is taken as a negative num.
 *
 */

#include <stdio.h>

/*
 *      function to convert str to int
 *              - modified to handle - in string[0]
 */

int strToInt (const char string[])
{
        int i, intValue, result = 0;
        int neg_test = 0;

        if ( string[0] == '-' ) {
                neg_test = 1;
                ++i;
        }

        for ( ; string[i] >= '0'  &&  string[i] <= '9'; ++i ) {
                intValue = string[i] - '0';
                result = result * 10 + intValue;
        }

        if ( neg_test == 1 )
                return -result;
        else
                return result;
}


int main (void)
{
        printf ("%i\n", strToInt("245"));
        printf ("%i\n", strToInt("-245"));

        return 0;
}
