#include "hash_tables.h"

/**
 * create_node - creates a new node to use it in the hash table
 * @key: key
 * @value: value
 *
 * Return: new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - function that adds an element to the hash table
 *                  if there is a collision, it will be solved using
 *                  linked lists.
 * @ht: hash table to be manipulated
 * @key: key (cannot be empty)
 * @value: value associated with the key (can be an empty string)
 *
 * Return: 1 on succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *copy_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			copy_value = strdup(value);
			if (copy_value == NULL)
			{
				fprintf(stderr, "Error: duplicating value\n");
				return (0);
			}
			free(tmp->value);
			tmp->value = copy_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = create_node(key, value);
	if (hash_node == NULL)
	{
		fprintf(stderr, "Error: creating a new node\n");
		return (0);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
