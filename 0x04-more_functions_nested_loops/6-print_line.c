#include "main.h"

/**
* print_line -  prints more lines
* @n: an int parameter
*/
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
		return;
	for (x = 0; x < n; x++)
		_putchar('95');
	_putchar('\n');
}
