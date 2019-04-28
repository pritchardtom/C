/*
 *      Program 5.1 from King's C Programming: A Modern Approach
 *
 *      Calculates a broker's commission.
 *
 */

#include <stdio.h>

int main (void)
{
        float commission, value;

        printf ("Enter value of trade: ");
        scanf ("%f", &value);

        if ( value < 2500.00 )
                commission = 30.00 + .017 * value;
        else if ( value < 6250.00 )
                commission = 56.00 + .0066 * value;
        else if ( value < 20000.00 )
                commission = 76.00 + .0034 * value;
        else if ( value < 50000.00 )
                commission = 100.00 + .0022 * value;
        else if ( value < 500000.00 )
                commission = 155.00 + .0011 * value;
        else
                commission = 255.00 + .0009 * value;

        if ( commission < 39.00 )
                commission = 39.00;

        printf ("Commission: £%.2f\n", commission);

        return 0;
}
