#include "main.h"

/**
*print_alphabet_x10 - prints the 10 times alphabet, in lowercase
*the function prints all the lower case alphabets
*Return: Always return void
*/

void print_alphabet_x10(void)
{
	int j;
	int n;

	while (n <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j * 10);
		}
		n++;
	}
	_putchar('\n');
}
