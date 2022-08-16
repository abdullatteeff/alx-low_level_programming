#include "main.h"
#include <string.h>

/**
 * compare_chars - checks if two chars are equal
 * @s: string to be processed
 * @i: char 1
 * @j: char 2
 * Return: 1 if equal, 0 otherwise
 */

int compare_chars(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	if (i < j + 1)
	{
		return (compare_chars(s, i + 1, j - 1));
	}
	return (1);
}

/**
 * is_palindrome - checks if a str is palindrome
 * @s: str to be checked
 * Return: 1 if str is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (compare_chars(s, 0, len - 1));
}

