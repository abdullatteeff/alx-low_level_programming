#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a str followed by a new line to stdout
 * @str: str to be printed
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
