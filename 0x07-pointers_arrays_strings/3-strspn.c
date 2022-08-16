#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main str to be scanned
 * @accept: str containing the list of char to match
 * Return: number of char in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 32)
		{
			break;
		}
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}

