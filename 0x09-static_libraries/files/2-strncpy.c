#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination of the copied string
 * @src: source of the string
 * @n: number of characters to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u = 0;
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[u] != '\0')
	{
		u++;
	}
	for (j = 0; (j <= u) && (j < n); j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

