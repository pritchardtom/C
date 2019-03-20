/*
 *      Program 6.2 from Kochan's "Programming in C"
 *
 *      Calculate average set of grades, counting number of fails.
 */

#include <stdio.h>

int main (void)
{
        int num_grades, i, grade;
        int gradeTotal = 0;
        int failureCount = 0;
        float average;

        printf ("How many grades will you be entering? \n");
        scanf ("%d", &num_grades);

        for ( i = 1; i <= num_grades; ++i ) {
                printf ("Enter grade #%i: ", i);
                scanf ("%d", &grade);

                gradeTotal = gradeTotal + grade;

                if ( grade < 65 )
                        ++failureCount;
        }

        average = (float) gradeTotal / num_grades;

        printf ("Grade average: %.2f\n", average);
        printf ("Number of fails: %i\n", failureCount);

        return 0;
}
