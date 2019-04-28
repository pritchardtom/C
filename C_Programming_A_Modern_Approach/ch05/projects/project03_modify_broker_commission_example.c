/*
 *      Project 5.3 from King's C Programming: A Modern Approach
 *
 *      Modify the broker program (../examples/01...) by:
 *              1. Ask user to enter num of shares and price per share,
 *                 instead of asking for value of trade.
 *
 *              2. Compute the commission as follows:
 *
 *                      - £33 plus 3p per share if shares < 2000
 *                      - £33 plus 2p per share if shares > 2000
 *
 */

#include <stdio.h>

int main (void)
{
        int share_num;
        float share_price, commission;

        printf ("Enter number of shares: ");
        scanf ("%d", &share_num);

        printf ("Enter share price: ");
        scanf ("%f", &share_price);

        if ( share_num > 0  &&  share_num < 2000 )
                commission = 33.00 + (.03 * share_num);
        else if ( share_num >= 2000 )
                commission = 33.00 + (.02 * share_num);
        else
                printf ("Error\n");

        printf ("Commission: £%.2f\n", commission);

        return 0;
}
