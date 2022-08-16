#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - changes all lowercase letters of a str to uppercase
 * @s: string to be processed
 * Return: string in upppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' || s[i] <= 'z')
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}

