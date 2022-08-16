#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: is the string to be printed between numbers
 * @n: number of agruments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	char *sep;
	va_list args;

	if (separator == NULL || *separator == 0)
	{
		sep = "";
	}
	else
	{
		sep = (char *)separator;
	}
	va_start(args, n);
	if (n > 0)
	{
		printf("%d", va_arg(args, int));
	}
	for (; i < n; i++)
	{
		printf("%s%d", sep, va_arg(args, int));
	}
	putchar('\n');
	va_end(args);
}
