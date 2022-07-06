#include "main.h"

/**
*_isalpha - checks for alphabetic character.
*@c: is a character
*Return: 1, 0 otherwise
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
