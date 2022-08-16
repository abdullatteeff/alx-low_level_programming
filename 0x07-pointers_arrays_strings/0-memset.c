#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

