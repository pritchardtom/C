/*
 *      Project 5.11 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user for a two-digit number,
 *      then print the english word for the number.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, digit1, digit2;

        printf ("Enter two-digit number: ");
        scanf ("%d", &num);

        if ( num > 0  &&  num <= 19 ) {
                switch (num) {
                        case 1:
                                printf ("One\n");
                                break;
                        case 2:
                                printf ("Two\n");
                                break;
                        case 3:
                                printf ("Three\n");
                                break;
                        case 4:
                                printf ("Four\n");
                                break;
                        case 5:
                                printf ("Five\n");
                                break;
                        case 6:
                                printf ("Six\n");
                                break;
                        case 7:
                                printf ("Seven\n");
                                break;
                        case 8:
                                printf ("Eight\n");
                                break;
                        case 9:
                                printf ("Nine\n");
                                break;
                        case 10:
                                printf ("Ten\n");
                                break;
                        case 11:
                                printf ("Eleven\n");
                                break;
                        case 12:
                                printf ("Twelve\n");
                                break;
                        case 13:
                                printf ("Thirteen\n");
                                break;
                        case 14:
                                printf ("Fourteen\n");
                                break;
                        case 15:
                                printf ("Fifteen\n");
                                break;
                        case 16:
                                printf ("Sixteen\n");
                                break;
                        case 17:
                                printf ("Seventeen\n");
                                break;
                        case 18:
                                printf ("Eighteen\n");
                                break;
                        case 19:
                                printf ("Nineteen\n");
                                break;
                        default:
                                printf ("Error\n");
                                break;
                }
        }
        else {
                digit1 = num / 10;
                digit2 = num % 10;

                switch (digit1) {
                        case 2:
                                printf ("Twenty");
                                break;
                        case 3:
                                printf ("Thirty");
                                break;
                        case 4:
                                printf ("Forty");
                                break;
                        case 5:
                                printf ("Fifty");
                                break;
                        case 6:
                                printf ("Sixty");
                                break;
                        case 7:
                                printf ("Seventy");
                                break;
                        case 8:
                                printf ("Eighty");
                                break;
                        case 9:
                                printf ("Ninety");
                                break;
                        case 0:
                                printf ("\n");
                                break;
                }

                switch (digit2) {
                        case 1:
                                printf ("-one\n");
                                break;
                        case 2:
                                printf ("-two\n");
                                break;
                        case 3:
                                printf ("-three\n");
                                break;
                        case 4:
                                printf ("-four\n");
                                break;
                        case 5:
                                printf ("-five\n");
                                break;
                        case 6:
                                printf ("-six\n");
                                break;
                        case 7:
                                printf ("-seven\n");
                                break;
                        case 8:
                                printf ("-eight\n");
                                break;
                        case 9:
                                printf ("-nine\n");
                                break;
                        case 0:
                                printf ("\n");
                                break;
                }
        }

        return 0;
}
