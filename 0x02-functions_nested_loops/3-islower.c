#include "main.h"

/**
 * _islower - chech char if lower
 * @c: given char
 * Return: 0 on success else 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
