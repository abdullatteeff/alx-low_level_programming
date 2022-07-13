#include "main.h"
#include <string.h>
/**
* puts2 -> prints every other character of a string,
* starting with he first character
* followed by a new line.
* @str: string to be passed
*/
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar{'\n');
}
