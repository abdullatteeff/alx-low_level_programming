#include "main.h"
#include <string.h>
/**
* print_rev_recursion -> prints a string, in reverse,
* followed by a new line.
* @s: string to be passed
*/

void print_rev_recursion(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
