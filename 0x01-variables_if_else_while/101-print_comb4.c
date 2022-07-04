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
int m;
for (ch = 48; ch <= 57; ch++)
{
	for (n = 49; n <= 57; n++)
	{
		for (m = 50; m <= 57; m++)
		{
			if (n > ch && m > n)
			{	putchar(ch);
				putchar(n);
				putchar(m);
				if (ch != 55 || n != 56 || m != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
}

return (0);
}
