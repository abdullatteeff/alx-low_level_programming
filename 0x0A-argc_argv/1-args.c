#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array that contains the arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

