/*
 *      Exercise  10.10 from Kochan's "Programming in C"
 *
 *      Write a function called dictionarySort that sorts
 *      a dictionary, as defined in ../examples 10.9 and 10.10,
 *      into alphabetical order.
 *
 *      I decided to implement the rather poor "Bubble Sort"
 *      in this instance.  Algorithm from Wikipedia:
 *
 *      procedure bubbleSort( A : list of sortable items )
 *      n = length(A)
 *      repeat
 *          swapped = false
 *          for i = 1 to n-1 inclusive do
 *              if A[i] > A[i+1] then
 *              swap(A[i], A[i+1])
 *              swapped = true
 *              end if
 *          end for
 *      n = n - 1
 *      until not swapped
 *      end procedure
 *
 */

#include <stdio.h>
#include <stdbool.h>

struct entry
{
        char word[15];
        char definition[50];
};

struct entry dictionary[100] =
        { { "aardvark", "burrowing African mammal"   },
          { "affix",    "to append; attach"          },
          { "aigrette", "ornamental feather cluster" },
          { "acumen",   "mentally sharp; keen"       },
          { "ahoy",     "nautical greeting call"     },
          { "abyss",    "bottomless pit"             },
          { "acumen",   "mentally sharp; keen"       },
          { "aerie",    "high nest"                  },
          { "addle",    "become confused"            },
          { "agar",     "jelly made from seaweed"    },
          { "ajar",     "partially opened"           } };

/*
 *      function to compare two strings.
 *      slightly altered to provide three outcomes:
 *              - 0, if two strings are equal
 *              - 1, if s1 > s2;
 *              - -1, if s1 < s2;
 */

int equalStrings (const char s1[], const char s2[])
{
        int i = 0;

        while ( s1[i] == s2[i]  &&  s1[i] != '\0'  &&  s2[i] != '\0' )
                ++i;

        if ( s1[i] == s2[i] )
                return 0;
        else if ( s1[i] > s2[i] )
                return 1;
        else
                return -1;
}

void dictionarySort (struct entry dictionary[])
{
        bool swapped = false;

        for ( int i = 0; i < 11; ++i ) {
                for ( int j = 0; j < 11; ++j ) {
                        if ( equalStrings(dictionary[j].word, dictionary[j + 1].word) == 1 ) {
                                struct entry tmp = dictionary[j];
                                dictionary[j] = dictionary[j + 1];
                                dictionary[j + 1] = tmp;
                                swapped = true;
                        }
                }

                if ( !swapped )
                        return;
        }
}

int main (void)
{
        dictionarySort(dictionary);

        for ( int i = 0; i < 11; ++i )
                printf ("%s\n", dictionary[i].word);

        return 0;
}
