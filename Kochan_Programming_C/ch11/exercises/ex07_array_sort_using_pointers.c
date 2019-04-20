/*
 *      Exercise 11.7 from Kochan's "Programming in C"
 *
 *      Write a pointer version of the sort function from ch 8.
 *
 *      Be certain that pointers are exclusively used by the
 *      function, including index vars in loops.
 *
 *      Algorithm used in Program 8.12 to sort array:
 *
 *      Simple exchange sort algorithm:
 *              1. Set i to 0.
 *              2. Set j to i + 1.
 *              3. If a[i] > a[j], exchange values
 *              4. Set j to j + 1.  If j < n goto 3.
 *              5. Set i to i + 1.  If i < n - 1, goto 2.
 *              6. a is now sorted in ascending order.
 *
 */

#include <stdio.h>

/*
 *      function to sort array using pointer(s)
 */

void sort (int *array, int const n)
{
        int tmp;
        int *j;
        int * const arrayEnd = array + n;

        for ( ; array < arrayEnd; ++array )
                for (j = array + 1; j < arrayEnd; ++j )
                        if ( *array > *j ) {
                                tmp = *array;
                                *array = *j;
                                *j = tmp;
                        }
}

int main (void)
{
        int nums[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                         44, -3, -9, 12, 17, 22, 6, 11};

        printf ("\nBEFORE SORT:\n");

        for ( int i = 0; i < 16; ++i )
                printf ("%i ", nums[i]);

        printf ("\n\nAFTER SORT:\n");
        sort(nums, 16);

        for ( int i = 0; i < 16; ++i )
                printf ("%i ", nums[i]);

        printf ("\n");
        return 0;
}
