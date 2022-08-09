#include "main.h"

/**
 * *_strcpy - copies a str from src to dest
 * @src: source of the str
 * @dest: destination of the str
 * Return: copied str
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

