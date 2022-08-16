#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: str to be processed
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = 1;
	}
	return (i + _strlen_recursion(s + 1));
}

