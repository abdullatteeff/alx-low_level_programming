#include "main.h"

/**
 * reverse_array - reverse a content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int aux;
	int i;

	for (i = 0; i < n; i++)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n - 1] = aux;
		n--;
	}
}

