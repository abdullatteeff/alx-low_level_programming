#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix of integers
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i <= size * size; i++)
	{
		sum1 += *(a + i);
		i += size;
	}
	i -= size * 2;
	while (i > 0)
	{
		sum2 += *(a + i);
		i -= size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

