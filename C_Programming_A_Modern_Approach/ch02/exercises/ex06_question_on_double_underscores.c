/*
 *      Exercise 2.6 from King's C Programming: A Modern Approach
 *
 *      Why is it not a good idea for an identifier to contain
 *      more than one adjacent underscore?  For example:
 *              int current__balance;
 *
 *      Answer:
 *
 *      There was nothing specific in chapter 2 (that I could find)
 *      on this.  However, as identifier naming convention falls
 *      into two main styles:
 *
 *              1. monthly_dividends_paid
 *              2. monthlyDividendsPaid
 *
 *      Using double underscores would go against this, and could
 *      lead to issues if others work on code.
 *
 *      I did try using various identifier names with __ in them
 *      to see if the compiler complained, but it never did.
 *              float happy__Bool, happy__Complex are two
 *              examples.
 *
 */

#include <stdio.h>

int main (void)
{
        return 0;
}
