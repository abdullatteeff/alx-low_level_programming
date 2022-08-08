#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'
 */
void print_triangle(int size)
{
	int rows, spaces, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows <= (size - 1); rows++)
		{
			for (spaces = 0; spaces < (size - 1) - rows; spaces++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
