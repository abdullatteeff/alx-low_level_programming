#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr -> locates a substring.
 * @haystack: starting address for the value to be copied
 * @needle: value to be filled
 * Return:  ointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
