#include "main.h"
/**
 * _strdup - Function
 *
 * Description: contains a copy of a string parameter
 *
 * @str: parameter of type char, string to copy
 *
 * Return: returns pointer to newly allocated space
 * returns NULL if str is Null
 */
char *_strdup(char *str)
{
	char *store;
	unsigned int len = 0, x;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		len++;
	}
	len++;
	store = malloc(sizeof(char) * (len));
	if (store == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		store[x] = str[x];
	}
	store[len] = '\0';
	return (store);

}
