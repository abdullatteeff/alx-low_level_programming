#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: array to be processed
 * @size: size of the array
 * @action: function to be applied
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
