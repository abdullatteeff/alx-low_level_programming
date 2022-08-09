#include "main.h"

/**
 * _isalpha - checks if a charcacter belongs to alphabetic characters
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

