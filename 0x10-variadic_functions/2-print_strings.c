#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: is the string to be printed between numbers
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	char *sep;
	char *string;
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
		string = va_arg(args, char *);
		if (string == NULL)
		{
			string = "(nil)";
		}
		printf("%s", string);
	}
	for (; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			string = "(nil)";
		}
		printf("%s%s", sep, string);
	}
	putchar('\n');
	va_end(args);
}
