/*
 *      Program 10.10 from Kochan's "Programming in C"
 *
 *      Modification of 10.9 to use binary search lookup
 *
 *      Binary Search Algorithm:
 *              1.  Set low to 0; high to n-1.
 *              2.  If low > high, x not in M; terminate.
 *              3.  Set mid to (low + high) / 2.
 *              4.  If M[mid] < x, set low to mid + 1; goto 2.
 *              5.  If M[mid] > x, set high to mid -1; goto 2.
 *              6.  M[mid] equals x; terminate.
 *
 */

#include <stdio.h>

struct entry
{
        char word[15];
        char definition[50];
};

/*
 *      function to compare two strings
 */

int compareStrings (const char s1[], const char s2[])
{
        int i = 0, answer;

        while ( s1[i] == s2[i]  &&  s1[i] != '\0'  &&  s2[i] != '\0' )
                ++i;

        if ( s1[i] < s2[i] )
                answer = -1;
        else if ( s1[i] == s2[i] )
                answer = 0;
        else
                answer = -1;

        return answer;
}

/*
 *      function to look up a word inside dict.
 */

int lookup (const struct entry dictionary[], const char search[], const int entries)
{
        int low = 0;
        int high = entries -1;
        int mid, result;

        while ( low <= high ) {
                mid = (low + high) / 2;
                result = compareStrings(dictionary[mid].word, search);

                if ( result == -1 )
                        low = mid + 1;
                else if ( result == 1 )
                        high = mid - 1;
                else
                        return mid;
        }

        return -1;
}

int main (void)
{
        const struct entry dictionary[100] =
                { { "aardvark", "burrowing African mammal"   },
                  { "abyss",    "bottomless pit"             },
                  { "acumen",   "mentally sharp; keen"       },
                  { "addle",    "become confused"            },
                  { "aerie",    "high nest"                  },
                  { "affix",    "to append; attach"          },
                  { "agar",     "jelly made from seaweed"    },
                  { "ahoy",     "nautical greeting call"     },
                  { "aigrette", "ornamental feather cluster" },
                  { "ajar",     "partially opened"           } };

        char word[15];
        int entries = 10;
        int entry;

        printf ("Enter word: ");
        scanf ("%14s", word);
        entry = lookup(dictionary, word, entries);

        if ( entry != -1 )
                printf ("%s\n", dictionary[entry].definition);
        else
                printf ("Word %s, not in dictionary\n", word);

        return 0;
}
