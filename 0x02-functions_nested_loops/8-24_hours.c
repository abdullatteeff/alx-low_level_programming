#include "main.h"

/**
*jack_bauer - function that prints every minute of the day of Jack Bauer,
*starting from 00:00 to 23:59.
*Return: Always n
*/

void jack_bauer(void)
{
	int j;
	int i;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}

			else if
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else if
			{
				_putchar(':);
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
	}
}
