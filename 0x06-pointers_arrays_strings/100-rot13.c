#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

