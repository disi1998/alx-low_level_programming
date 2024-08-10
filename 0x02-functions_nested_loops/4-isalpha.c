#include "main.h"

/**
 * _isalpha - chack if c is alpha
 * @c: char
 * Return: 1 on success else 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') | (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
