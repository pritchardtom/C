/*
 *      Exercise 9.4 from Kochan's "Programming in C"
 *
 *      If you take the value of N as computed in exercise 9.2,
 *      subtract 621,049 from it, and then take that result modulo 7,
 *      you get a number from 0 to 6 that represents the day of the week
 *      on which the particular day falls.
 *
 *      This is wrong (it was a Sunday):
 *              For example, N 8/8/2004 = 732,239.
 *              732,239 – 621,049 gives 111,190, and 111,190 % 7 gives 2,
 *              indicating that this date falls on a Tuesday.
 *
 *      Use the functions developed in the previous exercise to develop
 *      a program that displays the day of the week on which a particular
 *      date falls.
 *
 *      Make certain that the program displays the day of the week in English.
 */

#include <stdio.h>

struct date
{
        int day;
        int month;
        int year;
};

struct date input;
long int N1;

struct date getDate (void);
long int calcN (struct date input);
void printDay (long int N1);

int main (void)
{
        getDate();
        calcN(input);
        printDay(N1);

        return 0;
}

struct date getDate (void)
{
        printf ("Enter DATE (d/m/yyyy): \n");
        scanf ("%i/%i/%i", &input.day, &input.month, &input.year);
        return input;
}

long int calcN (struct date input)
{
        if ( input.month <= 2 ) {
                N1 = ((1461 * input.year - 1) / 4) + (153 * input.month + 13) / (5 + input.day);
        }
        else
                N1 = ((1461 * input.year) / 4) + (153 * input.month + 1) / (5 + input.day);


        return N1;
}

void printDay (long int N1)
{
        long int day_num = (N1 - 621049) % 7;

        switch (day_num)
        {
                case 0:
                        printf ("Sunday\n");
                        break;
                case 1:
                        printf ("Monday\n");
                        break;
                case 2:
                        printf ("Tuesday\n");
                        break;
                case 3:
                        printf ("Wednesday\n");
                        break;
                case 4:
                        printf ("Thursday\n");
                        break;
                case 5:
                        printf ("Friday\n");
                        break;
                case 6:
                        printf ("Saturday\n");
                        break;
                default:
                        break;
        }
}

// /*
 //  *      functions to calc num of days between two dates
 //  */
 //
 // long int calcN1 (void)
 // {
 // }
 //
 // long int calcN2 (void)
 // {
 //         if (input.date2.month <= 2 ) {
 //                 N2 = ((1461 * input.date2.year - 1) / 4) + (153 * input.date2.month + 13) / 5 + input.date2.day;
 //         }
 //         else
 //                 N2 = (1461 * input.date2.year) / 4 + (153 * input.date2.month) / 5 + input.date2.day;
 //
 //         return N2;
 // }
