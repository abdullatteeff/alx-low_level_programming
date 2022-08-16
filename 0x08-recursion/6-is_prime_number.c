#include "main.h"

/**
 * find_prime - find if a number is prime
 * @t: target number
 * @i: iterative
 * Return: 1 if t is prime, 0 otherwise
 */

int find_prime(int t, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (t % i == 0)
	{
		return (0);
	}
	return (find_prime(t, i / 2));
}

/**
 * is_prime_number - returns 1 if is a prime number, otherwise return 0
 * @n: number to be processed
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (find_prime(n, n / 2));
}

