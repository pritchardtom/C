/*
 *      Exercise 11.12 from Kochan's "Programming in C"
 *
 *      See comments in main for description of exercise.
 *
 */

#include <stdio.h>

int main (void)
{
        // given these declarations:

        char *message  = "Programming in C is fun\n";
        char message2[] = "You said it\n";
        char *format   = "x = %i\n";
        int x = 100;

        // determine if these are valid and produce same output as others:

        // SET 1:
        printf ("Programming in C is fun\n");
        printf ("%s", "Programming in C is fun\n");
        printf ("%s", message);
        printf (message);

        // SET 2:
        printf ("You said it\n");
        printf ("%s", message2);
        printf (message2);
        printf ("%s", &message2[0]);

        // SET 3:
        printf ("said it\n");
        printf (message2 + 4);
        printf ("%s", message2 + 4);
        printf ("%s", &message2[4]);

        // SET 4:
        printf ("x = %i\n", x);
        printf (format, x);

        return 0;
}
