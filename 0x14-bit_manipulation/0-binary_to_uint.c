#include "main.h"

/**
 * binary_to_uint - function that converts a binary num to an unsigned int
 * @b: pointing to a str of 0 and 1 chars
 *
 * Return: converted num or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			if (b[i] == '0')
			{
				decimal <<= 1;
			}
			else if (b[i] == '1')
			{
				decimal = (decimal << 1) | 1;
			}
		}
	}
	return (decimal);
}
