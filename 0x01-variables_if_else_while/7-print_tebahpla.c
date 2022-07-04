#include <stdio.h>
/**
*main - prints the lowercase alphabet in reverse,
*followed by a new line.
*Return: Always 0, non-zero otherwise
*/

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
putchar(10); /* ASCII code for new line character */
return (0);
}
