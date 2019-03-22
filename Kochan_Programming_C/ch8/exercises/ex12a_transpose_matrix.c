/*
 *      Exercise  8.12a from Kochan's "Programming in C"
 *
 *      A matrix M with i rows, j cols, can be transposed into a matrix N,
 *      which has j rows and i cols by simply setting:
 *              N{a,b} equal to value of M{b,a}
 *
 *              So N{row,col} = M{col, row}
 *
 *      Write a function transposeMatrix, that takes as an argument a
 *      4 x 5 matrix and store the results in a 5 x 4 matrix.
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

void transposeMatrix (int matrix[4][5])
{
        for ( int i = 0; i < 4; ++i ) {
                for ( int j = 0; j < 5; ++j )
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

        transposeMatrix(matrix_m);

        printf ("\nAfter the transposeMatrix function called: \n\n");
        for ( int i = 0; i < 5; ++i ) {
                for ( int j = 0; j < 4; ++j )
                        printf ("%5i", matrix_n[i][j]);

                printf ("\n");
        }
        
        printf ("\n");
        return 0;
}
