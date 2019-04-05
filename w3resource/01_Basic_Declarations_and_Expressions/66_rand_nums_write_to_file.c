/*
 *      Exercise 66: Write a C program that generates 50 random numbers
 *      between -0.5 and 0.5 and writes them in a file rand.dat.
 *
 *      The first line of ran.dat contains the number of data and the next 50
 *      lines contains the 50 random numbers.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMS 50

int main (void)
{
        char str;
        FILE *fptr;

        fptr = fopen("rand.dat", "w");

        if ( fptr == NULL ) {
                printf ("Error writing file.\n");
                return 0;
        }

        srand(time(NULL));
        fprintf (fptr, "%d\n", NUMS);

        for ( int i = 1; i <= NUMS; ++i )
                fprintf (fptr, "%.4f\n", (rand() % 2001 - 1000) / 2.e3);

        fclose(fptr);

        fptr = fopen ("rand.dat", "r");
        str = fgetc(fptr);

        while ( str != EOF ) {
                printf ("%c", str);
                str = fgetc(fptr);
        }

        fclose(fptr);
        return 0;
}
