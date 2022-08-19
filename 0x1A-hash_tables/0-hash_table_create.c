#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hast table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (hash_table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failes\n");
		free(hash_table);
		return (NULL);
	}
	for (; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
