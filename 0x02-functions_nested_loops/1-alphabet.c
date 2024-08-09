#include "main.h"

/**
 * print_alphabet - print alphabet
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char c = 97;

	for (; c <= 122;)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
