#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: main str to be scanned
 * @needle: small str to be searched
 * Return: pointer to the first ocurrence or null if not present
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

