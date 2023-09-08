#include "hash_tables.h"
/**
 * hash_table_print - A function that prints a hash table
 *
 * @ht: The hash table
 * Return: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (printed)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

