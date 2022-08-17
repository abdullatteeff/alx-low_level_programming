#include "main.h"
/**
 * create_array - Function
 *
 * Description: creates an array of char and initialize it
 *
 * @size: parameter of type unsigned
 * @c: parameter of type char
 *
 * Return: returns null if size is 0, pointer for the array
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ch = malloc(sizeof(c) * size);
		if (ch == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < size; x++)
		{
			ch[x] = c;
		}
		return (ch);
	}
	return (ch);
}
