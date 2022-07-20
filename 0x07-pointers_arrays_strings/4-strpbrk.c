#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk ->  gets the length of a prefix substring.
 * @s: starting address for the value to be copied
 * @accept: value to be filled
 * Return:  a pointer to the byte in s that
 * matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
