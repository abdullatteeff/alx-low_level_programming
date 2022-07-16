#include "main.h"

/**
* print_diagonal -  prints more lines
* @n: an int parameter
*/
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
