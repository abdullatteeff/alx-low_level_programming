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

	for (n = 0; n < 10; n++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
