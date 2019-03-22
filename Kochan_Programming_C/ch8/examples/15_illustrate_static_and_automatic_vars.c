/*
 *      Program 8.15 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

void auto_static (void)
{
        int autoVar = 1;          // value set to 1 each time function called.
        static int staticVar = 1; // value set to 1 only once (exe begins)

        printf ("automatic: %i || static = %i\n", autoVar, staticVar);

        ++autoVar;
        ++staticVar;
}

int main (void)
{
        for ( int i = 0; i < 5; ++i )
                auto_static();

        return 0;
}
