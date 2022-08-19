#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = 0;
	int print_separator = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (print_separator)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			print_separator = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
