#include "main.h"

/**
 * *_strcat - concatenates two str
 * @src: string one to be concatenated
 * @dest: string two to be concatenated
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

