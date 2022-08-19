#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimun number of coins to make a change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int value, num_of_coins;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		value = atoi(argv[1]);
		num_of_coins = 0;
		while (value >= 25)
		{
			value -= 25;
			num_of_coins++;
		}
		while (value >= 10)
		{
			value -= 10;
			num_of_coins++;
		}
		while (value >= 5)
		{
			value -= 5;
			num_of_coins++;
		}
		while (value >= 2)
		{
			value -= 2;
			num_of_coins++;
		}
		while (value >= 1)
		{
			value--;
			num_of_coins++;
		}
		printf("%d\n", num_of_coins);
	}
	return (0);
}

