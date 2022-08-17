#include "main.h"
/**
 * argstostr - Function
 *
 * Description: concatenates all the arguments of your program
 *
 * @ac: parameter of type int
 * @av: pointer to a pointer of type char
 *
 * Return: returns NULL if any of the vals is 0 and char otherwise
 */
char *argstostr(int ac, char **av)
{
	char *str = "";
	int  i, length = ac, arg, byte;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			length++;
	}
	length++;
	str = malloc(sizeof(char) * length);

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[length] = '\0';

	return (str);
}
