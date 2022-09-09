// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
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
int count[N];

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    char wor[LENGTH + 1];
    int i = 0;
    for (int j = 0; j < N; j++)
    {
        count[j] = 0;s
    }
    FILE *file = fopen("dictionaries/large", "r");
    if (file == NULL)
    {
        return false;
    }
    while (fscanf(file, "%s", &wor[i]) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }
        strcpy(&wor[i],  n->word);
        int h = hash(n->word);
        n->next = table[h];
        table[h]->next = n;
        count[h]++;
        i++;
    }
    return true;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int prod = 1;
    for (int i = 0,n = strlen(word) + 1; i < n; i++)
    {
        char ch = toupper(word[i]);
        prod = prod * ch;
    }
    return (prod % 13000);
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + count[i];
    }
    return sum;
}

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int h = hash(word);
    for (node *cursor = table[h]; cursor != NULL; cursor = cursor->next)
    {
        if (strcasecmp(word, cursor->word))
        {
            return true;
        }
    }
    return false;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        for (node *cursor = table[i]; cursor != NULL; cursor = cursor->next)
        {
            node *temp = cursor;
            free(temp);
        }
    }
    return true;
}
