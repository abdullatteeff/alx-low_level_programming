#include "main.h"

/**
 * print_binary - function that prints the binary of n
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	signed long int size;
	char num_in_binary;
	int print_zeros = 0;

	size = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar('1');
		return;
	}
	while (size >= 0)
	{
		num_in_binary = (n >> size) & 1;
		if (print_zeros == 1)
		{
			putchar(num_in_binary + '0');
		}
		else
		{
			if (num_in_binary == 1)
			{
				putchar(num_in_binary + '0');
				print_zeros = 1;
			}
		}
		size -= 1;
	}
}
