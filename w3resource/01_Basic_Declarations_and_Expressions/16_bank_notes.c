/*
 *      Exercise 16: Write a C program to read an amount (int) and
 *      break the amount into smallest possible number of bank notes.
 *
 *      This solution could probably be improved.
 *
 */

#include <stdio.h>

int main (void)
{
        int withdrawal;
        int ans;

        printf ("Enter amount in £: ");
        scanf ("%i", &withdrawal);

        ans = withdrawal / 50;
        withdrawal -= ans * 50;
        printf ("Note(s) of £50: %i\n", ans);

        ans = withdrawal / 20;
        printf ("Note(s) of £20: %i\n", ans);
        withdrawal -= ans * 20;

        ans = withdrawal / 10;
        printf ("Note(s) of £10: %i\n", ans);
        withdrawal -= ans * 10;

        ans = withdrawal / 5;
        printf ("Note(s) of  £5: %i\n", ans);
        withdrawal -= ans * 5;

        return 0;
}
