#include "main.h"

/**
 * _memcpy - mem
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char c;

	c = dest[n];
	src[n] = c;
	return (src);
}
