/*
 *      Exercise 64: Write a C program that accepts integers from the user
 *      until a zero or a negative number, display the number of positive values,
 *      the minimum value, the maximum value and the average of all numbers.
 *
 *      This is a tedious solution, but I'm pretty tired at the mo.
 *
 */

#include <stdio.h>

int main (void)
{
        int numbers[1000];
        int min, max, sum;
        int avg = 0;
        int num = 1;
        int count = 0;

        for ( int i = 0; i < 1000; ++i )
                numbers[i] = -1;

        int i = 0;
        while ( num > 0 ) {
                printf ("Enter number: ");
                scanf ("%i", &num);

                if ( num == 0 )
                        break;
                else {
                        numbers[i] = num;
                        ++i;
                }
        }

        min = numbers[0];
        max = numbers[0];

        for ( int i = 0; numbers[i] != -1; ++i ) {
                if ( numbers[i] < min ) {
                        min = numbers[i];
                        sum += numbers[i];
                        ++count;
                }
                else if ( numbers[i] > max ) {
                        max = numbers[i];
                        sum += numbers[i];
                        ++count;
                }
                else {
                        sum += numbers[i];
                        ++count;
                }
        }

        printf ("Min value in list: %i\n", min);
        printf ("Max value in list: %i\n", max);
        printf ("Avg value in list: %i\n", sum / count);

        return 0;
}
