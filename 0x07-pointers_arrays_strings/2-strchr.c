#include "main.h"

/**
 * *_strchr - locates a char in a str
 * @s: str to be scanned
 * @c: char to be searched in str
 * Return: pointer to the first occurrence of char c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}

