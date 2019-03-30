/*
 *      Exercise 36: Write a C program to read a password until it is correct.
 *      For wrong password print "Incorrect password" and for correct password
 *      For correct password print "Correct password" and quit the program.
 *
 *      The correct password is 1234.
 *
 */

#include <stdio.h>

#define PASSWORD 1234

int main (void)
{
        int exit = 0;
        int ans;

        while ( exit != 1 ) {
                printf ("Enter password: ");
                scanf ("%i", &ans);

                if ( ans == PASSWORD ) {
                        printf ("Correct Password\n");
                        exit = 1;
                } else
                        printf ("Incorrect Password\n\n");
        }

        return 0;
}
