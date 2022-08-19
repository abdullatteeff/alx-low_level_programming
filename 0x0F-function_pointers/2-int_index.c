#include "function_pointers.h"

/**
 * int_index - function that searches for an int
 * @array: array to be processed
 * @size: size of the array
 * @cmp: pointer to the function to ve used to compare values
 * Return: index of the first element that matches.
 *         -1 if no matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
