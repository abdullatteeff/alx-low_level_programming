#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy -> function that copies memory area.
 * @dest: starting address for the value to be copied
 * @src: value to be filled
 * @n: number of bytes to be filled
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
