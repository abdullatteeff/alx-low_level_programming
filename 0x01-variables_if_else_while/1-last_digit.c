#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - assign a random number to the variable each time it is executed
*and print the last digit of the number stored in the variable n.
*Return: Always 0, non-zero otherwise
*/

int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("Last digit of %d is ", n);
if (lastDigit > 5)
{
	printf("%d and is greater than 5", lastDigit);
}
if (lastDigit == 0)
{
	printf("%d and is 0", lastDigit);
}
if (lastDigit < 6 && lastDigit != 0)
{
	printf("%d and is less than 6 and not 0", lastDigit);
}
printf("\n");
return (0);
}
