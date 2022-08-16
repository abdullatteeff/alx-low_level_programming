#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be processed
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			s[i] = toupper(s[i]);
		}
		else if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
		{
			s[i] = toupper(s[i]);
		}
		else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.')
		{
			s[i] = toupper(s[i]);
		}
		else if (s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
		{
			s[i] = toupper(s[i]);
		}
		else if (s[i - 1] == '(' || s[i - 1] == ')')
		{
			s[i] = toupper(s[i]);
		}
		else if (s[i - 1] == '{' || s[i - 1] == '}')
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}

