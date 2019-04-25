/*
 *      Project  3.2 from King's C Programming: A Modern Approach
 *
 *      Write a program that formats product information entered
 *      by the user.  A session with the program should look like
 *      this:
 *
 *      Enter item number: 583
 *      Enter unit price:  13.5
 *      Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 *      Item             Unit Price          Purchase Date
 *      583               £13.50               10/24/2010
 *
 */

#include <stdio.h>

int main (void)
{
        int item, day, month, year;
        float price;

        printf ("Enter item number: ");
        scanf ("%d", &item);

        printf ("Enter unit price: ");
        scanf ("%f", &price);

        printf ("Enter purchase date (dd/mm/yyyy): ");
        scanf ("%d/%d/%d", &day, &month, &year);

        printf ("\n\n");
        printf ("Item \t Unit Price \t Purchase Date\n\n");
        printf (" %d  \t   £%.2f    \t  %d/%d/%d\n\n", item, price, day, month, year);

        return 0;
}
