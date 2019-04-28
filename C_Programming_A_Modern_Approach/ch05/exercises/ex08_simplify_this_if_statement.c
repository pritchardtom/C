/*
 *      Exercise 5.8 from King's C Programming: A Modern Approach
 *
 *      Simplify this if statement:
 *
 *      if ( age >= 13 )
 *              if ( age <= 19 )
 *                      teenager = true;
 *              else
 *                      teenager = false;
 *      else if ( age < 13 )
 *              teenager = false;
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
        int age;
        _Bool teenager;

        age = 14;

        if ( age >= 13  &&  age <= 19 )
                teenager = true;
        else
                teenager = false;

        printf ("%d\n", teenager);

        // simpler still:
        age = 10;
        printf ("%d\n", (age >= 13  &&  age <= 19) ? 1 : 0);

        return 0;
}
