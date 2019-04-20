/*
 *      Exercise  11.5 from Kochan's "Programming in C"
 *
 *      Define the appropriate structure definition for a
 *      doubly linked list.
 *
 *      Write a small program to implement and print the
 *      elements of the list.
 *
 */

#include <stdio.h>

struct entry
{
        int value;
        struct entry *before;
        struct entry *next;
};

int main (void)
{
        struct entry n1, n2, n3, n4;
        struct entry *listPtr = &n1;

        n1.value  = 100;
        n1.before = NULL;
        n1.next   = &n2;

        n2.value  = 200;
        n2.before = &n1;
        n2.next   = &n3;

        n3.value  = 300;
        n3.before = &n2;
        n3.next   = &n4;

        n4.value  = 400;
        n4.before = &n3;
        n4.next   = (struct entry *) 0;

        while ( listPtr != (struct entry *) 0 ) {
                printf ("%i\n", listPtr -> value);
                listPtr = listPtr -> next;
        }

        return 0;
}
