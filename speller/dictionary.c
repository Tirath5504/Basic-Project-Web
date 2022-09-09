// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 13000;

// Hash table
node *table[N];

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    const char w[LENGTH + 1];
    int i = 0;
    FILE *file = fopen("/dictionaries/large.txt", "r");
    if (file == NULL)
    {
        return false;
    }
    while (fscanf(file, "%s", w[i]) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }
        strcpy(w[i],  n->word);
        int h = hash(n->word);
        n->next = table[h];
        table[h]->next = n;
        i++;
    }
    return false;
}

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char w[LENGTH + 1])
{
    int prod = 1;
    for (int i = 0; i <= LENGTH; i++)
    {
        char ch = toupper(w[i]);
        prod = prod * ch;
    }
    return (prod % 13000);
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
