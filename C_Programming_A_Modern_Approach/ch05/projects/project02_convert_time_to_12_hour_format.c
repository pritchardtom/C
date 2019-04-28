/*
 *      Project 5.2 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user for a 24-hour time,
 *      then display the time in 12-hour form.
 *
 *      I realise I could do this simpler, but I wanted to see how
 *      switch statements inside of if statements work.
 *
 */

#include <stdio.h>

int main (void)
{
        int hour, mins;

        printf ("Enter a time (hh:mm): ");
        scanf ("%d:%d", &hour, &mins);

        if ( hour >= 13  &&  hour <= 23 )
                switch (hour) {
                        case 13:
                                printf ("1:%02d PM\n", mins);
                                break;
                        case 14:
                                printf ("2:%02d PM\n", mins);
                                break;
                        case 15:
                                printf ("3:%02d PM\n", mins);
                                break;
                        case 16:
                                printf ("4:%02d PM\n", mins);
                                break;
                        case 17:
                                printf ("5:%02d PM\n", mins);
                                break;
                        case 18:
                                printf ("6:%02d PM\n", mins);
                                break;
                        case 19:
                                printf ("7:%02d PM\n", mins);
                                break;
                        case 20:
                                printf ("8:%02d PM\n", mins);
                                break;
                        case 21:
                                printf ("9:%02d PM\n", mins);
                                break;
                        case 22:
                                printf ("10:%02d PM\n", mins);
                                break;
                        case 23:
                                printf ("11:%02d PM\n", mins);
                                break;
                        default:
                                printf ("Error\n");
                                break;
                }
        else if ( hour == 0 )
                printf ("12:%02d PM\n", mins);
        else if ( hour > 0  &&  hour < 12 )
                printf ("%02d:%02d AM\n", hour, mins);
        else if ( hour == 12 )
                printf ("12:%02d PM\n", mins);
        else
                printf ("Error\n");

        return 0;
}
