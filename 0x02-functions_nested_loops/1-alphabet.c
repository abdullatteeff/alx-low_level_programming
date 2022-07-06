#include "main.h"

/**
*print_alphabet - prints the alphabet, in lowercase
*the function prints all the lower case alphabets
*Return: Always return void
*/

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
