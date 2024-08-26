#include "main.h"

/**
 * _memset - set memery with copnstant byte b
 * @b: constant byte
 * @s: address
 * @n: n bytes
 * Return: address s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
