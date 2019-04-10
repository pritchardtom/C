/*
 *      Exercise  10.12 from Kochan's "Programming in C"
 *
 *      Write a function called strToFloat that converts a
 *      char string into a floating point value.
 *
 *      Have the function accept an optional leading minus
 *      sign.  So the call: strToFloat ("-867.6921")
 *      should return the value: -867.6921.
 *
 *      Solution uses same code for strToInt, but just converts
 *      int to float.  Also need to handle the decimal place.
 *
 */

#include <stdio.h>

/*
 *      function to convert str to float
 */

float strToFloat (const char string[])
{
        int intValue, result = 0;
        int neg_test = 0;
        int i = 0;

        if ( string[0] == '-' ) {
                neg_test = 1;
                ++i;
        }

        for ( ; string[i] != '\0'; ++i ) {
                if ( string[i] >= '0'  &&  string[i] <= '9' ) {
                        intValue = string[i] - '0';
                        result = result * 10 + (float) intValue;
                }
                else if ( string[i] == '.' )
                        ++i;
                else
                        printf ("Encountered something unexpected.\n");
        }

        if ( neg_test == 1 )
                return -result;
        else
                return result;
}

int main (void)
{
        printf ("%f\n", strToFloat("245.0"));
        printf ("%f\n", strToFloat("-245.6530"));

        return 0;
}
