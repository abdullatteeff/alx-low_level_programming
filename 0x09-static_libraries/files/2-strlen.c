#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to be processed
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

