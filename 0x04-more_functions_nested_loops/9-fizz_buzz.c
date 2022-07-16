#include "main.h"
#include <stdio.h>
/**
* fizz_buzz -  fizz_buzz
*/

void fizz_buzz(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz ");
		if (x % 5 == 0)
			printf("Buzz ");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		printf("\n");
	}
}
