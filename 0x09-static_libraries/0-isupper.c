#include "main.h"

/**
 * _isupper - chech uppercase
 * Return: 1 on success else 0
 * @c: chars to be checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
