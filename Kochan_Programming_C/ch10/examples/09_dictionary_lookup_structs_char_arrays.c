/*
 *      Program 10.9 from Kochan's "Programming in C"
 *
 *      Dictionary look up
 */

#include <stdio.h>
#include <stdbool.h>

struct entry
{
        char word[15];
        char definition[50];
};

/*
 *      function to compare two strings
 */

bool equalStrings (const char s1[], const char s2[])
{
        int i = 0;
        bool areEqual;

        while ( s1[i] == s2[i]  &&  s1[i] != '\0'  &&  s2[i] != '\0' )
                ++i;

        if ( s1[i] == '\0'  &&  s2[i] == '\0' )
                areEqual = true;
        else
                areEqual = false;

        return areEqual;
}

/*
 *      function to look up a word inside dict.
 */

int lookup (const struct entry dictionary[], const char search[], const int entries)
{
        int i;

        for ( i = 0; i < entries; ++i )
                if (equalStrings(search, dictionary[i].word) )
                        return i;

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

        char word[10];
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
