/*
 *      Program 10.3 from Kochan's "Programming in C"
 *
 *      Concat variable length char arrays
 */

#include<stdio.h>

/*
 *      function to concat two char arrays ("Strings") together
 */

void concat (char result[], const char str1[], const char str2[])
{
        int i, j;

        // copy str1 to result:

        for ( i = 0; str1[i] != '\0'; ++i )
                result[i] = str1[i];

        // copy str2 to result:

        for ( j = 0; str2[j] != '\0'; ++j )
                result[i + j] = str2[j];

        // terminate the concat string with a null char:

        result [i + j] = '\0';
}

int main (void)
{
        const char s1[] = { "Test " };
        const char s2[] = { "works." };
        char s3[20];

        concat(s3, s1, s2);

        printf ("%s\n", s3);

        return 0;
}
