#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: string to be mapped
 * @size: size of the hash array
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
