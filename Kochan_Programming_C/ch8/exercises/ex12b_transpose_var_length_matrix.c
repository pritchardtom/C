/*
 *      Exercise  8.12b from Kochan's "Programming in C"
 *
 *      Rewrite 12a to take the number of rows and cols as args,
 *      and to transpose the matrix of the specified dimensions.
 *
 */

#include <stdio.h>

int matrix_m[4][5] = {
                        {  1,  2,  3,  4,  5 },
                        {  6,  7,  8,  9, 10 },
                        { 11, 12, 13, 14, 15 },
                        { 16, 17, 18, 19, 20 }
};

int matrix_n[5][4];

void (transposeMatrix (int rows, int cols, int matrix[rows][cols]))
{
        for ( int i = 0; i < rows; ++i ) {
                for ( int j = 0; j < cols; ++j )
                        matrix_n[j][i] = matrix_m[i][j];
        }
}

int main (void)
{
        printf ("\nBefore the transposeMatrix function called: \n\n");
        for ( int i = 0; i < 4; ++i ) {
                for ( int j = 0; j < 5; ++j )
                        printf ("%5i", matrix_m[i][j]);
                printf ("\n");
        }

        transposeMatrix(4, 5, matrix_m);

        printf ("\nAfter the transposeMatrix function called: \n\n");
        for ( int i = 0; i < 5; ++i ) {
                for ( int j = 0; j < 4; ++j )
                        printf ("%5i", matrix_n[i][j]);

                printf ("\n");
        }

        printf ("\n");
        return 0;
}
