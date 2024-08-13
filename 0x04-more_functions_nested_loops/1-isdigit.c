#include "main.h"

/**
 * _isdigit - check if c is num
 * @c: num of type int
 * Return: 1on success else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
