#include "main.h"

/**
* _strncat ->  appends the src string to the dest string
* @dest: - param1
* @src: - param2
* @n: - param3
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (dest);
}
