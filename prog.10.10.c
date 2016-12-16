#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char definition[50];
};

//Function to test if two strings are identical

int compareStrings ( const char s1[], const char s2[] )
{
    int i = 0, answer;

    while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
        ++i;

    if ( s1[i] < s2[i] )
        return -1;
    else if ( s1[i] == s2[i] )
        return 0;
    else
        return 1;
}

//Function to lookup word inside a dictionary
int lookup ( const struct entry dictionary[], const char search[], const int entries )
{
    int low = 0;
    int high = entries - 1;
    int mid, result;
    int compareStrings ( const char s1[], const char s2[] );

    while ( low <= high )
    {
        mid = (low + high / 2);
        result = compareStrings( dictionary[mid].word, search );

        if ( result == -1 )
            low = mid + 1;
        else if ( result == 0 )
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}

int main (void)
{
    const struct entry dictionary[100] =
    { { "aardvark", "a burrowing african mammal"        },
      { "abyss",    "a bottomless pit"                  },
      { "acumen",   "mentally sharp; keen"              },
      { "addle",    "to become confused"                },
      { "aerie",    "a high nest"                       },
      { "affix",    "to append; attach"                 },
      { "agar",     "a jelly made of seaweed"           },
      { "ahoy",     "a nautical greeting"               },
      { "aigrette", "an ornamental cluster of feathers" },
      { "ajar",     "partially opened"                  }  };

    int  entries = 10;
    char word[10];
    int  entry;
    int lookup ( const struct entry dictionary[], const char search[], const int entries );

    printf("enter word: ");
    scanf("%14s", word );

    entry = lookup ( dictionary, word, entries );

    if ( entry != -1 )
        printf("%s\n", dictionary[entry].definition);
    else
        printf("Sorry, word not found in dictionary\n");

    return 0;
}