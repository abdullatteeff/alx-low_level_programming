#include "main.h"
/**
 * str_concat - Function
 *
 * Description: concatenates two strings
 *
 * @s1: pointer parameter of type char, one of the strings
 * @s2: pointer parameter of type char, the othe string
 *
 * Return: returns NULL if failure, pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str1 = s1, *str2 = s2, *both;
	unsigned int i = 0, length = 0, x;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	for (x = 0; str1[x] || str2[x]; x++)
		length++;

	both = malloc(sizeof(char) * (length));

	if (both == NULL)
		return (NULL);

	for (x = 0; str1[x]; x++)
	{
		both[i++] = str1[x];
	}
	for (x = 0; str2[x]; x++)
	{
		both[i++] = str2[x];
	}

	return (both);
}
