#include "main.h"

/**
 * _calloc - allocates memroy for an array
 * @nmemb: number of block to be allocated
 * @size: size of each block
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

