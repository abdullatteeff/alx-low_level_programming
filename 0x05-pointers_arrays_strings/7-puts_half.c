#include "main.h"
#include <string.h>
/**
* puts_half -> prints every other character of a string,
* starting with he first character
* followed by a new line.
* @str: string to be passed
*/
void puts_half(char *str)
{
	int i, x, y;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
