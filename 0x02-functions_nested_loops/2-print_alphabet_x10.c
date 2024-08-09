#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 98; c <= 122; c++)
			_putchar(c);
		_putchar('\n');
	}
}
