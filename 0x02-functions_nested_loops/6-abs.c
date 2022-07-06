#include "main.h"

/**
*_abs - computes the absolute value of an integer.
*@n: is an integer
*Return: Always n
*/

int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}
