#include <stdio.h>
/**
*main - prints all possible combinations of double-digit numbers.
*followed by a new line.
*Numbers must be separated by ,, followed by a space
*Numbers should be printed in ascending order
*Return: Always 0, non-zero otherwise
*/

int main(void)
{

int n;
int ch;
for (ch = 48; ch <= 57; ch++)
{
	for (n = 49; n <= 57; n++)
	{
		if (n > ch)
		{	putchar(ch);
			putchar(n);
			if (ch != 56 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}

return (0);
}
