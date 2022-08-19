#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of ptr
 * @new_size: new size in bytes of the new memory block
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;

	if (new_size > old_size)
	{
		arr = malloc(new_size);
		free(ptr);
		return (arr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		free(ptr);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
