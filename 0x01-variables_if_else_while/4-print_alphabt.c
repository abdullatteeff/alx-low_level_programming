#include <stdio.h>
/**
*main - prints the alphabet in lowercase,
*and then uppercase followed by a new line.
*Return: Always 0, non-zero otherwise
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
}
putchar(10);
return (0);
}
