#include "main.h"

/**
 * find_sqrt - find sqrt of a natural number
 * @t: target
 * @i: powered number
 * Return: sqrt root of target
 */

int find_sqrt(int t, int i)
{
	if (i * i > t)
	{
		return (-1);
	}
	else if (i * i == t)
	{
		return (i);
	}
	return (find_sqrt(t, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: return natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}

