/*
 *      Exercise 23: Write a C program that reads three floating values and
 *      checks if it is possible to make a triangle with them.
 *
 *      Also calculate the perimeter of the triangle if the said values are valid.
 *
 */

#include <stdio.h>

int main (void)
{
        float nums[3];

        for ( int i = 0; i < 3; ++i ) {
                printf ("Enter numsber: ");
                scanf ("%f", &nums[i]);
        }

        if ( nums[0] + nums[1] > nums[2]  &&
             nums[0] + nums[2] > nums[1]  &&
             nums[1] + nums[2] > nums[0]) {

                     float perimeter = nums[0] + nums[1] + nums[2];
                     printf ("Perimeter of triangle: %f\n", perimeter);
        }
        else
                printf ("Nope.\n");
}
