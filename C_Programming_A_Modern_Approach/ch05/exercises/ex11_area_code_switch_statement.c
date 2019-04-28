/*
 *      Exercise 5.11 from King's C Programming: A Modern Approach
 *
 *      Write a switch statement to print corresponding city for
 *      area code.
 *
 */

#include <stdio.h>

int main (void)
{
        int area_code;

        printf ("Enter three digit area code: ");
        scanf ("%d", &area_code);

        switch (area_code) {
                case 229:
                        printf ("Albany\n");
                        break;
                case 404: case 470: case 770:
                        printf ("Atlanta\n");
                        break;
                case 478:
                        printf ("Macon\n");
                        break;
                case 706: case 762:
                        printf ("Columbus\n");
                        break;
                case 912:
                        printf ("Savannah\n");
                        break;
                default:
                        printf ("Area code not recognised\n");
                        break;
        }

        return 0;
}
