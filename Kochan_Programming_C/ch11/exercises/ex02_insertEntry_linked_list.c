/*
 *      Exercise  11.2 from Kochan's "Programming in C"
 *
 *      Write a function called insertEntry to add a new entry to a linked list.
 *        - Args: pointer to the entry to be inserted (of type struct entry)
 *        - Args: pointer to element in list after new entry inserted.
 *
 *      Not a great solution due to how fixed it is, but it follows the examples,
 *      and promise of dynamic allocation in later chapter.
 *
 */

#include <stdio.h>

struct entry
{
        int value;
        struct entry *next;
};

/*
 *      function to insert entry into list after oldEntry
 */

void insertEntry (struct entry *newEntry, struct entry *oldEntry)
{
        newEntry -> next = oldEntry -> next;
        oldEntry -> next = newEntry;
}

int main (void)
{
        struct entry n1, n2, n3, inserted;
        struct entry *newPtr = &inserted;
        struct entry *oldPtr = &n2;
        struct entry *listPtr = &n1;

        n1.value = 100;
        n2.value = 200;
        n3.value = 300;
        inserted.value = 250;

        n1.next = &n2;
        n2.next = &n3;
        n3.next  = (struct entry *) 0;

        insertEntry(newPtr, oldPtr);

        while ( listPtr != (struct entry *) 0 ) {
                printf ("%i\n", listPtr -> value);
                listPtr = listPtr -> next;
        }

        return 0;
}
