#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr -> function that copies memory area.
 * @s: starting address for the value to be copied
 * @c: value to be filled
 * Return:  a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	strchr(s, c);
	return (c);
}
