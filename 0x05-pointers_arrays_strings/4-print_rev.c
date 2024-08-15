#include "main.h"

/**
 * _strlen - return len str
 * @s: string
 * Return: len of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - print reverse str
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
