/*
 *      Exercise  11.6 from Kochan's "Programming in C"
 *
 *      Develop insertEntry and removeEntry for a doubly linked
 *      list, which operate in similar ways to those developed
 *      in previous exercises for single linked list.
 *
 *      Very primitive solution, expanding aforementioned
 *      functions developed in previous exercises.
 *
 */

#include <stdio.h>

struct entry
{
        int value;
        struct entry *previous;
        struct entry *next;
};

/*
 *      function to insert a new entry in a doubly linked list
 */

void insertEntry (struct entry *newEntry, struct entry *oldEntry)
{
        newEntry->next = oldEntry->next;
        oldEntry->next = newEntry;
        newEntry->previous = oldEntry;
}

/*
 *      function to remove an entry from a doubly linked list
 */

void removeEntry (struct entry *remove)
{
        remove->next = remove->next->next;
        remove->next->previous = remove;
}

int main (void)
{
        struct entry n1, n2, n3, n4, n;
        struct entry *listPtr = &n1;
        struct entry *new = &n;
        struct entry *old = &n4;
        struct entry *rm  = &n2; // remove this

        n1.value    = 100;
        n1.previous = NULL;
        n1.next     = &n2;

        n2.value    = 200;
        n2.previous = &n1;
        n2.next     = &n3;

        n3.value    = 300;
        n3.previous = &n2;
        n3.next     = &n4;

        n4.value    = 400;
        n4.previous = &n3;
        n4.next     = (struct entry *) 0;

        // set the variable new:
        n.value = 777;

        insertEntry(new, old);
        removeEntry(rm);

        while ( listPtr != (struct entry *) 0 ) {
                printf ("%i\n", listPtr->value);
                listPtr = listPtr -> next;
        }

        return 0;
}
