#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a str for any of a set of bytes
 * @s: str to be scanned
 * @accept: str containing the char to match
 * Return: pointer to the char in s that matches one of the char in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

