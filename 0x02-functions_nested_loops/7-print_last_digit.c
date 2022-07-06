#include "main.h"

/**
*print_last_digit - prints the last digit of a number.
*@n: is an integer
*Return: Always the remainder of n
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
		x = n % 10;
		return ('0' + x);
	}
	else
	return ('0' + x);
}
