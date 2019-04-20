/*
 *      Exercise  11.4 from Kochan's "Programming in C"
 *
 *      Write a function called removeEntry to remove an entry from a
 *      linked list.
 *
 *      The sole argument to procedure should be a pointer to the list.
 *      Have function remove entry AFTER one pointed to by arg.
 *
 */

#include <stdio.h>

struct entry
{
        int value;
        struct entry *next;
};

void removeEntry (struct entry *item)
{
        item -> next = item -> next -> next;
}

int main (void)
{
        struct entry n1, n2, n3, n4;
        struct entry *index = &n1;
        struct entry *listPtr = &n1;

        n1.value = 100;
        n2.value = 200;
        n3.value = 300;
        n4.value = 400;

        n1.next = &n2;
        n2.next = &n3;
        n3.next = &n4;
        n4.next  = (struct entry *) 0;

        removeEntry(index);

        while ( listPtr != (struct entry *) 0 ) {
                printf ("%i\n", listPtr -> value);
                listPtr = listPtr -> next;
        }

        return 0;
}
