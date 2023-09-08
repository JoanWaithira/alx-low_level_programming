#include "hash_tables.h"

/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * ht: the hash table
 * key: is key
 * value: value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;


