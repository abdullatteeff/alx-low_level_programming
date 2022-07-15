#include "main.h"

/**
* more_numbers -  prints more numbers
*/
void more_numbers(void)
{
	int x = 0;

	while (x <= 10)
		for (; x <= 14; x++)
		{
			_putchar(x + '0');
		}
		x++;
		_putchar('\n');
}
