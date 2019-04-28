/*
 *      Project 5.10 from King's C Programming: A Modern Approach
 *
 *      Using the switch statement, write a program that converts
 *      a numerical grade into a letter grade.
 *
 */

#include <stdio.h>

int main (void)
{
        int grade;

        printf ("Please enter your grade: ");
        scanf ("%d", &grade);

        if ( grade <= 0  ||  grade >= 100 )
                printf ("Error\n");
        else {

                switch (grade / 10) {

                        case 10:
                                printf ("Grade: A\n");
                                break;
                        case 9:
                                printf ("Grade: A\n");
                                break;
                        case 8:
                                printf ("Grade: B\n");
                                break;
                        case 7:
                                printf ("Grade: C\n");
                                break;
                        case 6:
                                printf ("Grade: D\n");
                                break;
                        default:
                                printf ("Grade: F\n");
                                break;
                }
        }

        return 0;
}
