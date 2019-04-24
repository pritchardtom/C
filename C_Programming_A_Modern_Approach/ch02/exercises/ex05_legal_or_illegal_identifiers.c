/*
 *      Exercise  2.5 from King's C Programming: A Modern Approach
 *
 *      Which of the following are not legal C identifiers:
 *              - [100_bottles] -> wrong.
 *              - _100_bottles
 *              - one_hundred_bottles
 *              - bottles_by_the_hundred_
 *
 */

#include <stdio.h>

int main (void)
{
        // only incorrect identifier: int 100_bottles;
        int _100_bottles;
        int one_hundred_bottles;
        int bottles_by_the_hundred_;
        return 0;
}
