#include "main.h"

/**
 * add_arrays - adds two arrays of integers
 * @arr1: pointer to the array with the numbers from product
 * @arr2: pointer to the array with the numbers of total sum
 * @len_arrays: length of both arrays
 * Return: void
 */
void add_arrays(int *arr1, int *arr2, int len_arrays)
{
	int i = 0;
	int sum;
	int carry = 0;
	int index_arrays = len_arrays - 1;

	while (i < len_arrays)
	{
		sum = carry + arr1[index_arrays] + arr2[index_arrays];
		arr2[index_arrays] = sum % 10;
		carry = sum / 10;
		i++;
		index_arrays--;
	}
}

/**
 * _isdigit - checks if a char is a digit
 * @c: char to be checked
 * Return: one success, zero otherwise
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	printf("Error\n");
	return (0);
}

/**
 * multiply - multiply two numbers
 * @n1: multiplier (smaller one)
 * @l1: length of factor n1
 * @n2: multiplicand (larger one)
 * @l2: length of factor n2
 * @lr: length of result array
 * Return: one success, zero otherwise
 */
int *multiply(char *n1, int l1, char *n2, int l2, int lr)
{
	int i = 0;
	int *final_result;
	int *mult_result;
	int multiplicand_digit_position;
	int multiplier_digit_position = l1 - 1;
	int digit;
	int carry, value1, value2, product;

	final_result = calloc(sizeof(int), lr);
	while (i < l1)
	{
		mult_result = calloc(sizeof(int), lr);
		multiplicand_digit_position = l2 - 1;
		digit = lr - 1 - i; /*when doing a mult, we start from R to L*/
		if (!_isdigit(n1[multiplier_digit_position]))
		{
			return (NULL);
		}
		carry = 0;
		while (multiplicand_digit_position >= 0)
		{
			if (!_isdigit(n2[multiplicand_digit_position]))
			{
				return (NULL);
			}
			value1 = n1[multiplier_digit_position] - '0';
			value2 = n2[multiplicand_digit_position] - '0';
			product = value1 * value2;
			product += carry;
			mult_result[digit] += product % 10;
			carry = product / 10;
			digit--;
			multiplicand_digit_position--;
		}
		add_arrays(mult_result, final_result, lr);
		free(mult_result);
		i++;
		multiplier_digit_position--;
	}
	return (final_result);
}

/**
 * print_result - print final array
 * @result: pointer to final array
 * @len_result: length fo the final array
 */
void print_result(int *result, int len_result)
{
	int i = 0;

	while (result[i] == 0 && i < len_result)
	{
		i++;
	}
	if (i == len_result)
	{
		_putchar('0');
	}
	while (i < len_result)
	{
		_putchar(result[i++] + '0');
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int len_num1, len_num2, len_result;
	char *num1, *num2;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len_num1 = strlen(argv[1]);
	len_num2 = strlen(argv[2]);
	len_result = len_num1 + len_num2;
	if (len_num1 < len_num2)
	{
		num1 = argv[1];
		num2 = argv[2];
	}
	else
	{
		num1 = argv[2];
		num2 = argv[1];
		len_num1 = strlen(argv[2]);
		len_num2 = strlen(argv[1]);
	}
	result = multiply(num1, len_num1, num2, len_num2, len_result);
	if (result == NULL)
	{
		exit(98);
	}
	print_result(result, len_result);

	return (0);
}

