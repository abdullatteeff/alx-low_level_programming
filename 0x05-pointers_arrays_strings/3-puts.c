#include "main.h"

/**
* _puts -> prints a string, followed by a new line, to stdout.
* @str: character pointer to be passed.
*/

void _puts(char *str)
{
	for (; str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
