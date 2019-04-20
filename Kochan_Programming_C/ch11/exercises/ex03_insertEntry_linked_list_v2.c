/*
 *      Exercise  11.3 from Kochan's "Programming in C"
 *
 *      The function developed in 11.2 only inserts an element after an
 *      existing element in the list, preventing you from inserting a new
 *      entry at front of list.
 *
 *      How can you use this same function and overcome problem?
 *      Hint: Think about setting up a special structure to point to beginning
 *      of list.
 *
 *      I've solved this very literally (i.e., not amending the function)
 *      at all, whether it was 100% accurate in ex02 or not (it did follow)
 *      the notes in this respect, so I've assumed it is correct.
 *
 *      As a result, the handling of this issue is done in main.
 *
 */

#include <stdio.h>

struct entry
{
        int value;
        struct entry *next;
};

void insertEntry (struct entry *newEntry, struct entry *oldEntry)
{
        newEntry -> next = oldEntry -> next;
        oldEntry -> next = newEntry;
}

int main (void)
{
        struct entry n1, n2, n3, inserted;
        struct entry *new = &inserted;
        struct entry *old = &n1;
        struct entry *list_start = &n1;
        struct entry *listPtr = &n1;

        n1.value = 100;
        n2.value = 200;
        n3.value = 300;

        inserted.value = 50;
        inserted.next = &n1;

        n1.next = &n2;
        n2.next = &n3;
        n3.next = (struct entry *) 0;

        if ( new -> next == list_start ) {
                list_start = &inserted;
                listPtr = &inserted;
        }
        else
                insertEntry(new, old);

        while ( listPtr != (struct entry *) 0 ) {
                printf ("%i\n", listPtr -> value);
                listPtr = listPtr -> next;
        }

        return 0;
}
