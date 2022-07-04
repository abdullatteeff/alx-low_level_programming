#include <stdio.h>
/**
*main - prints all possible combinations of single-digit numbers.
*followed by a new line.
*Numbers must be separated by ,, followed by a space
*Numbers should be printed in ascending order
*Return: Always 0, non-zero otherwise
*/

int main(void)
{

int n;
for (n = 48; n <= 57; n++)
{
	putchar(n);
	if (n != 57)
	{
		putchar(44);
		putchar(32);
	}
}


putchar(10); /* ASCII code for new line character */
return (0);
}
