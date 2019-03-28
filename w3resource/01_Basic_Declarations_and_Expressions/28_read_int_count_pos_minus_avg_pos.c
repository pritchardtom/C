/*
 *      Exercise 28: Write a C program that read 5 numbers and counts
 *      the number of positive numbers and negative numbers.
 *
 *      Print average of positives entered.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, sum = 0;
        int count_pos = 0;
        int count_neg = 0;

        for ( int i = 0; i < 5; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &num);
                if ( num > 0 ) {
                        ++count_pos;
                        sum += num;
                }
                else if ( num < 0 )
                        ++count_neg;
                else
                        printf("ERROR\n");
        }

        printf("You entered: %i positive nums.\n", count_pos);
        printf("And entered: %i negative nums.\n\n", count_neg);
        printf("Average of positive numbers: %i.\n\n", sum / count_pos);

        return 0;
}
