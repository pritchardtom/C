/*
 *      Project  3.3 from King's C Programming: A Modern Approach
 *
 *      Books are identified by an ISBN, whose numbers are
 *      arranged into five groups, each with a different
 *      meaning: GS1 prefix, group ID, publisher, etc...
 *
 *      Write a program that breaks down an ISBN entered by
 *      the user.
 *
 */

#include <stdio.h>

int main (void)
{
        int gs1, group, publisher, item, checkDigit;

        printf ("Enter ISBN: ");
        scanf ("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &checkDigit);

        printf ("\n\n");
        printf ("  GS1 prefix: %d\n", gs1);
        printf ("     GroupID: %d\n", group);
        printf ("Publisher ID: %d\n", publisher);
        printf (" Item number: %d\n", item);
        printf (" Check Digit: %d\n\n", checkDigit);

        return 0;
}
