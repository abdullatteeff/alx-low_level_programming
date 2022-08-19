#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: inferior limit
 * @max: superior limit
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	arr = malloc(sizeof(*arr) * size);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size && min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}

