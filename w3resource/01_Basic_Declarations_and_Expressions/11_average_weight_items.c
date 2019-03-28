/*
 *      Exercise 11: Write a C program that accepts two items' weight, and
 *      the number of purchases and calculate the average value of the items.
 *
 */

#include <stdio.h>

int main (void)
{
        float item1_weight, item2_weight;
        float item1_purchases, item2_purchases;
        float average;

        // item 1:

        printf ("\nEnter weight for item 1: \n");
        scanf ("%f", &item1_weight);
        printf ("Enter qty of item 1: \n");
        scanf ("%f", &item1_purchases);

        // item 2:

        printf ("\nEnter weight for item 2: \n");
        scanf ("%f", &item2_weight);
        printf ("Enter qty of item 2: \n");
        scanf ("%f", &item2_purchases);

        // average:

        average = ( (item1_weight * item1_purchases) +
                    (item2_weight * item2_purchases)) /
                    (item1_purchases + item2_purchases);

        printf ("\nAverage = %f\n\n", average);

        return 0;
}
