#include "main.h"

/**
*print_sign - prints the sign of a number.
*@n: is a integer
*Return: -1, 0, 1 based on the given conditions
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
